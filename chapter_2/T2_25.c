#include <stdio.h>

float sum_element(float a[], int length){
	int i;
	float result = 0;
	for(i = 0; i <= length - 1; i++){
		result += a[i];
	}
	return result;
}

int main(){
	float a[2] = {0.1, 0.2};
	float res1 = sum_element(a, 2);
	printf("res1: %f", res1);

	float a2[0] = {};
	float res2 = sum_element(a2, 0);
	printf("res2: %f", res2);
}
