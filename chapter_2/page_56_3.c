#include <stdio.h>
#include "show_bytes.h"
#include <math.h>

int main(){
	long res = 15 * pow(16,7) + 15 * pow(16,6) + 15 * pow(16,5) + 15 * pow(16,4) + 12 * pow(16,3) + 7 * pow(16,2) + 		 12 * pow(16,1) + 15;
	printf("res : %d \n", res);
	return 0;
}
