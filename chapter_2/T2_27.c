#include <stdio.h>

int uadd_ok(unsigned x, unsigned y){
	unsigned res = x + y;
	if(res < x || res < y){
		return 0;	
	}
	return 1;
}

int main(){
	unsigned x1 = 1111;
	unsigned y1 = 1111;
	printf("solution1 : %d", uadd_ok(x1, y1));

	unsigned x2 = 12;
	unsigned y2 = 4294967291;
	printf("solution2 : %d", uadd_ok(x2, y2)); 
}
