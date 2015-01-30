#include <stdio.h>
int main () {
int i, m, n,suma, y;
scanf("%d %d", &m, &n);
int niza[m];
for (i=0; i<m; i++) {
suma = 0;
if (i<n) {
niza[i]=1;}
else {
	y = n;
	while(y) {
		suma+=niza[i-y];
		y--;
	}
	niza[i]=suma;
}
}
    printf("%d",niza[0]);
    for (i=1; i<m; i++) {
    printf(", %d", niza[i]);}
    return 0;
}
