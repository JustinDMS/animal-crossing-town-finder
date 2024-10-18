#include "rand.h"

static uint32_t qrand_idum = 1;
static uint32_t qrand_itemp;

uint32_t get_random_seed(void) {
	return qrand_idum;
}

void set_random_seed(uint32_t seed) {
	qrand_idum = seed;
}

float fqrand(void) {
	qrand_idum = qrand_idum * 0x19660D + 0x3C6EF35F;
	qrand_itemp = qrand_idum >> 9 | 0x3F800000;
	qrand_itemp = qrand_itemp;
	return *(float*)&qrand_itemp - 1.0f;
}
