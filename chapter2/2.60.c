#include <stdio.h>
unsigned replace_byte(unsigned x,int i,unsigned char b)
{
	//int leftmove=8*i;
	int leftmove=i<<3;
	x&=~(0xff<<leftmove);
	return x|=(b<<leftmove);
	
}
int main(void)
{
	unsigned test_num1=replace_byte(0x12345678,2,0xAB);
	unsigned test_num2=replace_byte(0x12345678,0,0xAB);
	printf("test_num1=%#X\n",test_num1);
	printf("test_num2=%#X\n",test_num2);

}

