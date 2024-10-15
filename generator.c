#include "generator.h"

#define BLOCK_X_NUM 7
#define BLOCK_Z_NUM 10
#define BLOCK_TOTAL_NUM (BLOCK_X_NUM * BLOCK_Z_NUM)

blocks table[BLOCK_TOTAL_NUM] = {
  { 209, 1 }, { 201, 1 }, { 201, 1 }, { 201, 1 }, { 202, 1 }, { 201, 1 }, { 210, 1 },
  { 205, 1 }, { 172, 1 }, { 222, 1 }, { 189, 1 }, { 176, 1 }, { 225, 1 }, { 208, 1 },
  { 203, 1 }, { 159, 1 }, {   5, 1 }, { 215, 1 }, {  93, 1 }, {  37, 1 }, { 206, 1 },
  { 203, 1 }, {  45, 0 }, { 101, 0 }, {  96, 1 }, { 152, 1 }, { 108, 0 }, { 207, 0 },
  { 204, 0 }, {  42, 0 }, { 163, 0 }, {  64, 0 }, { 164, 0 }, { 213, 0 }, { 206, 0 },
  { 203, 0 }, { 157, 0 }, { 217, 0 }, { 127, 0 }, {  38, 0 }, { 160, 0 }, { 206, 0 },
  { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 },
  { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 },
  { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 },
  { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }, { 196, 0 }
};
block_info info[368] = {
  { 0x0124, 0x00cb, 0xff },
  { 0x003c, 0x0000, 0xff },
  { 0x005a, 0x00cb, 0xff },
  { 0x005a, 0x0004, 0xff },
  { 0x005a, 0x0005, 0xff },
  { 0x005a, 0x000c, 0xff },
  { 0x005a, 0x0009, 0xff },
  { 0x005a, 0x000b, 0xff },
  { 0x00f4, 0x000d, 0xff },
  { 0x005a, 0x000e, 0xff },
  { 0x005a, 0x00cb, 0xff },
  { 0x005a, 0x000f, 0xff },
  { 0x005a, 0x0010, 0xff },
  { 0x005a, 0x0011, 0xff },
  { 0x005a, 0x0012, 0xff },
  { 0x005a, 0x0013, 0xff },
  { 0x005a, 0x0014, 0xff },
  { 0x005a, 0x0015, 0xff },
  { 0x00f2, 0x0016, 0xff },
  { 0x005a, 0x0017, 0xff },
  { 0x005a, 0x001b, 0xff },
  { 0x00f6, 0x001a, 0xff },
  { 0x005a, 0x001b, 0xff },
  { 0x005a, 0x0069, 0xff },
  { 0x00cb, 0x004e, 0x33 },
  { 0x00f8, 0x0022, 0xff },
  { 0x005a, 0x0027, 0xff },
  { 0x0033, 0x002d, 0x1a },
  { 0x00da, 0x002e, 0x0d },
  { 0x010d, 0x0001, 0xff },
  { 0x010e, 0x0001, 0xff },
  { 0x010f, 0x0001, 0xff },
  { 0x0110, 0x0001, 0xff },
  { 0x0006, 0x0029, 0x16 },
  { 0x000f, 0x002a, 0x36 },
  { 0x0016, 0x002b, 0x17 },
  { 0x0018, 0x002c, 0x1e },
  { 0x005a, 0x002f, 0x27 },
  { 0x005b, 0x0030, 0x27 },
  { 0x0001, 0x0031, 0x0f },
  { 0x0009, 0x0032, 0x1d },
  { 0x000c, 0x0033, 0x22 },
  { 0x0013, 0x0034, 0x10 },
  { 0x001d, 0x0035, 0x11 },
  { 0x0020, 0x0036, 0x18 },
  { 0x0025, 0x0037, 0x12 },
  { 0x0028, 0x0038, 0x19 },
  { 0x002a, 0x0039, 0x20 },
  { 0x0030, 0x003a, 0x13 },
  { 0x0035, 0x003b, 0x21 },
  { 0x0037, 0x003c, 0x24 },
  { 0x003b, 0x003d, 0x14 },
  { 0x003e, 0x003e, 0x1b },
  { 0x0042, 0x003f, 0x15 },
  { 0x00aa, 0x0040, 0x28 },
  { 0x00b2, 0x0041, 0x29 },
  { 0x00ba, 0x0042, 0x2a },
  { 0x00c2, 0x0043, 0x2b },
  { 0x00c8, 0x0044, 0x2c },
  { 0x00ce, 0x0045, 0x2d },
  { 0x00d4, 0x0046, 0x2e },
  { 0x0022, 0x0047, 0x1f },
  { 0x0047, 0x0048, 0x26 },
  { 0x0040, 0x0049, 0x25 },
  { 0x00ae, 0x004a, 0x2f },
  { 0x00b6, 0x004b, 0x30 },
  { 0x00be, 0x004c, 0x31 },
  { 0x00c5, 0x004d, 0x32 },
  { 0x00d1, 0x004f, 0x34 },
  { 0x00d7, 0x0050, 0x35 },
  { 0x00db, 0x0051, 0x0c },
  { 0x0010, 0x0052, 0x36 },
  { 0x001a, 0x0053, 0x37 },
  { 0x0024, 0x0054, 0x38 },
  { 0x002e, 0x0055, 0x39 },
  { 0x0039, 0x0056, 0x3a },
  { 0x0041, 0x0057, 0x3b },
  { 0x0049, 0x0058, 0x3c },
  { 0x0045, 0x005a, 0x1c },
  { 0x002c, 0x0059, 0x23 },
  { 0x0115, 0x0028, 0xff },
  { 0x010b, 0x00c8, 0xff },
  { 0x0105, 0x00c9, 0xff },
  { 0x0105, 0x00ca, 0xff },
  { 0x005a, 0x0006, 0xff },
  { 0x00ef, 0x00cc, 0x0b },
  { 0x005a, 0x00cd, 0xff },
  { 0x0002, 0x00c0, 0x0f },
  { 0x0003, 0x006b, 0x0f },
  { 0x0004, 0x006c, 0x0f },
  { 0x0005, 0x00bf, 0x0f },
  { 0x0014, 0x0072, 0x10 },
  { 0x00ab, 0x0090, 0x28 },
  { 0x00ac, 0x0091, 0x28 },
  { 0x00c3, 0x009e, 0x2b },
  { 0x00c9, 0x00a1, 0x2c },
  { 0x00d5, 0x00a7, 0x2e },
  { 0x00d6, 0x00a8, 0x2e },
  { 0x001b, 0x0074, 0x37 },
  { 0x0011, 0x0071, 0x36 },
  { 0x002f, 0x007d, 0x39 },
  { 0x003a, 0x0081, 0x3a },
  { 0x003f, 0x0084, 0x1b },
  { 0x0021, 0x0077, 0x18 },
  { 0x001e, 0x0075, 0x11 },
  { 0x0044, 0x0086, 0x15 },
  { 0x000a, 0x006d, 0x1d },
  { 0x000d, 0x006f, 0x22 },
  { 0x0026, 0x0078, 0x12 },
  { 0x0031, 0x007e, 0x13 },
  { 0x003c, 0x0082, 0x14 },
  { 0x00b3, 0x0095, 0x29 },
  { 0x00bb, 0x0099, 0x2a },
  { 0x0029, 0x007a, 0x19 },
  { 0x002b, 0x007b, 0x20 },
  { 0x0046, 0x0087, 0x1c },
  { 0x00cf, 0x00a4, 0x2d },
  { 0x0036, 0x00b2, 0x21 },
  { 0x002d, 0x007c, 0x23 },
  { 0x00b4, 0x0096, 0x29 },
  { 0x00bc, 0x009a, 0x2a },
  { 0x0038, 0x0080, 0x24 },
  { 0x0032, 0x007f, 0x13 },
  { 0x0027, 0x0079, 0x12 },
  { 0x001f, 0x0076, 0x11 },
  { 0x0015, 0x0073, 0x10 },
  { 0x010c, 0x00ce, 0xff },
  { 0x00b1, 0x00c1, 0x45 },
  { 0x0007, 0x005b, 0x16 },
  { 0x0008, 0x005c, 0x16 },
  { 0x000b, 0x006e, 0x1d },
  { 0x000e, 0x0070, 0x22 },
  { 0x0017, 0x005e, 0x17 },
  { 0x0034, 0x005d, 0x1a },
  { 0x003d, 0x0083, 0x14 },
  { 0x0043, 0x0085, 0x15 },
  { 0x00ad, 0x0092, 0x28 },
  { 0x00b5, 0x00b3, 0x29 },
  { 0x00bd, 0x009b, 0x2a },
  { 0x00c4, 0x009f, 0x2b },
  { 0x00ca, 0x00a2, 0x2c },
  { 0x00d0, 0x00a5, 0x2d },
  { 0x00e4, 0x0067, 0xff },
  { 0x00e4, 0x0066, 0xff },
  { 0x005a, 0x0068, 0xff },
  { 0x0019, 0x005f, 0x1e },
  { 0x0023, 0x0060, 0x1f },
  { 0x00af, 0x0093, 0x2f },
  { 0x00b7, 0x0097, 0x30 },
  { 0x00c6, 0x00a0, 0x32 },
  { 0x00bf, 0x009c, 0x31 },
  { 0x00cc, 0x00a3, 0x33 },
  { 0x00d2, 0x00a6, 0x34 },
  { 0x00d8, 0x00a9, 0x35 },
  { 0x00b0, 0x0094, 0x2f },
  { 0x00b8, 0x0098, 0x30 },
  { 0x00c0, 0x009d, 0x31 },
  { 0x005c, 0x0088, 0x27 },
  { 0x005d, 0x0089, 0x27 },
  { 0x005e, 0x008a, 0x27 },
  { 0x005f, 0x008b, 0x27 },
  { 0x0060, 0x008c, 0x27 },
  { 0x0061, 0x008d, 0x27 },
  { 0x0062, 0x008e, 0x27 },
  { 0x0063, 0x008f, 0x27 },
  { 0x00dc, 0x00aa, 0x0c },
  { 0x00dd, 0x00b6, 0x0c },
  { 0x00de, 0x00b7, 0xff },
  { 0x00df, 0x00ab, 0xff },
  { 0x00e0, 0x00ae, 0xff },
  { 0x00e1, 0x00b8, 0xff },
  { 0x00e2, 0x00af, 0xff },
  { 0x00e3, 0x00b9, 0xff },
  { 0x00e4, 0x00ad, 0xff },
  { 0x00e8, 0x00b0, 0x0d },
  { 0x00e9, 0x00ba, 0x0d },
  { 0x00ea, 0x00bb, 0x0d },
  { 0x00eb, 0x00b1, 0x0d },
  { 0x00b9, 0x00b4, 0x46 },
  { 0x00c1, 0x00c2, 0x47 },
  { 0x005a, 0x006a, 0xff },
  { 0x005a, 0x0061, 0xff },
  { 0x005a, 0x0062, 0xff },
  { 0x005a, 0x0063, 0xff },
  { 0x005a, 0x0064, 0xff },
  { 0x00aa, 0x0065, 0xff },
  { 0x00d3, 0x00b5, 0x4a },
  { 0x00d9, 0x00ac, 0x4b },
  { 0x00f0, 0x00bc, 0x0b },
  { 0x00f1, 0x00bd, 0x0b },
  { 0x00c7, 0x00c3, 0x48 },
  { 0x00cd, 0x00be, 0x49 },
  { 0x00ff, 0x00cf, 0xff },
  { 0x010a, 0x00d0, 0xff },
  { 0x0103, 0x0016, 0xff },
  { 0x0104, 0x0016, 0xff },
  { 0x0106, 0x00cb, 0x4c },
  { 0x0107, 0x00cb, 0x4d },
  { 0x0108, 0x00cb, 0x4e },
  { 0x0109, 0x00cb, 0x4f },
  { 0x0012, 0x00e8, 0x36 },
  { 0x004c, 0x00cb, 0x00 },
  { 0x004d, 0x00cb, 0x01 },
  { 0x004e, 0x00cb, 0x02 },
  { 0x004f, 0x00cb, 0x3d },
  { 0x0052, 0x00cb, 0x09 },
  { 0x0053, 0x00cb, 0x04 },
  { 0x0054, 0x00cb, 0x3e },
  { 0x0057, 0x00cb, 0x0a },
  { 0x0058, 0x00cb, 0x05 },
  { 0x0059, 0x00cb, 0x08 },
  { 0x0064, 0x0068, 0x44 },
  { 0x0065, 0x00dc, 0x44 },
  { 0x0066, 0x00e4, 0x44 },
  { 0x0067, 0x0069, 0x0e },
  { 0x0068, 0x00e2, 0x0e },
  { 0x0069, 0x00e3, 0x0e },
  { 0x006d, 0x006a, 0x42 },
  { 0x006e, 0x00e0, 0x42 },
  { 0x006f, 0x00e1, 0x42 },
  { 0x00e5, 0x00dd, 0x43 },
  { 0x00ec, 0x00e5, 0x41 },
  { 0x00ed, 0x00e6, 0x41 },
  { 0x00ee, 0x00e7, 0x41 },
  { 0x00e6, 0x00de, 0x43 },
  { 0x00e7, 0x00df, 0x43 },
  { 0x005d, 0x0002, 0xff },
  { 0x00fe, 0x0023, 0xff },
  { 0x0100, 0x0025, 0xff },
  { 0x0101, 0x0026, 0xff },
  { 0x0102, 0x0024, 0xff },
  { 0x0000, 0x00d1, 0xff },
  { 0x0078, 0x0061, 0x3f },
  { 0x0079, 0x0062, 0x3f },
  { 0x0078, 0x0061, 0xff },
  { 0x0079, 0x0062, 0xff },
  { 0x0082, 0x0065, 0x40 },
  { 0x0050, 0x00cb, 0x50 },
  { 0x0055, 0x00cb, 0x51 },
  { 0x00f9, 0x0151, 0xff },
  { 0x0083, 0x0152, 0x40 },
  { 0x0084, 0x0153, 0x40 },
  { 0x0085, 0x0154, 0x40 },
  { 0x0086, 0x0155, 0x40 },
  { 0x0087, 0x0156, 0x52 },
  { 0x0088, 0x0157, 0x52 },
  { 0x0089, 0x0158, 0x52 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x007a, 0x0063, 0x3f },
  { 0x007b, 0x0064, 0x3f },
  { 0x007c, 0x0159, 0x3f },
  { 0x007d, 0x015a, 0x3f },
  { 0x007e, 0x015b, 0x3f },
  { 0x007f, 0x015c, 0x3f },
  { 0x0080, 0x015d, 0x3f },
  { 0x0081, 0x015e, 0x3f },
  { 0x001c, 0x0160, 0x37 },
  { 0x0048, 0x0162, 0x26 },
  { 0x004a, 0x015f, 0x3c },
  { 0x004b, 0x0161, 0x3c },
  { 0x00b1, 0x0007, 0xff },
  { 0x004b, 0x0011, 0xff },
  { 0x005a, 0x0174, 0xff },
  { 0x0013, 0x0175, 0xff },
  { 0x0030, 0x0176, 0xff },
  { 0x0088, 0x0177, 0xff },
  { 0x00ce, 0x0178, 0xff },
  { 0x00ba, 0x0179, 0xff },
  { 0x000f, 0x017a, 0xff },
  { 0x007a, 0x017b, 0xff },
  { 0x00ae, 0x017c, 0xff },
  { 0x0030, 0x017d, 0xff },
  { 0x0042, 0x017e, 0xff },
  { 0x005a, 0x0008, 0xff },
  { 0x0116, 0x017f, 0xff },
  { 0x0118, 0x0180, 0xff },
  { 0x0117, 0x0181, 0xff },
  { 0x011a, 0x0182, 0xff },
  { 0x0119, 0x0183, 0xff },
  { 0x005a, 0x0184, 0xff },
  { 0x005a, 0x0185, 0xff },
  { 0x0006, 0x0020, 0xff },
  { 0x00ab, 0x0021, 0xff },
  { 0x0122, 0x0186, 0xff },
  { 0x006a, 0x0187, 0x54 },
  { 0x006b, 0x0188, 0x54 },
  { 0x006c, 0x0189, 0x54 },
  { 0x008a, 0x018a, 0x55 },
  { 0x008b, 0x018b, 0x55 },
  { 0x008c, 0x018c, 0x55 },
  { 0x008d, 0x018d, 0x64 },
  { 0x0090, 0x00cb, 0x5e },
  { 0x0070, 0x018f, 0x63 },
  { 0x0074, 0x018e, 0x62 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x00fe, 0x00cb, 0x53 },
  { 0x0090, 0x00cb, 0x5e },
  { 0x0090, 0x00cb, 0x5e },
  { 0x0091, 0x00cb, 0x5f },
  { 0x0091, 0x00cb, 0x5f },
  { 0x0091, 0x00cb, 0x5f },
  { 0x0091, 0x00cb, 0x5f },
  { 0x0092, 0x00cb, 0x60 },
  { 0x0092, 0x00cb, 0x60 },
  { 0x0092, 0x00cb, 0x60 },
  { 0x0093, 0x00cb, 0x61 },
  { 0x0093, 0x00cb, 0x61 },
  { 0x0093, 0x00cb, 0x61 },
  { 0x0093, 0x00cb, 0x61 },
  { 0x0093, 0x00cb, 0x61 },
  { 0x0051, 0x00cb, 0x68 },
  { 0x0056, 0x00cb, 0x68 },
  { 0x0090, 0x00cb, 0x68 },
  { 0x0091, 0x00cb, 0x68 },
  { 0x0092, 0x00cb, 0x68 },
  { 0x0093, 0x00cb, 0x68 },
  { 0x0094, 0x00cb, 0x68 },
  { 0x0095, 0x00cb, 0x68 },
  { 0x0096, 0x00cb, 0x68 },
  { 0x0097, 0x00cb, 0x68 },
  { 0x0098, 0x00cb, 0x68 },
  { 0x0099, 0x00cb, 0x68 },
  { 0x009c, 0x00cb, 0x68 },
  { 0x009d, 0x00cb, 0x68 },
  { 0x009e, 0x00cb, 0x68 },
  { 0x009f, 0x00cb, 0x68 },
  { 0x00a0, 0x00cb, 0x68 },
  { 0x00a1, 0x00cb, 0x68 },
  { 0x00a2, 0x00cb, 0x68 },
  { 0x00a3, 0x00cb, 0x68 },
  { 0x00a4, 0x00cb, 0x68 },
  { 0x00a5, 0x00cb, 0x68 },
  { 0x00a6, 0x00cb, 0x68 },
  { 0x00a7, 0x00cb, 0x68 },
  { 0x009a, 0x00cb, 0x66 },
  { 0x009a, 0x00cb, 0x66 },
  { 0x009b, 0x00cb, 0x67 },
  { 0x009b, 0x00cb, 0x67 },
  { 0x009b, 0x00cb, 0x67 },
  { 0x009b, 0x00cb, 0x67 },
  { 0x0123, 0x0190, 0xff },
  { 0x0071, 0x0192, 0x63 },
  { 0x0075, 0x0191, 0x62 },
  { 0x0072, 0x0194, 0x63 },
  { 0x0076, 0x0193, 0x62 },
  { 0x0073, 0x0196, 0x63 },
  { 0x0077, 0x0195, 0x62 },
  { 0x008e, 0x0197, 0x64 },
  { 0x008f, 0x0198, 0x64 },
  { 0x00a8, 0x00cb, 0x68 },
  { 0x00a9, 0x00cb, 0x68 },
  { 0x00f3, 0x0199, 0xff }
};
static uint8_t base_blocks[BLOCK_TOTAL_NUM] = {
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x09, 0x0c, 0x0c, 0x0b, 0x0c, 0x0c, 0x0a,
  0x02, 0x27, 0x27, 0x0e, 0x27, 0x27, 0x04,
  0x02, 0x27, 0x27, 0x27, 0x27, 0x27, 0x04,
  0x02, 0x27, 0x27, 0x27, 0x27, 0x27, 0x04,
  0x02, 0x27, 0x27, 0x27, 0x27, 0x27, 0x04,
  0x02, 0x27, 0x27, 0x27, 0x27, 0x27, 0x04,
  0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65,
  0x53, 0x53, 0x53, 0x66, 0x62, 0x63, 0x66,
  0x53, 0x53, 0x53, 0x67, 0x67, 0x67, 0x67
};

