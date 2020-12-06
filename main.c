#include "random.h"
#include "draw.h"

int main() {
	int i;

	Seed();
	
	for (i = 0; i < 10; i++) {
		Draw(Random());
	}

	return 0;
}