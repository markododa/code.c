#include <stdio.h>
int main () {
	int brojac=0;
	char c;
	int vobroj=0;
	while((c = getchar()) != '.') {
		if (c>='0' && c<='9') { 
			vobroj=1;
		}
		else {
			if(vobroj){
				brojac++;
				vobroj=0;
			}
}
}
	if(vobroj){
		brojac++;
	}
	
printf("%d", brojac);
	return 0;
	}
