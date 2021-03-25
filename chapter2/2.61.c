#include <stdio.h>
#include <stdlib.h>
int get_msb(int x)
{
	int shift_val=(sizeof(int)-1)<<3;
	int xright=x>>shift_val;
	return xright&&0xff;
}
int get_lsb(int x)
{
	return x&0xff;
}	
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Usage ./2.61.o test_num\n");
		return -1;
	}
	int x=atoi(argv[1]);		
	printf("all 1 = %d\n",!~x);
	printf("all 0 = %d\n",!x);
	printf("lsb 1 = %d\n",!(get_lsb(x)^0xff));
	printf("msb 0 = %d\n",!get_msb(x));
	return !~x || !x || !((get_lsb(x)^0xff))||!get_msb(x);
}
