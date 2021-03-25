#include <stdio.h>
typedef unsigned char * bytes_pointer;
/*
 *无论大端和小端做类型转换都会遵循保持原值的法则
 *所以直接进行运算或类型转换都无法得出正确的结论
 *为什么&x取地址后的地址一定是首地址呢
 *
 * */
int main(void)
{
	unsigned char  c=0xff;
	unsigned int x=0xff;
	bytes_pointer b=(bytes_pointer)&x;
	if(*b==0xff)
		return 1;
	return 0;
}
