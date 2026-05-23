#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../include/rand.h"
#include "../include/generator.h"

#define BATCH_SIZE 10000

int main(int argc, char* argv[]) {
	// Try to allocate one batch of TownData
	struct TownData* batch = malloc(BATCH_SIZE * sizeof(struct TownData));
	if (batch == NULL) {
		printf("Failed to allocate enough space");
		return 2;
	}

	// Try to create file
	FILE* db = fopen("towns.bin", "wb");
	if (db == NULL) {
		printf("Failed to open database file");
		free(batch);
		return 2;
	}

	int batch_count = 0;
	clock_t start, end;
	start = clock();

	// Generate towns
	for (uint32_t seed = 0; seed < UINT32_MAX; seed++) {
		set_random_seed(seed);
		batch[batch_count].seed = seed;
		(void)generate(&batch[batch_count]);
		batch_count++;
		
		if (batch_count == BATCH_SIZE) {
			fwrite(batch, sizeof(struct TownData), BATCH_SIZE, db);
			batch_count = 0;
		}
	}
	// Flush batch
	if (batch_count > 0) {
		fwrite(batch, sizeof(struct TownData), batch_count, db);
	}

	end = clock();
	double time_used = ((double)(end - start) / CLOCKS_PER_SEC);

	fclose(db);
	free(batch);

	printf("\nFinished generating in %f seconds", time_used);
	
	return 0;
}
