#include <stdio.h>
#include "show_bytes.h"

int f1(unsigned word){
	int res = (int) ((word << 24) >> 24);
	unsigned tmp = (word << 24) >> 24;
	show_bytes((byte_pointer) &res, sizeof(int));
	show_bytes((byte_pointer) &tmp, sizeof(int));
	return res;
}

int f2(unsigned word){
	int res = ((int) word << 24) >> 24;
	int tmp = (int) word << 24;
	printf("word: %u (int)word << 24 : %d, code :", word, tmp);
	
	show_bytes((byte_pointer) &tmp, sizeof(int));
	show_bytes((byte_pointer) &res, sizeof(int));
	return res;
}

void exec(int w){
	printf("w: %d  ", w);
	printf("f1 exec ..\n");
	printf("f1: %d \n", f1(w));
	printf("f2 exec ..\n");
	printf("f2: %d \n", f2(w));
	printf("\n");
}

int main(){
	int w1 = 0x00000076;
	int w2 = 0x87654321;
	int w3 = 0x000000c9;
	int w4 = 0xEDCBA987;

//	printf("w1 : %d, f1 : %d, f2: %d \n\n\n", w1, f1(w1), f2(w1));
//	printf("w2 : %d, f1 : %d, f2: %d \n\n\n", w1, f1(w2), f2(w2));
//	printf("w3 : %d, f1 : %d, f2: %d \n\n\n", w1, f1(w3), f2(w3));
//	printf("w4 : %d, f1 : %d, f2: %d \n\n\n", w1, f1(w4), f2(w4));
	exec(w1);
	exec(w2);
	exec(w3);
	exec(w4);
	return 0;
}