static uint8_t cliff_startA_factor[] = { 15, 19 };
static trace_data cliff_startA = { cliff_startA_factor, 2 };

static uint8_t cliff_startB_factor[] = { 15, 16, 19 };
static trace_data cliff_startB = { cliff_startB_factor, 3 };

static uint8_t cliff_startC_factor[] = { 15, 16 };
static trace_data cliff_startC = { cliff_startC_factor, 2 };

static trace_data* cliff_start_table[] = {
    &cliff_startA,
    &cliff_startA,
    &cliff_startB,
    &cliff_startC
};

static uint8_t cliff_next_direction[7] = { 3, 0, 0, 3, 2, 2, 3 };

static uint8_t cliff_1_next[] = { 15, 16, 19 };
static trace_data cliff_1_next_class = { cliff_1_next, 3 };

static uint8_t cliff_2_next[] = { 17, 18 };
static trace_data cliff_2_next_class = { cliff_2_next, 2 };

static uint8_t cliff_3_next[] = { 17, 18 };
static trace_data cliff_3_next_class = { cliff_3_next, 2 };

static uint8_t cliff_4_next[] = { 15, 16, 19 };
static trace_data cliff_4_next_class = { cliff_4_next, 3 };

static uint8_t cliff_5_next[] = { 20, 21 };
static trace_data cliff_5_next_class = { cliff_5_next, 2 };

