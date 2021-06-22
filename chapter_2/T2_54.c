#include <stdio.h>

#define POS_INFINTY 1e400

#define NEG_INFINTY (-POS_INFINTY)

#define NEG_ZERO -1 / NEG_INFINTY

void main(){
//	POS_INFINTY = 1 << 309;
//	NEG_INFINTY = (-1）<< 309;
//	NEG_ZERO = 0;
	printf("s1 : %f", POS_INFINTY);
	printf("s2 : %f", NEG_INFINTY);
	printf("s3 : %f", NEG_ZERO);
}
