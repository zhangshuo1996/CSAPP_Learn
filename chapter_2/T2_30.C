#include <stdio.h>

int tadd_ok(int x, int y){
	int res = x + y;
	if((x > 0 && y > 0 && res <= 0) || (x < 0 && y < 0 && res >= 0)){
		return 0;	
	}
	return 1;
}

int main(){
	int x1 = 1111;
	int y1 = 1111;
	printf("solution1 : %d", tadd_ok(x1, y1));

	int x2 = 2147483647;
	int y2 = 4294967;
	printf("solution2 : %d", tadd_ok(x2, y2)); 
	
	int x3 = -2147483647;
	int y3 = -4294967;
	printf("solution3 : %d", tadd_ok(x3, y3)); 
}