static uint8_t cliff_6_next[] = { 20, 21 };
static trace_data cliff_6_next_class = { cliff_6_next, 2 };

static uint8_t cliff_7_next[] = { 15, 16, 19 };
static trace_data cliff_7_next_class = { cliff_7_next, 3 };

static trace_data* cliff_next_data[] = {
    &cliff_1_next_class,
    &cliff_2_next_class,
    &cliff_3_next_class,
    &cliff_4_next_class,
    &cliff_5_next_class,
    &cliff_6_next_class,
    &cliff_7_next_class
};

static uint8_t river_next_direction[7] = { 2, 3, 1, 3, 2, 1, 2 };

static uint8_t river_1_next[] = { 40, 43, 45 };
static trace_data river_1_next_class = { river_1_next, 3 };

static uint8_t river_2_next[] = { 41, 44 };
static trace_data river_2_next_class = { river_2_next, 2 };

static uint8_t river_3_next[] = { 42, 46 };
static trace_data river_3_next_class = { river_3_next, 2 };

static uint8_t river_4_next[] = { 41, 44 };
static trace_data river_4_next_class = { river_4_next, 2 };

static uint8_t river_5_next[] = { 40, 43, 45 };
static trace_data river_5_next_class = { river_5_next, 3 };

static uint8_t river_6_next[] = { 42, 46 };
static trace_data river_6_next_class = { river_6_next, 2 };

static uint8_t river_7_next[] = { 40, 43, 45 };
static trace_data river_7_next_class = { river_7_next, 3 };

static trace_data* river_next_data[] = {
  &river_1_next_class,
  &river_2_next_class,
  &river_3_next_class,
  &river_4_next_class,
  &river_5_next_class,
  &river_6_next_class,
  &river_7_next_class
};

