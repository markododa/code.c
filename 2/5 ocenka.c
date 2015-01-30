#include <stdio.h>
int main () {
	int i, ocenka, studenti;
	float perc;
	scanf("%d", &studenti);
	int poeni[studenti], max[studenti];
	for (i=0; i<studenti; i++) {
		scanf("%d %d", &poeni[i], &max[i]);
	}
	for (i=0; i<studenti; i++) {
		perc = ((float)poeni[i]/max[i])*100;
		printf("%.2f ", perc);
		if (perc >= 90) {
			ocenka=10;
		}
		else if (perc >= 80) {
			ocenka=9;
		}
		else if (perc >= 70) {
			ocenka=8;
		}
		else if (perc >= 60) {
			ocenka=7;
		}
		else if (perc >= 50) {
			ocenka=6;
		}
		else {
			ocenka=5;
		}
		if (ocenka==5) {
		printf("PADNAL\n");
		}
		else {
		printf("%d\n", ocenka);
		}
	}
	return 0;
} 
