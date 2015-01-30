#include <stdio.h>
int main () {
	int n, i, broj, suma, y, stepen;
	scanf("%d", &n);
	int niza[n];
	for (i=0; i<n; i++) {
		scanf("%d", &niza[i]);
	}
	for (i=n-1; i>=0; i--) {
		suma = 0;
		broj = niza[i];
		while (broj) {
			if ((broj%10)%2==0) {
				stepen=1;
				y = broj%10;
				while (y) {
					stepen*=3;
					y--;
				}
				suma+=stepen;
			}
			broj=broj/10;
		}
		printf("%d \n", suma);
	}
	return 0;
}

