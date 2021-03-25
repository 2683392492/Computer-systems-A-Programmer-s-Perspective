#include <stdio.h>


int main(void)
{
	int x=~0;
	int shift_val=(sizeof(int)-3)<<3;
	int xright=x>>shift_val;
	if(!(x^xright))
		return 1;
	return 0;
	
}
