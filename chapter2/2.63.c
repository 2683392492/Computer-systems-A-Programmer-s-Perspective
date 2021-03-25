#include <stdio.h>
#include <stdlib.h>
unsigned sra(unsigned int x,int k)
{
	unsigned int xsra=(int)x>>k;
	int w=sizeof(int)<<3;
	unsigned int mask=~0<<(w-k);
	printf("%#x\n",mask);
	xsra&=~mask;
	return xsra;
}
int  srl(int x,int k)
{
	int xsrl=(unsigned int)x>>k;
	int w=sizeof(int)<<3;
        int mask=~0<<(w-k);
	printf("%#x\n",mask);
	xsrl|=mask;
	return xsrl;
}

int main(int argc,char *argv[])
{
	unsigned int x=(unsigned int)atoi(argv[1]);
	int y=atoi(argv[1]);
	int k=atoi(argv[2]);
	printf("0x%08x\n",sra(x,k));	
	printf("0x%08x\n",srl(y,k));
	return 0;
}
