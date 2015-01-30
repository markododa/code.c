#include <stdio.h>
int main () {
	int n, i;
	scanf("%d", &n);
	float niza[n], suma;
	scanf("%f %f", &niza[0], &niza[1]);
	suma = niza[0]+niza[1];
	for (i=2; i<n; i++) {
		niza[i]=suma/2;
		suma+=niza[i];
	}
	for (i=0; i<n; i++) {
		printf("%.2f ", niza[i]);
	}
	return 0;
}
