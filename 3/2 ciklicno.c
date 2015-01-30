#include <stdio.h>
int main () {
	int n, i, k;
	scanf("%d", &n);
	int A[n], B[n];
	for (i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &k);\
	k%=n;
	if (k>0) {
		for (i=0; i<n; i++) {
			if (i<k) {
			B[i]=A[i+(n-k)];}
			else {
				B[i]=A[i-k];}
		}
	}
	if (k<0) {
		k*=-1;
		for (i=0; i<n; i++) {
			if (i<n-k) {
			B[i]=A[i+k];}
			else {
				B[i]=A[i-(n-k)];
			}
		}
	}
	for (i=0; i<n; i++) {
		printf("%d ", B[i]);
	}
	return 0;
}
