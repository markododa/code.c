#include <stdio.h>
int main () {
	char c;
	int i;
	//printf("%d", 0xAE1E);
	while((i = scanf("%c", &c)) != '\n') {
		if ((c >='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F')){
			printf("%c %d", c,);
		}
	}
	return 0;
}

