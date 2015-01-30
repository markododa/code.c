#include <stdio.h>
int main () {
int a[100];
int x,i,n,m;
scanf("%d %d",&m ,&n);
for(i=0;i<n;i++){
a[i]=1;
x+=a[1];
}
for(i=n+1;i<m;i++){
a[i]=x;
x+=a[i];
} 
for(i=0;i<m;i++) {
printf("%d",a[i]);
}}
