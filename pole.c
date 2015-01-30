#include <stdio.h>
int main () {
int i,j, n, m, x, y;
printf("Vnesi dimenzii: ");
scanf("%d %d", &m, &n);
char matrica[m][n];
printf("Vnesi destinacija: ");
scanf("%d %d", &x, &y);
for (i=0; i<n; i++) {
for (j=0; j<m; j++) {
if (i==y-1 && j<x) {matrica[j][i]='+';}
else if (i<y-1) {matrica[j][i]='o';}
else
matrica[j][i]='-'; 
}}
for (i=0; i<n; i++) {
for (j=0; j<m; j++) {
printf("%c", matrica[i][j]);
}
printf("\n");
}
}