static uint8_t river_1_data[7] = { 22, 23, 24, 25, 26, 27, 28 };
static uint8_t river_2_data[7] = { 29, 30, 31, 32, 33, 255, 255 };
static uint8_t river_3_data[7] = { 34, 255, 255, 35, 36, 37, 38 };
static uint8_t river_no_data[7] = { 255, 255, 255, 255, 255, 255, 255 };
static uint8_t* river_cliff_data[7] = {
    river_1_data,
    river_2_data,
    river_3_data,
    river_no_data,
    river_no_data,
    river_no_data,
    river_no_data
};

static short river_x_info[BLOCK_TOTAL_NUM];
static short cliff_z_info[BLOCK_TOTAL_NUM];

static uint8_t cross_data[7] = { 22, 23, 26, 30, 31, 37, 38 };

static int cliff_info[7] = {
        1 << 0,
        1 << 1,
        1 << 2,
        1 << 3,
        1 << 4,
        1 << 5,
        1 << 6
};

static int system_block_info[108] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01,
    0x02, 0x04, 0x08, 0x10,
    0x20, 0x40, 0x01, 0x02,
    0x04, 0x08, 0x10, 0x20,
    0x40, 0x01, 0x02, 0x04,
    0x08, 0x10, 0x01, 0x08,
    0x10, 0x20, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x02,
    0x04, 0x08, 0x10, 0x20,
    0x40, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01,
    0x04, 0x08, 0x08, 0x10,
    0x20, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x08, 0x10
};

int16_t use_data[70];

static int16_t exceptional_table[27][2] = {
    { 0x0050, 0x0051 },
    { 0x0055, 0x0056 },
    { 0x0078, 0x0090 },
    { 0x0079, 0x0091 },
    { 0x007a, 0x0092 },
    { 0x007b, 0x0093 },
    { 0x007c, 0x0094 },
    { 0x007d, 0x0095 },
    { 0x007e, 0x0096 },
    { 0x007f, 0x0097 },
    { 0x0080, 0x0098 },
    { 0x0081, 0x0099 },
    { 0x0082, 0x009c },
    { 0x0083, 0x009d },
    { 0x0084, 0x009e },
    { 0x0085, 0x009f },
    { 0x0086, 0x00a0 },
    { 0x0087, 0x00a1 },
    { 0x0088, 0x00a2 },
    { 0x0089, 0x00a3 },
    { 0x008a, 0x00a4 },
    { 0x008b, 0x00a5 },
    { 0x008c, 0x00a6 },
    { 0x008d, 0x00a7 },
    { 0x008e, 0x00a8 },
    { 0x008f, 0x00a9 },
    { 0x0125, 0x0125 }
};

island island_data;

int generate() {
    static uint8_t cliff_blocks[BLOCK_TOTAL_NUM];
    static uint8_t river_blocks[BLOCK_TOTAL_NUM];
    static uint8_t base_table[BLOCK_TOTAL_NUM];

    int bit = 0;
    int perfect_bit = 511; // (1 << 9) - 1
    int step_mode = RANDOM(100) < 15; // 0 = 2 step, 1 = 3 step

    //if (step_mode == 1) { return 1; }
    
    while (perfect_bit != (perfect_bit & bit)) {
        bit = 0;
        init_table(table);
        copy_block_data(cliff_blocks, base_blocks);
        copy_block_data(river_blocks, base_blocks);
        
        while (make_base_landform(cliff_blocks, river_blocks) == 0) {
            copy_block_data(cliff_blocks, base_blocks);
            copy_block_data(river_blocks, base_blocks);
        }

        decide_river_album(cliff_blocks, river_blocks);
        set_flat_blocks(cliff_blocks);
        set_beach(cliff_blocks);

        bit |= set_bridge_and_incline(cliff_blocks, step_mode);
        bit |= set_able_sisters_and_dock(cliff_blocks);
        bit |= set_unique(cliff_blocks);

        set_nook_and_post_office(cliff_blocks);

        bit |= set_lake(cliff_blocks);
        bit |= set_beach_bridge(cliff_blocks, bit);

        init_base(base_table);
        set_base(base_table, cliff_blocks);
        set_acres(table, info, 368, cliff_blocks);
        copy_base_height_data(table, base_table);
    }

    //return validate_town();
    return 0;
}

int make_base_landform(uint8_t* _cliff_blocks, uint8_t* _river_blocks) {
    if (decide_base_cliff(_cliff_blocks) != 0) {
        return decide_base_river(_river_blocks, _cliff_blocks);
    }

    return 0;
}

int decide_base_cliff(uint8_t* _cliff_blocks) {
    int start_z = RANDOM(4);
    int bz = start_z + 2;
    int idx = RANDOM(cliff_start_table[start_z]->count);
    uint8_t start_type = cliff_start_table[start_z]->types[idx];

    _cliff_blocks[d2_to_d1(1, bz)] = start_type;
    _cliff_blocks[d2_to_d1(0, bz)] = 61;

    trace_cliff(_cliff_blocks, 1, bz);
    set_end_cliff(_cliff_blocks);
    return last_check_cliff(_cliff_blocks, 1, bz) != 0;
}

int trace_cliff(uint8_t* _cliff_blocks, int bx, int bz) {
    int n_bx0;
    int n_bz0;
    int n_bx1;
    int n_bz1;

    int block_num = d2_to_d1(bx, bz);
    uint8_t type = _cliff_blocks[block_num] - 15;
    int res = 0;
    int i = 0;

    while (res == 0) {
        int next_idx = RANDOM(cliff_next_data[type]->count);
        uint8_t next = cliff_next_data[type]->types[next_idx];

        direction_to_block(&n_bx0, &n_bz0, bx, bz, cliff_next_direction[type]);
        direction_to_block(&n_bx1, &n_bz1, n_bx0, n_bz0, cliff_next_direction[(uint8_t)(next - 15)]);

        if (check_correct_block_num(n_bx0, n_bz0, 1, 5, 2, 5) != 0 && check_correct_block_num(n_bx1, n_bz1, 1, 6, 2, 5) != 0) {

            if (_cliff_blocks[d2_to_d1(n_bx1, n_bz1)] != 14 && _cliff_blocks[d2_to_d1(n_bx0, n_bz0)] == 39) {
                _cliff_blocks[d2_to_d1(n_bx0, n_bz0)] = next;

                if (n_bx0 == 5) {
                    res = 2; // Final cliff reached
                }
                else {
                    res = 1; // Still tracing
                }

            }
            else {
                return 0;
            }
        }
        else {
            return 0;
        }
    }

    if (res == 1) {
        if (trace_cliff(_cliff_blocks, n_bx0, n_bz0) == 1) {
            return 1;
        }
    }
    else if (res == 2) {
        return 1; // Done tracing
    }

    return 0;
}

void set_end_cliff(uint8_t* _cliff_blocks) {
    int end_z = 0;
    uint8_t direction;
    int i = 0;
    int cliff_type = 0;

    for (i = 0; i < 6; i++) {
        int bnum = d2_to_d1(5, i);
        uint8_t type = _cliff_blocks[bnum] - 15;

        if (_cliff_blocks[bnum] >= 15 && _cliff_blocks[bnum] <= 21) {
            end_z = i;
            cliff_type = type;
        }
    }

    direction = cliff_next_direction[cliff_type];
    if (direction != 3) {
        uint8_t* types = cliff_next_data[cliff_type]->types;

        for (i = 0; i < cliff_next_data[cliff_type]->count; i++) {
            uint32_t t = types[i] - 15;

            if (cliff_next_direction[t] == 3) {
                int bx;
                int bz;

                direction_to_block(&bx, &bz, 5, end_z, direction);
                _cliff_blocks[d2_to_d1(bx, bz)] = types[i];
                _cliff_blocks[d2_to_d1(bx + 1, bz)] = 62;
                break;
            }
        }
    }
    else {
        _cliff_blocks[d2_to_d1(6, end_z)] = 62;
    }
}

