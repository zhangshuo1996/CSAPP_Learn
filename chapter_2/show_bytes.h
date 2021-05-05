#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x){
	printf("show int  ");	
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	printf("show float  ");
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	printf("show void   ");
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
	int ival = val;
	float fval= (float) ival;
	int *pval = &ival;
	
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

void test_case_in_page_34(){
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;
	show_bytes(valp, 1);
	show_bytes(valp, 2);
	show_bytes(valp, 3);
	printf("sizeof int :%d", sizeof(int));
}

void test_case2_in_page_34(){
	const char *s = "abcdef";
	show_bytes((byte_pointer) s, strlen(s));
}

