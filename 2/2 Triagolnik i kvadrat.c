#include <stdio.h>
int main () {
	int a, b, c, a2;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &a2);
	if (a+b+c > 4*a2) {
	printf("Triagolnik");}
	else if (a+b+c < 4*a2) {
	printf("Kvadrat");}
	else {
	printf("Isti se"); }
	return 0;
}