int last_check_cliff(uint8_t* _cliff_blocks, int bx, int bz) {
    int n_bx;
    int n_bz;
    int last_x;
    int last_z;
    int8_t type;

    last_x = bx;
    last_z = bz;
    type = _cliff_blocks[d2_to_d1(bx, bz)];

    while (check_block_group(type, 0) != 0)
    {
        uint32_t idx = type - 15;
        uint8_t direction = cliff_next_direction[idx];

        direction_to_block(&n_bx, &n_bz, last_x, last_z, direction);
        type = _cliff_blocks[d2_to_d1(n_bx, n_bz)];
        last_x = n_bx;
        last_z = n_bz;
    }

    if (last_x > 5) {
        return bz != last_z; // Cliff can not start and end on same Z acre
    }

    return 0;
}

int decide_base_river(uint8_t* _river_blocks, uint8_t* _cliff_blocks) {
    static uint8_t keep_blocks[BLOCK_TOTAL_NUM];
    static uint8_t challenge_flag[BLOCK_TOTAL_NUM];

    int start_bx;
    int start_bz;

    copy_block_data(keep_blocks, _cliff_blocks);
    copy_block_data(_river_blocks, keep_blocks);

    if (trace_river_1(_river_blocks, _cliff_blocks, &start_bx, &start_bz) == 0) {
        return 0;
    }

    init_flag(challenge_flag);

    if (trace_river_2(_river_blocks, _cliff_blocks, start_bx, start_bz, challenge_flag) != 0) {
        return last_check_river(_river_blocks, start_bx, start_bz);
    }

    return 0;
}

int trace_river_1(uint8_t* _river_blocks, uint8_t* _cliff_blocks, int* start_bx, int* start_bz) {
    static int start_table[4] = { 1, 2, 4, 5 };

    int n_bx0;
    int n_bz0;
    int n_bx1;
    int n_bz1;
    int end = 0;

    while (end == 0)
    {
        int bx = start_table[RANDOM(4)];
        uint8_t* start_types = river_next_data[0]->types;
        uint8_t start_type = start_types[RANDOM(river_next_data[0]->count)];
        int next_bnum;
        int next_next_bnum;

        direction_to_block(&n_bx0, &n_bz0, bx, 1, 2);
        next_bnum = d2_to_d1(n_bx0, n_bz0);

        direction_to_block(&n_bx1, &n_bz1, n_bx0, n_bz0, river_id_to_direction((uint8_t)(start_type - 40)));
        next_next_bnum = d2_to_d1(n_bx1, n_bz1);

        if (check_correct_block_num(n_bx0, n_bz0, 1, 5, 1, 6) != 0 && _cliff_blocks[next_bnum] != 14)
        {
            if (check_block_group(_cliff_blocks[next_bnum], 0) != 0)
            {
                if (get_river_album(_cliff_blocks[next_bnum], 40) != 255)
                {
                    if (_cliff_blocks[d2_to_d1(n_bx0, n_bz0 + 1)] != 14)
                    {
                        _river_blocks[next_bnum] = 40;
                        start_bx[0] = n_bx0;
                        start_bz[0] = n_bz0;
                        end = 1;
                    }
                }
                else
                {
                    return 0;
                }
            }
            else if (_cliff_blocks[next_next_bnum] != 14)
            {
                _river_blocks[next_bnum] = start_type;
                start_bx[0] = n_bx0;
                start_bz[0] = n_bz0;
                end = 1;
            }
        }

        if (end == 1)
        {
            int border_river = d2_to_d1(bx, 0);
            int rail_river = d2_to_d1(bx, 1);

            _river_blocks[border_river] = 1;
            _river_blocks[rail_river] = 13;
        }
    }

    return 1;
}

int trace_river_2(uint8_t* river_data, uint8_t* cliff_data, int bx, int bz, uint8_t* challenge_flag) {
    uint8_t river_type = river_data[d2_to_d1(bx, bz)] - 40;
    int next_direction = river_id_to_direction(river_type);
    int res = 0;
    int n_bx0;
    int n_bz0;
    int n_bx1;
    int n_bz1;

    while (res == 0) {
        uint8_t* next_river_types = river_next_data[river_type]->types;
        uint8_t next_type = next_river_types[RANDOM(river_next_data[river_type]->count)];
        int next_next_direction = river_id_to_direction((uint8_t)(next_type - 40));

        direction_to_block(&n_bx0, &n_bz0, bx, bz, next_direction);

        if (n_bz0 == 6) {
            next_type = 40;
            next_next_direction = river_id_to_direction(0);
        }

        direction_to_block(&n_bx1, &n_bz1, n_bx0, n_bz0, next_next_direction);

        if (check_correct_block_num(n_bx0, n_bz0, 1, 5, 1, 6) != 0) {
            if (check_correct_block_num(n_bx1, n_bz1, 1, 5, 1, 7) != 0) {
                int next_bnum = d2_to_d1(n_bx0, n_bz0);
                int next_next_bnum = d2_to_d1(n_bx1, n_bz1);

                if (cliff_data[next_next_bnum] != 14) {
                    int wrote = 0;

                    if (check_block_group(cliff_data[next_bnum], 0) != 0) {
                        if (get_river_album(cliff_data[next_bnum], next_river_types[0]) != 255) {
                            river_data[next_bnum] = next_river_types[0];
                            wrote = 1;
                        }
                        else {
                            return 0;
                        }
                    }
                    else {
                        river_data[next_bnum] = next_type;
                        wrote = 1;
                    }

                    if (wrote != 0) {
                        if (n_bz1 == 7) {
                            res = 2; // River reached ocean
                        }
                        else {
                            res = 1; // Continue tracing river
                        }
                    }
                }
            }
        }
        else {
            return 0;
        }
    }

    if (res == 1) {
        if (trace_river_2(river_data, cliff_data, n_bx0, n_bz0, challenge_flag) == 1) {
            return 1;
        }
    }
    else if (res == 2) {
        if (get_river_cross_count(river_data) == 0) {
            return 0; // River did not cross center line on the X coordinate
        }

        if (n_bx0 == 1 || n_bx0 == 5) {
            return 0; // River can't end in F-1 or F-5
        }

        return 1;
    }

    return 0;
}

int last_check_river(uint8_t* river_blocks, int bx, int bz) {
    int x = bx;
    int z = bz;
    int bnum = d2_to_d1(bx, bz);
    uint8_t type = river_blocks[bnum];

    while (check_block_group(type, 1) != 0) {
        int n_bx;
        int n_bz;
        uint8_t direction = river_id_to_direction(type - 40);

        direction_to_block(&n_bx, &n_bz, x, z, direction);
        type = river_blocks[d2_to_d1(n_bx, n_bz)];
        x = n_bx;
        z = n_bz;
    }

    if (z > 6) {
        return 1;
    }

    return 0; // River must have ended at the beach acres
}

int decide_river_album(uint8_t* _cliff_blocks, uint8_t* _river_blocks) {
    for (int bz = 0; bz < 8; bz++) {
        for (int bx = 0; bx < 7; bx++) {
            int block_num = d2_to_d1(bx, bz);
            uint8_t river_type = _river_blocks[block_num];
            uint8_t river_album_type = get_river_album(_cliff_blocks[block_num], river_type);

            if (river_album_type != 255) {
                _cliff_blocks[block_num] = river_album_type;
            }
            else if (check_block_group(river_type, 1) != 0 || river_type == 1 || river_type == 13) {
                _cliff_blocks[block_num] = _river_blocks[block_num];
            }
        }
    }

    return 1;
}

void set_flat_blocks(uint8_t* _cliff_blocks) {
    int bnum;
    uint8_t type;
    int bx = 1;
    int bz = 1;
    short side;
    int i = 0;

    for (i = 0; i < 70; i++) {
        river_x_info[i] = 2;
        cliff_z_info[i] = 2;
    }

    for (bx = 1; bx < 6; bx++) {
        side = 0;

        for (bz = 1; bz < 9; bz++) {
            bnum = d2_to_d1(bx, bz);
            type = _cliff_blocks[bnum];

            if (side == 0 && check_block_group(type, 8) != 0) {
                side = 1;
            }

            cliff_z_info[bnum] = side;
        }
    }

    for (bz = 1; bz < 9; bz++) {
        side = 0;

        for (bx = 1; bx < 6; bx++) {
            bnum = d2_to_d1(bx, bz);
            type = _cliff_blocks[bnum];

            if (side == 0 && (check_block_group(type, 1) || check_block_group(type, 4))) {
                side = 1;
            }

            river_x_info[bnum] = side;
        }
    }
}

