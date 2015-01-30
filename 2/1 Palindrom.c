#include <stdio.h>
int main () {
	int broj;
	scanf("%d", &broj);
	if (broj > 999 || broj < 99) {
		printf("Nevaliden vlez");
	}
	else if (broj % 10 == broj % 100) {
	printf("Palindrom"); }
	else {
	printf("Ne e palindrom"); }
	return 0;
}
