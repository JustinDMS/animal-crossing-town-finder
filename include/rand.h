#include <inttypes.h>

#define RANDOM_F(n) (fqrand() * (float)(n))
#define RANDOM(n) ((int)RANDOM_F(n))

uint32_t get_random_seed(void);
void set_random_seed(uint32_t seed);
float fqrand(void);