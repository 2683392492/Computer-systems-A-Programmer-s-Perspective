#include <stdio.h>
#include <stdlib.h>
/*假设从第0位开始*/
int any_odd_one(unsigned x)
{
	
	return !!(x&(0xAAAAAAAA));	
}
int main(int argc,char *argv[])
{
	unsigned x=(unsigned)atoi(argv[1]);
	printf("%d\n",any_odd_one(x));
	return 0;		
}
