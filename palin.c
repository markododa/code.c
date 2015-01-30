#include <stdio.h>
int main () {
	int broj, pomosen, prevrten, brojac=0, najgolem;
	while (scanf("%d", &broj)) {
		pomosen = broj;
		prevrten = 0;
		while(pomosen) {
			prevrten = prevrten*10+pomosen%10;
			pomosen/=10;
		}
		if (prevrten == broj) {
			if (brojac == 0) {
				brojac++;
				najgolem = broj;
			}
			else {
				brojac++;
				if (broj>najgolem) {
					najgolem=broj;
				}
			}
		}
	}
	printf("%d %d", najgolem, brojac);
	return 0;
}
