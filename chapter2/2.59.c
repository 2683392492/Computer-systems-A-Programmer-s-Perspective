#include <stdio.h>
/*
 *A&=~(B<<C)
 *A|=(B<<C)
 * */
int main(void)
{
	int x=0x89ABCDEF;
	int y=0x76543210;
	int b1=x&0xff;
	y&=~(0xff);
	y|=(b1);
	printf("%#x\n",y);
	return 0;
}
