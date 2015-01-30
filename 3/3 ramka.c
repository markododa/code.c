#include <stdio.h>
int main () {
	int i, y, n;
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (y=0; y<n; y++) {
		if (i==0 || y==0 || y==n-1 || i==n-1) {
		printf("+"); }
		else {
		printf("-"); }
		}
		printf("\n");}
	return 0;
}
