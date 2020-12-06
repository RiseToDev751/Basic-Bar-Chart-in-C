#include <stdlib.h>
#include <time.h>
#include "random.h"

void Seed() {
	srand(time(NULL));
}

int Random() {
	int num = rand() % 21;

	return num;
}