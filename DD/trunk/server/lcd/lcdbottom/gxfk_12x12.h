/*本文件为12×12点阵中文字库文件,字的横向8点构成一字节,左边点在字节的高位,字符点阵四角按左上角→右上角→左下角→右下角取字*/
/*如你想在以后继续用HZDotReader打开文件,追加汉字点阵数据,请不要修改或增删所有注释*/

const unsigned char font_chi_s[] = {
		/*叹 显示告警异常显示标识  */
		0x1F,0x00,0x20,0x80,0x44,0x40,0x84,0x20,
		0x84,0x20,0x84,0x20,0x84,0x20,0x84,0x20,
		0x80,0x20,0x44,0x40,0x20,0x80,0x1F,0x00,
		
		//0xFF,0xFF,0x80,0x01,0x80,0x01,0x80,0x01,
		//0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,
		//0x80,0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,

		/*框 显示事件框 CAFA1 */
		0xFF,0xF0,0x80,0x00,0x80,0x00,0x80,0x00,
		0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,
		0x80,0x00,0x80,0x00,0x80,0x00,0xFF,0xF0,
		
		//匡 显示事件框 CAFA1 */
		0xFF,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,
		0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
		0x00,0x10,0x00,0x10,0x00,0x10,0xFF,0xF0,
		
		/*隐 显示事件框  */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*·   CA1A4 */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*◆   CA1F4 */
		0x40,0x00,0x60,0x00,0x70,0x00,0x78,0x00,
		0x7C,0x00,0x7E,0x00,0x7E,0x00,0x7C,0x00,
		0x78,0x00,0x70,0x00,0x60,0x00,0x40,0x00,

		/*ぁ   CA4A1 */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,

		/*あ   CA4A2 */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,
		0x18,0x00,0xD8,0x00,0xD8,0x00,0x00,0x00,

		/*ぃ   CA4A3 */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x03,0x00,0x03,0x00,0x03,0x00,0x1B,0x00,
		0x1B,0x00,0xDB,0x00,0xDB,0x00,0x00,0x00,

		/*い   CA4A4 */
		0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,
		0x03,0x60,0x03,0x60,0x03,0x60,0x1B,0x60,
		0x1B,0x60,0xDB,0x60,0xDB,0x60,0x00,0x00,

		/*ぅ   CA4A5 */
		0x7F,0xC0,0x80,0x20,0x80,0x30,0x80,0x30,
		0x80,0x20,0x7F,0xC0,0x00,0x00,0x06,0x00,
		0x09,0x00,0x09,0x00,0x3F,0xC0,0x3F,0xC0,

		/*う   CA4A6 */
		0x7F,0xC0,0xE0,0x20,0xE0,0x30,0xE0,0x30,
		0xE0,0x20,0x7F,0xC0,0x00,0x00,0x06,0x00,
		0x09,0x00,0x09,0x00,0x3F,0xC0,0x3F,0xC0,

		/*ぇ   CA4A7 */
		0x7F,0xC0,0xF8,0x20,0xF8,0x30,0xF8,0x30,
		0xF8,0x20,0x7F,0xC0,0x00,0x00,0x06,0x00,
		0x09,0x00,0x09,0x00,0x3F,0xC0,0x3F,0xC0,

		/*え   CA4A8 */
		0x7F,0xC0,0xFE,0x20,0xFE,0x30,0xFE,0x30,
		0xFE,0x20,0x7F,0xC0,0x00,0x00,0x06,0x00,
		0x09,0x00,0x09,0x00,0x3F,0xC0,0x3F,0xC0,

		/*ぉ   CA4A9 */
		0x7F,0xC0,0xFF,0xA0,0xFF,0xB0,0xFF,0xB0,
		0xFF,0xA0,0x7F,0xC0,0x00,0x00,0x06,0x00,
		0x09,0x00,0x09,0x00,0x3F,0xC0,0x3F,0xC0,

		/*お   CA4AA */
		0x7F,0xC0,0x80,0x20,0x80,0x30,0x80,0x30,
		0x80,0x20,0x7F,0xC0,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*か   CA4AB */
		0x7F,0xC0,0xE0,0x20,0xE0,0x30,0xE0,0x30,
		0xE0,0x20,0x7F,0xC0,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*が   CA4AC */
		0x7F,0xC0,0xF8,0x20,0xF8,0x30,0xF8,0x30,
		0xF8,0x20,0x7F,0xC0,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*き   CA4AD */
		0x7F,0xC0,0xFE,0x20,0xFE,0x30,0xFE,0x30,
		0xFE,0x20,0x7F,0xC0,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*ぎ   CA4AE */
		0x7F,0xC0,0xFF,0xA0,0xFF,0xB0,0xFF,0xB0,
		0xFF,0xA0,0x7F,0xC0,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*☆   CA1EE */
		0xFF,0xF0,0x7F,0x70,0xBE,0xF0,0xDD,0xF0,
		0xEB,0xF0,0xF7,0xF0,0xF6,0x30,0xF7,0xD0,
		0xF7,0x10,0xF6,0xD0,0xF7,0x20,0xFF,0xF0,

		/*★   CA1EF */
		0x00,0x00,0x80,0x80,0x41,0x00,0x22,0x00,
		0x14,0x00,0x08,0x00,0x09,0xC0,0x08,0x20,
		0x08,0xE0,0x09,0x20,0x08,0xD0,0x00,0x00,

		/*○   CA1F0 */
		0xFF,0xF0,0x7F,0x70,0xBE,0xF0,0xDD,0xF0,
		0xEA,0xF0,0xF6,0xF0,0xF6,0x90,0xF6,0x60,
		0xF6,0xE0,0xF6,0x60,0xF6,0x90,0xFF,0xF0,

		/*●   CA1F1 */
		0x00,0x00,0x80,0x80,0x41,0x00,0x22,0x00,
		0x15,0x00,0x09,0x00,0x09,0x60,0x09,0x90,
		0x09,0x10,0x09,0x90,0x09,0x60,0x00,0x00,

		/*□   CA1F5 */
		0xFF,0xF0,0x7F,0x70,0xBE,0xF0,0xDD,0xF0,
		0xEB,0xF0,0xF7,0xF0,0xF7,0x10,0xF6,0xE0,
		0xF6,0xF0,0xF6,0xF0,0xF7,0x10,0xFF,0xF0,

		/*■   CA1F6 */
		0x00,0x00,0x80,0x80,0x41,0x00,0x22,0x00,
		0x14,0x00,0x08,0x00,0x08,0xE0,0x09,0x10,
		0x09,0x00,0x09,0x00,0x08,0xE0,0x00,0x00,

		/*△   CA1F7 */
		0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,
		0xFB,0xF0,0xF1,0xF0,0xE0,0xF0,0xC0,0x70,
		0x80,0x30,0x00,0x10,0xFF,0xF0,0xFF,0xF0,

		/*▲   CA1F8 */
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x04,0x00,0x0E,0x00,0x1F,0x00,0x3F,0x80,
		0x7F,0xC0,0xFF,0xE0,0x00,0x00,0x00,0x00,

		/*▼   CA88B */
		0xFF,0xE0,0x7F,0xC0,0x3F,0x80,0x1F,0x00,
		0x0E,0x00,0x04,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

		/*相   CCFE0 */
		0x10,0x20,0x13,0xF0,0x12,0x20,0xFE,0x20,
		0x13,0xE0,0x12,0x20,0x5A,0x20,0x57,0xE0,
		0x92,0x20,0x92,0x20,0x13,0xE0,0x12,0x20,

		/*电   CB5E7 */
		0x04,0x00,0x04,0x40,0x7F,0xE0,0x44,0x40,
		0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,
		0x7F,0xC0,0x04,0x10,0x04,0x10,0x03,0xF0,

		/*压   CD1B9 */
		0x00,0x20,0x3F,0xF0,0x20,0x00,0x22,0x00,
		0x22,0x40,0x2F,0xE0,0x22,0x00,0x22,0x80,
		0x42,0x40,0x42,0x20,0x82,0x00,0xBF,0xF0,

		/*流   CC1F7 */
		0x01,0x00,0x4F,0xF0,0x21,0x00,0x82,0x40,
		0x4F,0xE0,0x20,0x20,0x25,0x40,0x25,0x40,
		0xC5,0x50,0x45,0x50,0x49,0x50,0x51,0x30,

		/*零   CC1E3 */
		0x3F,0xC0,0x04,0x00,0x7F,0xF0,0x84,0x10,
		0x35,0xC0,0x0A,0x00,0x15,0x80,0x62,0x70,
		0xBF,0xA0,0x01,0x00,0x0E,0x00,0x03,0x00,

		/*序   CD0F2 */
		0x02,0x20,0x7F,0xF0,0x40,0x00,0x5F,0xE0,
		0x42,0x80,0x41,0x00,0x5F,0xF0,0x41,0x20,
		0x41,0x00,0x41,0x00,0x45,0x00,0x82,0x00,

		/*总   CD7DC */
		0x10,0x80,0x09,0x00,0x0A,0x00,0x3F,0xC0,
		0x20,0x40,0x20,0x40,0x3F,0xC0,0x04,0x00,
		0x52,0x40,0x52,0xA0,0x90,0x90,0x0F,0x80,

		/*有   CD3D0 */
		0x04,0x00,0x04,0x20,0xFF,0xF0,0x08,0x00,
		0x1F,0xC0,0x30,0x40,0x5F,0xC0,0x90,0x40,
		0x1F,0xC0,0x10,0x40,0x11,0x40,0x10,0x80,

		/*功   CB9A6 */
		0x01,0x00,0x11,0x00,0xF9,0x20,0x27,0xF0,
		0x21,0x20,0x21,0x20,0x21,0x20,0x39,0x20,
		0xC2,0x20,0x04,0x20,0x08,0xA0,0x30,0x40,

		/*率   CC2CA */
		0x02,0x00,0xFF,0xF0,0x04,0x20,0x49,0x40,
		0x2E,0x80,0x15,0x40,0x6F,0xA0,0x82,0x10,
		0x02,0x00,0xFF,0xF0,0x02,0x00,0x02,0x00,

		/*无   CCEDE */
		0x00,0x40,0x7F,0xE0,0x04,0x00,0x04,0x00,
		0x04,0x20,0xFF,0xF0,0x05,0x00,0x05,0x00,
		0x09,0x10,0x11,0x10,0x21,0x10,0xC0,0xF0,

		/*因   CD2F2 */
		0x00,0x20,0x7F,0xF0,0x44,0x20,0x44,0x20,
		0x5F,0xA0,0x44,0x20,0x46,0x20,0x49,0x20,
		0x50,0xA0,0x60,0x20,0x7F,0xE0,0x40,0x20,

		/*数   CCAFD */
		0x94,0x80,0x58,0x80,0xFD,0xF0,0x31,0x20,
		0x5A,0x20,0x90,0x40,0x21,0x40,0xFD,0x40,
		0x48,0x80,0x30,0x80,0x29,0x40,0xC6,0x30,

		/*加   CBCD3 */
		0x20,0x00,0x20,0x20,0x25,0xF0,0xFF,0x20,
		0x25,0x20,0x25,0x20,0x25,0x20,0x25,0x20,
		0x25,0x20,0x45,0xE0,0x55,0x20,0x88,0x00,

		/*失   CCAA7 */
		0x04,0x00,0x24,0x40,0x3F,0xE0,0x44,0x00,
		0x04,0x20,0xFF,0xF0,0x04,0x00,0x04,0x00,
		0x09,0x00,0x10,0x80,0x20,0x40,0xC0,0x30,

		/*量   CC1BF */
		0x3F,0xC0,0x24,0x40,0x22,0x40,0xFF,0xF0,
		0x00,0x00,0x3F,0xC0,0x24,0x40,0x3F,0xC0,
		0x24,0x40,0x3F,0xC0,0x04,0x00,0xFF,0xF0,

		/*表   CB1ED */
		0x04,0x00,0x04,0x40,0x7F,0xE0,0x04,0x00,
		0x3F,0xC0,0x04,0x00,0xFF,0xF0,0x1A,0x20,
		0x29,0x40,0x48,0x80,0x8E,0x40,0x18,0x30,

		/*组   CD7E9 */
		0x20,0x00,0x27,0xE0,0x44,0x20,0x94,0x20,
		0xE7,0xE0,0x24,0x20,0x44,0x20,0xF7,0xE0,
		0x04,0x20,0xF4,0x20,0x04,0x20,0x1F,0xF0


};

