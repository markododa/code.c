#include <stdio.h>
int main () {
	char c;
	int resultat = 0;
	//printf("%d", 0xAE1E);
	while((c = getchar()) !='\n') {
		if ((c >='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F')){
			switch(c) {
				case '0':
					c = 0;
					break;
				case '1':
					c = 1;
					break;
				case '2':
					c = 2;
					break;
				case '3':
					c = 3;
					break;
				case '4':
					c = 4;
					break;
				case '5':
					c = 5;
					break;
				case '6':
					c = 6;
					break;
				case '7':
					c = 7;
					break;
				case '8':
					c = 8;
					break;
				case '9':
					c = 9;
					break;
				case 'a':
				case 'A':
					c = 10;
					break;
				case 'b':
				case 'B':
					c = 11;
					break;
				case 'c':
				case 'C':
					c = 12;
					break;
				case 'd':
				case 'D':
					c = 13;
					break;
				case 'e':
				case 'E':
					c = 14;
					break;
				case 'f':
				case 'F':
					c = 15;
					break;
			}
			resultat=(resultat << 4) +c;
		}

	}
	printf("%X %d", resultat, resultat);
	return 0;
}

