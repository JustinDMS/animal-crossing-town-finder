#include <stdio.h>
#include <inttypes.h>
#include "rand.h"

#define TO_BIT(type) (1 << type)

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct blocks {
	uint16_t combination_type : 14;
	uint16_t height : 2;
} blocks;
typedef struct block_info {
	uint16_t background_id;
	uint16_t foreground_id;
	uint8_t type;
} block_info;
typedef struct trace_data {
	uint8_t* types;
	int count;
} trace_data;
typedef struct block_group {
	int min;
	int max;
} block_group;
typedef struct island {
	uint8_t bg_data[2];
} island;

/* GENERATION */

int generate();
int make_base_landform(uint8_t* _cliff_blocks, uint8_t* _river_blocks);
int decide_base_cliff(uint8_t* _cliff_blocks);
int trace_cliff(uint8_t* _cliff_blocks, int bx, int bz);
void set_end_cliff(uint8_t* _cliff_blocks);
int last_check_cliff(uint8_t* _cliff_blocks, int bx, int bz);
int decide_base_river(uint8_t* _river_blocks, uint8_t* _cliff_blocks);
int trace_river_1(uint8_t* _river_blocks, uint8_t* _cliff_blocks, int* start_bx, int* start_bz);
int trace_river_2(uint8_t* river_data, uint8_t* cliff_data, int bx, int bz, uint8_t* challenge_flag);
int last_check_river(uint8_t* river_blocks, int bx, int bz);
int decide_river_album(uint8_t* _cliff_blocks, uint8_t* _river_blocks);
void set_flat_blocks(uint8_t* _cliff_blocks);
void set_beach(uint8_t* _cliff_blocks);
int set_bridge_and_incline(uint8_t* _cliff_blocks, int step_mode);
int set_bridge(uint8_t* _cliff_blocks, int step_mode);
int set_incline(uint8_t* _cliff_blocks);
int set_able_sisters_and_dock(uint8_t* _cliff_blocks);
int set_unique(uint8_t* _cliff_blocks);
int set_nook_and_post_office(uint8_t* _cliff_blocks);
int set_lake(uint8_t* _cliff_blocks);
int set_lake_directed_river(uint8_t* _cliff_blocks, int idx);
int set_beach_bridge(uint8_t* _cliff_blocks, int flags);
void set_base(uint8_t* _base_table, uint8_t* _cliff_blocks);
void set_acres(blocks* _table, block_info* _info, int count, uint8_t* _cliff_blocks);
void copy_base_height_data(blocks* _table, uint8_t* _base_table);

/* UTILITY */

void init_table(blocks* _table);
void copy_block_data(uint8_t* to, uint8_t* from);
int d2_to_d1(int bx, int bz);
void direction_to_block(int* bx, int* bz, int base_bx, int base_bz, int direction);
int check_correct_block_num(int bx, int bz, int bx_min, int bx_max, int bz_min, int bz_max);
int check_block_group(uint8_t type, int group);
int river_id_to_direction(int river_idx);
uint8_t get_river_album(uint8_t cliff_type, uint8_t river_type);
void init_flag(uint8_t* challenge_flag);
int get_river_cross_count(uint8_t* river_data);
int get_river_cross_info(int* bx, int* bz, uint8_t* _cliff_blocks);
int count_directed_info_cliff(uint8_t* _cliff_blocks, int bx, int bz, int half);
int get_cliff_index(uint8_t type);
int set_slope_directed_info_cliff(uint8_t* _cliff_blocks, int bx, int bz, int half, int selected_idx);
int flat_to_unique(uint8_t* _cliff_blocks, uint8_t unique_type, int river_side, int cliff_height);
int count_flat(uint8_t* _cliff_blocks, int river_side, int cliff_height);
int rewrite_flat(uint8_t* _cliff_blocks, int idx, uint8_t type, int river_side, int cliff_height);
int judge_flat(uint8_t* _cliff_blocks, int bnum, int river_side, int cliff_height);
int count_pure_river(uint8_t* _cliff_blocks);
void init_base(uint8_t* _base_table);
void init_short_data(int16_t* data, int16_t value, int num);
int16_t get_bg_name(int16_t sea_bg);
uint16_t bg_name_to_random(uint16_t bg_name, block_info* _info, int block_count);
int get_type_count(block_info* _info, int block_count, uint8_t type, int16_t reuse);
int get_already_in_use(int16_t value);
int16_t index_to_block(block_info* _info, int block_count, uint8_t type, int idx, int16_t reuse);

void print_acre_ids(void);
void print_colorful_id(uint16_t id, char color[]);
int validate_town(void);