void set_beach(uint8_t* _cliff_blocks) {
    int i = 1;

    for (i = 1; i < 6; i++) {
        int bnum = d2_to_d1(i, 6);

        if (_cliff_blocks[bnum] == 39) {
            _cliff_blocks[bnum] = 63;
        }
        else if (_cliff_blocks[bnum] == 40) {
            _cliff_blocks[bnum] = 64;
        }
    }

    _cliff_blocks[d2_to_d1(0, 6)] = 80;
    _cliff_blocks[d2_to_d1(6, 6)] = 81;
}

int set_bridge_and_incline(uint8_t* _cliff_blocks, int step_mode) {
    int flags = 0;

    flags |= set_bridge(_cliff_blocks, step_mode);
    flags |= set_incline(_cliff_blocks);

    return flags;
}

int set_bridge(uint8_t* _cliff_blocks, int step_mode) {
    int before_cross = 0;
    int after_cross = 0;
    int cross_bx = 0;
    int cross_bz = 0;
    int flags = 0;
    uint8_t* blocks_p = _cliff_blocks;
    uint8_t* blocks_p2 = _cliff_blocks;
    int rng = RANDOM(10) & 1;
    
    get_river_cross_info(&cross_bx, &cross_bz, _cliff_blocks);

    for (int bz = 0; bz < 8; bz++) {
        for (int bx = 0; bx < 7; bx++) {
            if (check_block_group(*_cliff_blocks, 1) != 0) {
                if (bz < cross_bz) {
                    before_cross++;
                }
                else if (bz > cross_bz) {
                    after_cross++;
                }
            }

            _cliff_blocks++;
        }
    }

    if (before_cross != 0) {
        int selected = RANDOM(before_cross);
        int cross_num = 0;

        for (int bz = 0; bz < 8; bz++) {
            for (int bx = 0; bx < 7; bx++) {
                if (check_block_group(*blocks_p, 1) != 0 && bz < cross_bz) {
                    if (cross_num == selected) {
                        blocks_p[0] += 7;
                        flags |= TO_BIT(2);
                        break;
                    }

                    cross_num++;
                }

                blocks_p++;
            }
        }
    }

    if (after_cross != 0 && step_mode == 0 && rng != 0) {
        int selected = RANDOM(after_cross);
        int cross_num = 0;

        for (int bz = 0; bz < 8; bz++) {
            for (int bx = 0; bx < 7; bx++) {
                if (check_block_group(*blocks_p2, 1) != 0 && bz > cross_bz) {
                    if (cross_num == selected) {
                        blocks_p2[0] += 7;
                        flags |= TO_BIT(2);
                        break;
                    }

                    cross_num++;
                }

                blocks_p2++;
            }
        }
    }

    return flags;
}

int set_incline(uint8_t* _cliff_blocks) {
    int flags = 0;

    for (int bz = 0; bz < 8; bz++) {
        if (_cliff_blocks[d2_to_d1(0, bz)] == 61) {
            int possibilities = count_directed_info_cliff(_cliff_blocks, 0, bz, 0);
            int selected;

            if (possibilities != 0) {
                selected = RANDOM(possibilities);

                if (set_slope_directed_info_cliff(_cliff_blocks, 0, bz, 0, selected) != 0) {
                    flags |= TO_BIT(0);
                }
            }

            possibilities = count_directed_info_cliff(_cliff_blocks, 0, bz, 1);

            if (possibilities != 0) {
                selected = RANDOM(possibilities);

                if (set_slope_directed_info_cliff(_cliff_blocks, 0, bz, 1, selected) != 0) {
                    flags |= TO_BIT(1);
                }
            }
        }
    }

    return flags;
}

int set_able_sisters_and_dock(uint8_t* _cliff_blocks) {
    int flags = 0;
    int a_sisters_bx = RANDOM(3);
    int bx = 0;

    if (_cliff_blocks[d2_to_d1(5, 6)] == 63) {
        _cliff_blocks[d2_to_d1(5, 6)] = 100;
    }
    else {
        return 0;
    }

    for (int i = 1; i < 6; i++) {
        int bnum = d2_to_d1(i, 6);

        if (_cliff_blocks[bnum] == 63) {
            if (a_sisters_bx == bx) {
                _cliff_blocks[bnum] = 85;
                flags |= TO_BIT(8);
            }

            bx++;
        }
    }

    return flags;
}

int set_unique(uint8_t* _cliff_blocks) {
    int flags = 0;
    int side_0 = RANDOM(100) & 1;
    int side_1 = (side_0 ^ 1) & 1;

    // Wishing Well
    if (flat_to_unique(_cliff_blocks, 66, side_0, 1)) {
        flags |= TO_BIT(4);
    }
    else if (flat_to_unique(_cliff_blocks, 66, side_1, 1)) {
        flags |= TO_BIT(4);
    }

    // Police Station
    if (flat_to_unique(_cliff_blocks, 68, side_1, 1)) {
        flags |= TO_BIT(5);
    }
    else if (flat_to_unique(_cliff_blocks, 68, side_0, 1)) {
        flags |= TO_BIT(5);
    }

    // Museum
    if (flat_to_unique(_cliff_blocks, 84, 2, 1)) {
        flags |= TO_BIT(6);
    }

    return flags;
}

int set_nook_and_post_office(uint8_t* _cliff_blocks) {
    uint8_t t0;
    uint8_t t1;
    int set_t0 = 0;
    int set_t1 = 0;

    // 65 = Nook
    // 67 = Post Office

    if (RANDOM(1000) & 1) {
        t0 = 65;
        t1 = 67;
    }
    else {
        t0 = 67;
        t1 = 65;
    }

    while (set_t0 == 0) {
        int bx = 1 + RANDOM(2);
        int bnum = d2_to_d1(bx, 1);

        if (_cliff_blocks[bnum] == 12) {
            _cliff_blocks[bnum] = t0;
            set_t0 = 1;
        }
    }

    while (set_t1 == 0) {
        int bx = 4 + RANDOM(2);
        int bnum = d2_to_d1(bx, 1);

        if (_cliff_blocks[bnum] == 12) {
            _cliff_blocks[bnum] = t1;
            set_t1 = 1;
        }
    }

    return 0;
}

int set_lake(uint8_t* _cliff_blocks) {
    int pure_river_num = count_pure_river(_cliff_blocks);

    if (pure_river_num != 0) {
        int selected = RANDOM(pure_river_num);

        if (set_lake_directed_river(_cliff_blocks, selected) != 0) {
            return TO_BIT(7);
        }
    }

    return 0;
}

int set_lake_directed_river(uint8_t* _cliff_blocks, int idx) {
    int count = 0;

    for (int i = 0; i < 56; i++) {
        if (
            _cliff_blocks[i] == 40 ||
            _cliff_blocks[i] == 41 ||
            _cliff_blocks[i] == 42 ||
            _cliff_blocks[i] == 43 ||
            _cliff_blocks[i] == 44 ||
            _cliff_blocks[i] == 45 ||
            _cliff_blocks[i] == 46
            ) {
            if (count == idx) {
                _cliff_blocks[i] = 29 + _cliff_blocks[i];
                return 1;
            }

            count++;
        }
    }

    return 0;
}

int set_beach_bridge(uint8_t* _cliff_blocks, int flags) {
    if ((flags & TO_BIT(3)) == 0) {
        for (int i = 0; i < 56; i++) {
            if (_cliff_blocks[i] == 64) {
                _cliff_blocks[i] = 82;
                return TO_BIT(3);
            }
        }
    }

    return 0;
}

