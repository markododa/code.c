#include <stdio.h>
int main() {
	int m, n, i, j, suma=0;
	scanf("%d %d", &m, &n);
	int matrica[m][n];
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d", &matrica[m][n]);
			suma+=matrica[m][n];
		}
	}
	printf("%d", suma);
	return 0;
}
