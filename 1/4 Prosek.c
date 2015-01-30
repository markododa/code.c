#include <stdio.h>
int main () {
	int niza[5], suma, i;
	scanf("%d %d %d %d %d", &niza[0], &niza[1], &niza[2], &niza[3], &niza[4]);
	for (i=0; i<5; i++) {
	suma+=niza[i];
	}
	printf("%.2f", suma/5.0);
	return 0;

}
