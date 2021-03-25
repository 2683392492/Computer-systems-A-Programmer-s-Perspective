#include <stdio.h>
#include <stdlib.h>

int get_mask(int k)
{
	int mask=0;
	int base=0x1;
	for(int i=k;i>0;i--)
	{
		mask=mask+base;
		base*=2;
	}
	return mask;
}

unsigned srl(unsigned int x,int k)
{
	unsigned sxra=(int)x >> k;
	int mask=get_mask(k);
	int shift_val=(sizeof(int)<<3)-k;
	sxra&=~(mask<<shift_val);
	return sxra;	
}
int main(int argc,char *argv[])
{
	unsigned int x=(unsigned int )atoi(argv[1]);
	int k=atoi(argv[2]);	
	unsigned y=srl(x,k);
	printf("%#x\n",y);
	return 0;
}
