#include <stdio.h>
#include <stdlib.h>

int odd_ones(unsigned x)
{
	int w=0;
	int flag=0;	
	while(w<32)
	{
		if((x%2)==1)
			++flag;
		x>>=1;			
		++w;
	}	
	return flag&1;
}
int main(int argc,char *argv[])
{
	unsigned x=(unsigned)atoi(argv[1]);
	printf("%d\n",odd_ones(x));
	return 0;
}