void set_base(uint8_t* _base_table, uint8_t* _cliff_blocks) {
    for (int bx = 0; bx < 7; bx++) {
        int height = 0;

        for (int bz = 9; bz >= 0; bz--) {
            uint8_t type = _cliff_blocks[d2_to_d1(bx, bz)];
            _base_table[d2_to_d1(bx, bz)] = height;

            if (
                (system_block_info[type] & 1) != 0 ||
                (system_block_info[type] & 8) != 0 ||
                (system_block_info[type] & 16) != 0 ||
                (type == 61) || (type == 62)
                ) {
                height++;
            }
        }
    }
}

void set_acres(blocks* _table, block_info* _info, int count, uint8_t* _cliff_blocks) {
    init_short_data(use_data, -1, 70);

    for (int bz = 0; bz < 10; bz++) {
        for (int bx = 0; bx < 7; bx++) {
            int bnum = d2_to_d1(bx, bz);
            uint8_t type = _cliff_blocks[d2_to_d1(bx, bz)];

            if (type == 101) {
                uint16_t down_bg_name = get_bg_name(_info[_table[d2_to_d1(bx, bz - 1)].combination_type].background_id);
                _table[bnum].combination_type = bg_name_to_random(down_bg_name, _info, count);
            }
            else {
                int type_count = get_type_count(_info, count, type, 0);
                int selected;
                int16_t block_no;

                if (type_count != 0) {
                    selected = RANDOM(type_count);
                    block_no = index_to_block(_info, count, type, selected, 0);

                    if (block_no != -1) {
                        _table[bnum].combination_type = block_no;
                        use_data[bnum] = block_no;
                    }
                    else {
                        selected = RANDOM(get_type_count(_info, count, type, 1));
                        block_no = index_to_block(_info, count, type, selected, 1);

                        if (block_no != -1) {
                            _table[bnum].combination_type = block_no;
                            use_data[bnum] = block_no;
                        }
                        else {
                            _table[bnum].combination_type = 161;
                        }
                    }
                }
                else {
                    selected = RANDOM(get_type_count(_info, count, type, 1));
                    block_no = index_to_block(_info, count, type, selected, 1);

                    if (block_no != -1) {
                        _table[bnum].combination_type = block_no;
                        use_data[bnum] = block_no;
                    }
                    else {
                        _table[bnum].combination_type = 161;
                    }
                }
            }

            if (type == 99 || type == 98) {
                uint16_t bg_id = _info[_table[bnum].combination_type].background_id;

                if (type == 98) {
                    island_data.bg_data[0] = bg_id - 116;
                }
                else {
                    island_data.bg_data[1] = bg_id - 112;
                }
            }
        }
    }
}

void copy_base_height_data(blocks* _table, uint8_t* _base_table) {
    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        _table->height = *_base_table;
        _table++;
        _base_table++;
    }
}

/* UTILITY */

void init_table(blocks* _table) {
    static blocks init_table = { 1, 0 };

    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        _table[0] = init_table;
        _table++;
    }
}

void copy_block_data(uint8_t* to, uint8_t* from) {
    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        *to++ = *from++;
    }
}

int d2_to_d1(int bx, int bz) {
    return bz * 7 + bx;
}

void direction_to_block(int* bx, int* bz, int base_bx, int base_bz, int direction) {
    static int x_offset[4] = { 0, -1, 0, 1 };
    static int z_offset[4] = { -1, 0, 1, 0 };

    int idx = direction & 3;

    bx[0] = base_bx + x_offset[idx];
    bz[0] = base_bz + z_offset[idx];
}

int check_correct_block_num(int bx, int bz, int bx_min, int bx_max, int bz_min, int bz_max) {
    if (bx < bx_min) {
        return 0;
    }

    if (bx > bx_max) {
        return 0;
    }

    if (bz < bz_min) {
        return 0;
    }

    if (bz > bz_max) {
        return 0;
    }

    return 1;
}

int check_block_group(uint8_t type, int group) {
    static block_group block_groups[9] = {
        {15, 21},
        {40, 46},
        {47, 53},
        {54, 60},
        {22, 38},
        {22, 28},
        {29, 33},
        {34, 38},
        { 0,  0}
    };

    if (group == 8) {
        if (
                (type >= block_groups[0].min && type <= block_groups[0].max) ||
                (type >= block_groups[3].min && type <= block_groups[3].max) ||
                (type >= block_groups[4].min && type <= block_groups[4].max)
            ) {
            return 1;
        }
        return 0;
    }
    else {
        block_group block_group = block_groups[group];

        if (type >= block_group.min && type <= block_group.max) {
            return 1;
        }
    }

    return 0;
}

int river_id_to_direction(int river_idx) {
    if (river_idx >= 0 && river_idx < 7) {
        return river_next_direction[river_idx];
    }

    return 2;
}

uint8_t get_river_album(uint8_t cliff_type, uint8_t river_type) {
    if (check_block_group(cliff_type, 0) != 0 && check_block_group(river_type, 1) != 0) {
        int river = (uint32_t)(river_type - 40);
        int cliff = (uint32_t)(cliff_type - 15);

        if (river >= 0 && river < 7 && cliff >= 0 && cliff < 7) {
            return river_cliff_data[river][cliff];
        }
    }

    return 255;
}

void init_flag(uint8_t* challenge_flag) {
    int i = 0;

    for (i = 0; i < 56; i++) {
        *challenge_flag++ = 0;
    }
}

int get_river_cross_count(uint8_t* river_data) {
    int i = 2;
    int cross_count = 0;

    for (i = 2; i <= 5; i++) {
        if (check_block_group(river_data[d2_to_d1(3, i)], 1) != 0) {
            cross_count++;
        }
    }

    return cross_count;
}

int get_river_cross_info(int* bx, int* bz, uint8_t* _cliff_blocks) {
    int crossings = 0;

    for (int i = 0; i < 56; i++) {
        for (int j = 0; j < 7; j++) {
            if (cross_data[j] == _cliff_blocks[i]) {
                if (crossings == 0) {
                    bz[0] = i / 7;
                    bx[0] = i % 7;
                }

                crossings++;
            }
        }
    }

    return crossings;
}

int count_directed_info_cliff(uint8_t* _cliff_blocks, int bx, int bz, int half) {
    int x = bx + 1;
    int z = bz;
    int bnum = d2_to_d1(x, z);
    uint8_t type;
    int side = 0;
    int count = 0;
    int n_bx = 0;
    int n_bz = 0;

   
    type = _cliff_blocks[bnum];

    while (type != 62) {
        int idx = get_cliff_index(type);

        if (check_block_group(type, 4) != 0) {
            side = 1;
        }
        else if (side == half) {
            count++;
        }

        direction_to_block(&n_bx, &n_bz, x, z, cliff_next_direction[idx]);
        d2_to_d1(n_bx, n_bz);
        x = n_bx;
        z = n_bz;
        type = _cliff_blocks[d2_to_d1(n_bx, n_bz)];
    }

    return count;
}

int get_cliff_index(uint8_t type) {
    int block_info = system_block_info[type];
    int i = 0;

    for (i = 0; i < 7; i++) {
        if ((block_info & cliff_info[i]) != 0) {
            return i;
        }
    }

    return -1;
}

int set_slope_directed_info_cliff(uint8_t* _cliff_blocks, int bx, int bz, int half, int selected_idx) {
    int x = bx + 1;
    int z = bz;
    int bnum = d2_to_d1(x, z);
    uint8_t type = _cliff_blocks[bnum];
    int side = 0;
    int count = 0;
    int n_bx;
    int n_bz;
    
    while (type != 62) {
        int idx = get_cliff_index(type);

        if (check_block_group(type, 4) != 0) {
            side = 1;
        }
        else if (side == half) {
            if (count == selected_idx) {
                _cliff_blocks[bnum] = 54 + idx;
                return 1;
            }

            count++;
        }

        direction_to_block(&n_bx, &n_bz, x, z, cliff_next_direction[idx]);
        d2_to_d1(n_bx, n_bz);
        x = n_bx;
        z = n_bz;
        bnum = d2_to_d1(n_bx, n_bz);
        type = _cliff_blocks[bnum];
    }

    return 0;
}

