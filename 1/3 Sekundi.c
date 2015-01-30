#include <stdio.h>
int main () {
	int sekundi;
	scanf("%d", &sekundi);
	printf("%d sekundi se ", sekundi);
	printf("%d casovi, ", sekundi / (60*60));
	sekundi%=(60*60);
	printf("%d minuti i ", sekundi / 60);
	sekundi%=60;
	printf("%d sekundi\n", sekundi);
	return 0;
}
