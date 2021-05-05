#include <stdio.h>

int strlonger(char* s, char* t ){
	return strlen(s) - strlen(t) > 0;
}

int main(){
	char p[] = "";
	char q[] = "hello";
	char *s = p;
	char *t = q;
	int res = strlonger(s, t);
	printf("res : %d", res);
}
