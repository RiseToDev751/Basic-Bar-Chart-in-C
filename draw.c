#include <stdio.h>
#include "draw.h"

void Draw(int num) {
	int i = 0;

	if (0 == num) {
		printf("%d", num);
	}
	else if (10 <= num) {
		printf("%d    ", num);
	}
	else {
		printf("%d     ", num);
	}
		
	for (i = 0; i < num; i++) {
		printf("#");
	}

	printf("\n");
}