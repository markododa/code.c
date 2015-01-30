#include <stdio.h>
int main () {
	int masa;
	float visina;
	scanf("%d %f", &masa, &visina);
	printf("%f\n", masa/(visina/100 * visina/100));
}
