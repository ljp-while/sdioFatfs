#ifndef  __FONT_H
#define  __FONT_H

#include "main.h"

#define FONT_START_ADDR			0X500000			//字库信息起始地址
#define FONT_SIZE				1024*1024*4			//字库信息大小  4M

#define UNIGBK_BLOCK1_ADDR      0X500000
#define UNIGBK_BLOCK1_SIZE		87172

#define UNIGBK_BLOCK2_ADDR      0X515484
#define UNIGBK_BLOCK2_SIZE		87172

#define GBK16_START_ADDR        0x52a908
#define GBK16_SIZE				766080

#define GBK24_START_ADDR        0x5e5988
#define GBK24_SIZE				1723680

#define FONT_INFO_STATE         0x78b030
#define FONT_INFO_SIZE			1
 

typedef __packed  struct {
	uint8_t state;
	uint32_t unigbkStartAdd;
	uint32_t unigbkSize;
	uint32_t gbk16StartAdd;
	uint32_t gbk16Size;
	uint32_t gbk24StartAdd;
	uint32_t gbk24Size;
}fontMsg;

#endif /*__FONT_H*/

