#include <stdio.h>
int main () {
	int matrica[100][100];
	int m, i, j;
	int suma[2][2];
	scanf("%d", &m);
	for (i=0; i<m; i++) {
		for (j=0; j<m; j++){
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=0; i<m; i++) {
		for (j=0; j<m; j++) {
			printf("%d ", matrica[i][j]);
		}
		printf("\n");
	}
	return 0;
}

