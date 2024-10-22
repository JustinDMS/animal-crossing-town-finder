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
	uint32_t iter = 2543;

	/*FILE* file = NULL;
	file = fopen("results.txt", "a");
	if (file == NULL) {
		return 1;
	}*/

	clock_t start, end;
	start = clock();

	for (uint32_t i = 0; i < 2544; i++) {
		set_random_seed(i);
		//printf("\nSeed %X", get_random_seed());
		uint32_t cur_seed = i;

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
			printf("\n%X | Found valid town!", cur_seed);
			//fprintf(file, "%X\n", cur_seed);
			print_acre_ids();
			continue;
		}
	}

	/*fprintf(file, "----------\n");
	fclose(file);*/

	end = clock();
	double time_used = ((double)(end - start) / CLOCKS_PER_SEC);
	printf("\nFinished generating %d towns in %f seconds", iter, time_used);
	
	return 0;
}
