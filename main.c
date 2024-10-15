#include <stdio.h>
#include <time.h>
#include "rand.h"
#include "generator.h"

#define SUCCESS 0
#define BAD_STEP 1
#define BAD_POST_OFFICE 2
#define BAD_NOOK 3
#define BAD_LAKE 4
#define BAD_RIVER_CORNER 5

int main(int argc, char* argv[]) {
	int iter = 500;

	clock_t start, end;
	start = clock();

	for (int i = 0; i < iter; i++) {
		set_random_seed( (uint32_t)i );
		printf("\nSeed %d", i);

		int result = generate();

		if (result == BAD_STEP) {
			//printf(" | Bad Step!");
			continue;
		}
		else if (result == BAD_POST_OFFICE) {
			//printf(" | Bad Post Office location!");
			continue;
		}
		else if (result == BAD_NOOK) {
			//printf(" | Bad Nook location!");
			continue;
		}
		else if (result == BAD_LAKE) {
			//printf(" | Bad Lake!");
			continue;
		}
		else if (result == BAD_RIVER_CORNER) {
			//printf(" | Bad River Corner!");
			continue;
		}
		else {
			printf(" | Found valid town!");
			print_acre_ids();
			//break;
			continue;
		}
	}

	end = clock();
	double time_used = ((double)(end - start) / CLOCKS_PER_SEC);
	
	
	return 0;
}
