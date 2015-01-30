#include <stdio.h>
int main () {
int golemina, k, i, temp;
scanf("%d", &golemina);
int niza[golemina];
for (i = 0; i < golemina; i++) {
      scanf("%d", &niza[i]);
   }
scanf("%d", &k);
    for (i=0; i<k; i++) {
    temp = niza[i];
    niza[i]=niza[golemina-k+i];
    niza[golemina-k]=temp;}

for (i=0; i<golemina; i++) {
    printf("%d ", niza[i]);
    }}
