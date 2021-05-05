#include <stdio.h>
#include "show_bytes.h"


int main(){
	short sx = -12345;
	unsigned uy = sx;

	printf("uy = %u :\n", uy);
	printf("(unsigned)(int)x: %u \n", (unsigned)(int) sx);
	printf("(unsigned)x: %u \n", (unsigned) sx);
	printf("(unsigned)(unsigned short)x: %u \n", (unsigned)(unsigned short) sx);
	show_bytes((byte_pointer) &uy, sizeof(unsigned));


}
