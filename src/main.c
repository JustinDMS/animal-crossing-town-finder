#include <stdio.h>
#include <time.h>
#include "../include/rand.h"
#include "../include/generator.h"

#define SUCCESS 0

int main(int argc, char* argv[]) {
	uint32_t iter = UINT32_MAX;

	/*FILE* file = NULL;
	file = fopen("results.txt", "a");
	if (file == NULL) {
		return 1;
	}*/

	clock_t start, end;
	start = clock();

	for (uint32_t i = 0; i < iter; i++) {
		set_random_seed(i);
		//printf("\nSeed %X", get_random_seed());
		uint32_t cur_seed = i;

		int result = generate();

		if (result == SUCCESS) {
			printf("%X | Found valid town!\n", cur_seed);
		}

		if (cur_seed % 1000000 == 0) {
			printf("%d seeds checked\n", cur_seed);
		}
	}

	/*fprintf(file, "----------\n");
	fclose(file);*/

	end = clock();
	double time_used = ((double)(end - start) / CLOCKS_PER_SEC);
	printf("\nFinished generating %d towns in %f seconds", iter, time_used);
	
	return 0;
}