int flat_to_unique(uint8_t* _cliff_blocks, uint8_t unique_type, int river_side, int cliff_height) {
    int num = count_flat(_cliff_blocks, river_side, cliff_height);

    if (num != 0) {
        int selected = RANDOM(num);

        if (rewrite_flat(_cliff_blocks, selected, unique_type, river_side, cliff_height) != -1) {
            return 1;
        }
    }

    return 0;
}

int count_flat(uint8_t* _cliff_blocks, int river_side, int cliff_height) {
    int i;
    int count = 0;

    for (i = 0; i < 56; i++) {
        if (judge_flat(_cliff_blocks, i, river_side, cliff_height) != 0) {
            count++;
        }
    }

    return count;
}

int rewrite_flat(uint8_t* _cliff_blocks, int idx, uint8_t type, int river_side, int cliff_height) {
    int i = 0;
    int count = 0;

    for (i = 0; i < 56; i++) {
        if (judge_flat(_cliff_blocks, i, river_side, cliff_height) != 0) {
            if (count == idx) {
                _cliff_blocks[i] = type;
                return i;
            }

            count++;
        }
    }

    return -1;
}

int judge_flat(uint8_t* _cliff_blocks, int bnum, int river_side, int cliff_height) {
    if (river_side < 0 || river_side >= 3 || cliff_height < 0 || cliff_height >= 3) {
        return 0;
    }

    if (bnum < 0 || bnum >= 56) {
        return 0;
    }

    if (_cliff_blocks[bnum] == 39) {
        if (cliff_height != 2) {
            if (river_side != 2) {
                if (river_side == river_x_info[bnum] && cliff_height == cliff_z_info[bnum]) {
                    return 1;
                }
            }
            else if (cliff_height == cliff_z_info[bnum]) {
                return 1;
            }
        }
        else if (river_side != 2) {
            if (river_side == river_x_info[bnum] && cliff_height == cliff_z_info[bnum]) {
                return 1;
            }
        }
        else if (cliff_height == cliff_z_info[bnum]) {
            return 1;
        }
    }

    return 0;
}

int count_pure_river(uint8_t* _cliff_blocks) {
    int count = 0;

    for (int i = 0; i < 56; i++) {
        if (
            _cliff_blocks[i] == 40 ||
            _cliff_blocks[i] == 41 ||
            _cliff_blocks[i] == 42 ||
            _cliff_blocks[i] == 43 ||
            _cliff_blocks[i] == 44 ||
            _cliff_blocks[i] == 45 ||
            _cliff_blocks[i] == 46
            ) {
            count++;
        }
    }

    return count;
}

void init_base(uint8_t* _base_table) {
    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        *_base_table++ = 0;
    }
}

void init_short_data(int16_t* data, int16_t value, int num) {
    for (int i = 0; i != num; i++) {
        *data++ = value;
    }
}

int16_t get_bg_name(int16_t sea_bg) {
    int16_t* exceptional_p = exceptional_table[0];

    while (exceptional_p[0] != 0x125) {
        if (exceptional_p[0] == sea_bg) {
            return exceptional_p[1];
        }

        exceptional_p += 2;
    }

    return sea_bg;
}

uint16_t bg_name_to_random(uint16_t bg_name, block_info* _info, int block_count) {
    int count = 0;
    block_info* info_p;

    info_p = _info;

    for (int i = 0; i < block_count; i++) {
        if (info_p->background_id == bg_name && info_p->type != 255) {
            count++;
        }

        info_p++;
    }

    if (count != 0) {
        int n_count = 0;
        int selected = RANDOM(0);

        info_p = _info;

        for (int i = 0; i < block_count; i++) {
            if (info_p->background_id == bg_name && info_p->type != 0xFF) {
                if (selected == n_count) {
                    return i;
                }

                n_count++;
            }

            info_p++;
        }
    }

    return block_count;
}

int get_type_count(block_info* _info, int block_count, uint8_t type, int16_t reuse) {
    int count = 0;

    for (int i = 0; i < block_count; i++) {
        if (type == _info[i].type) {
            if (reuse == 0) {
                if (get_already_in_use(i) == 0) {
                    count++;
                }
            }
            else if (reuse == 1) {
                count++;
            }
        }
    }

    return count;
}

int get_already_in_use(int16_t value) {
    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        if (value == use_data[i]) {
            return 1;
        }
    }

    return 0;
}

int16_t index_to_block(block_info* _info, int block_count, uint8_t type, int idx, int16_t reuse) {
    int count = 0;

    for (int i = 0; i < block_count; i++) {
        if (type == _info[i].type) {
            if (reuse == 0) {
                if (get_already_in_use(i) == 0) {
                    if (count == idx) {
                        return i;
                    }

                    count++;
                }
            }
            else if (reuse == 1) {
                if (count == idx) {
                    return i;
                }

                count++;
            }
        }
    }

    return -1;
}

void print_acre_ids(void) {
    const char line[] = "\n--------------------------------------------------------\n";

    for (int i = 0; i < BLOCK_TOTAL_NUM; i++) {
        if (i == 0) {
            printf(line);
        }

        if (i % 7 == 0 && i != 0) {
            printf(line);
        }

        if (i >= 8 && i <= 12) { // A 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_RED);
        }
        else if (i >= 15 && i <= 19) { // B 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_GREEN);
        }
        else if (i >= 22 && i <= 26) { // C 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_YELLOW);
        }
        else if (i >= 29 && i <= 33) { // D 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_BLUE);
        }
        else if (i >= 36 && i <= 40) { // E 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_MAGENTA);
        }
        else if (i >= 43 && i <= 47) { // F 1-5
            print_colorful_id(table[i].combination_type << 2, ANSI_COLOR_CYAN);
        }
        else {
            printf("| %04X |", table[i].combination_type << 2);
        }
    }
    printf(line);
}

void print_colorful_id(uint16_t id, char color[]) {
    printf("|");
    printf("%s %04X %s", color, id, ANSI_COLOR_RESET);
    printf("|");
}

int validate_town(void) {
    /*
    Ideal town for Golden Rod:
    - 2 Layer Town
    - A2 Post Office
    - A4 Nook
    - Lake in B-5/C-4/C-5 (IDs: 01FC, 02C8, 02CC, 02E8, 02EC, 02F8, 02FC)
    - Good river corner acre (IDs: 0234, 01D0, 00EC)
    */

    uint16_t a2 = table[9].combination_type << 2;
    if (
        a2 != 0x0370 &&
        a2 != 0x0380 &&
        a2 != 0x0384
        ) {
        return 2;
    }

    uint16_t a4 = table[11].combination_type << 2;
    if (
        a4 != 0x0374 &&
        a4 != 0x037C &&
        a4 != 0x0374
        ) {
        return 3;
    }
    
    uint16_t b5 = table[19].combination_type << 2;
    uint16_t c4 = table[25].combination_type << 2;
    uint16_t c5 = table[26].combination_type << 2;
    if (
        (b5 != 0x01FC &&
        b5 != 0x02C8 &&
        b5 != 0x02CC &&
        b5 != 0x02E8 &&
        b5 != 0x02EC &&
        b5 != 0x02F8 &&
        b5 != 0x02FC) &&

        (c4 != 0x01FC &&
        c4 != 0x02C8 &&
        c4 != 0x02CC &&
        c4 != 0x02E8 &&
        c4 != 0x02EC &&
        c4 != 0x02F8 &&
        c4 != 0x02FC) &&

        (c5 != 0x01FC &&
        c5 != 0x02C8 &&
        c5 != 0x02CC &&
        c5 != 0x02E8 &&
        c5 != 0x02EC &&
        c5 != 0x02F8 &&
        c5 != 0x02FC)
        ) {
        return 4;
    }

    return 0;
}