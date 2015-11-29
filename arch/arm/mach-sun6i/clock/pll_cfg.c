/*
 *  arch/arm/mach-sun6i/clock/ccmu/pll_cfg_tbl.c
 *
 * Copyright 2012 (c) Allwinner.
 * kevin.z.m (kevin@allwinnertech.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include "ccm_i.h"

struct pll_freq_cfg_tbl{
    __u8    FactorN;
    __u8    FactorK;
    __u8    FactorM;
    __u8    FactorP;
    __u32   Pll;
};

/* core pll parameter table */
static struct pll_freq_cfg_tbl    Pll1Tbl[] = {

    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 0  ), index = 0  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 1  ), index = 1  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 2  ), index = 2  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 3  ), index = 3  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 4  ), index = 4  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 5  ), index = 5  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 6  ), index = 6  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 7  ), index = 7  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 8  ), index = 8  */
    {8 , 0, 3, 0, 54000000  }, /* freq = (6M * 9  ), index = 9  */
    {9 , 0, 3, 0, 60000000  }, /* freq = (6M * 10 ), index = 10 */
    {10, 0, 3, 0, 66000000  }, /* freq = (6M * 11 ), index = 11 */
    {8 , 0, 2, 0, 72000000  }, /* freq = (6M * 12 ), index = 12 */
    {12, 0, 3, 0, 78000000  }, /* freq = (6M * 13 ), index = 13 */
    {13, 0, 3, 0, 84000000  }, /* freq = (6M * 14 ), index = 14 */
    {14, 0, 3, 0, 90000000  }, /* freq = (6M * 15 ), index = 15 */
    {11, 0, 2, 0, 96000000  }, /* freq = (6M * 16 ), index = 16 */
    {16, 0, 3, 0, 102000000 }, /* freq = (6M * 17 ), index = 17 */
    {8 , 0, 1, 0, 108000000 }, /* freq = (6M * 18 ), index = 18 */
    {18, 0, 3, 0, 114000000 }, /* freq = (6M * 19 ), index = 19 */
    {9 , 0, 1, 0, 120000000 }, /* freq = (6M * 20 ), index = 20 */
    {20, 0, 3, 0, 126000000 }, /* freq = (6M * 21 ), index = 21 */
    {10, 0, 1, 0, 132000000 }, /* freq = (6M * 22 ), index = 22 */
    {22, 0, 3, 0, 138000000 }, /* freq = (6M * 23 ), index = 23 */
    {11, 0, 1, 0, 144000000 }, /* freq = (6M * 24 ), index = 24 */
    {24, 0, 3, 0, 150000000 }, /* freq = (6M * 25 ), index = 25 */
    {12, 0, 1, 0, 156000000 }, /* freq = (6M * 26 ), index = 26 */
    {26, 0, 3, 0, 162000000 }, /* freq = (6M * 27 ), index = 27 */
    {13, 0, 1, 0, 168000000 }, /* freq = (6M * 28 ), index = 28 */
    {28, 0, 3, 0, 174000000 }, /* freq = (6M * 29 ), index = 29 */
    {14, 0, 1, 0, 180000000 }, /* freq = (6M * 30 ), index = 30 */
    {30, 0, 3, 0, 186000000 }, /* freq = (6M * 31 ), index = 31 */
    {15, 0, 1, 0, 192000000 }, /* freq = (6M * 32 ), index = 32 */
    {10, 2, 3, 0, 198000000 }, /* freq = (6M * 33 ), index = 33 */
    {16, 0, 1, 0, 204000000 }, /* freq = (6M * 34 ), index = 34 */
    {25, 0, 2, 0, 208000000 }, /* freq = (6M * 35 ), index = 35 */
    {8 , 0, 0, 0, 216000000 }, /* freq = (6M * 36 ), index = 36 */
    {27, 0, 2, 0, 224000000 }, /* freq = (6M * 37 ), index = 37 */
    {18, 0, 1, 0, 228000000 }, /* freq = (6M * 38 ), index = 38 */
    {12, 2, 3, 0, 234000000 }, /* freq = (6M * 39 ), index = 39 */
    {9 , 0, 0, 0, 240000000 }, /* freq = (6M * 40 ), index = 40 */
    {30, 0, 2, 0, 248000000 }, /* freq = (6M * 41 ), index = 41 */
    {20, 0, 1, 0, 252000000 }, /* freq = (6M * 42 ), index = 42 */
    {31, 0, 2, 0, 256000000 }, /* freq = (6M * 43 ), index = 43 */
    {10, 0, 0, 0, 264000000 }, /* freq = (6M * 44 ), index = 44 */
    {14, 2, 3, 0, 270000000 }, /* freq = (6M * 45 ), index = 45 */
    {22, 0, 1, 0, 276000000 }, /* freq = (6M * 46 ), index = 46 */
    {22, 1, 3, 0, 276000000 }, /* freq = (6M * 47 ), index = 47 */
    {11, 0, 0, 0, 288000000 }, /* freq = (6M * 48 ), index = 48 */
    {5 , 1, 0, 0, 288000000 }, /* freq = (6M * 49 ), index = 49 */
    {24, 0, 1, 0, 300000000 }, /* freq = (6M * 50 ), index = 50 */
    {16, 2, 3, 0, 306000000 }, /* freq = (6M * 51 ), index = 51 */
    {12, 0, 0, 0, 312000000 }, /* freq = (6M * 52 ), index = 52 */
    {19, 1, 2, 0, 320000000 }, /* freq = (6M * 53 ), index = 53 */
    {26, 0, 1, 0, 324000000 }, /* freq = (6M * 54 ), index = 54 */
    {8 , 2, 1, 0, 324000000 }, /* freq = (6M * 55 ), index = 55 */
    {13, 0, 0, 0, 336000000 }, /* freq = (6M * 56 ), index = 56 */
    {18, 2, 3, 0, 342000000 }, /* freq = (6M * 57 ), index = 57 */
    {28, 0, 1, 0, 348000000 }, /* freq = (6M * 58 ), index = 58 */
    {21, 1, 2, 0, 352000000 }, /* freq = (6M * 59 ), index = 59 */
    {14, 0, 0, 0, 360000000 }, /* freq = (6M * 60 ), index = 60 */
    {22, 1, 2, 0, 368000000 }, /* freq = (6M * 61 ), index = 61 */
    {30, 0, 1, 0, 372000000 }, /* freq = (6M * 62 ), index = 62 */
    {20, 2, 3, 0, 378000000 }, /* freq = (6M * 63 ), index = 63 */
    {15, 0, 0, 0, 384000000 }, /* freq = (6M * 64 ), index = 64 */
    {7 , 1, 0, 0, 384000000 }, /* freq = (6M * 65 ), index = 65 */
    {10, 2, 1, 0, 396000000 }, /* freq = (6M * 66 ), index = 66 */
    {24, 1, 2, 0, 400000000 }, /* freq = (6M * 67 ), index = 67 */
    {16, 0, 0, 0, 408000000 }, /* freq = (6M * 68 ), index = 68 */
    {22, 2, 3, 0, 414000000 }, /* freq = (6M * 69 ), index = 69 */
    {25, 1, 2, 0, 416000000 }, /* freq = (6M * 70 ), index = 70 */
    {12, 3, 2, 0, 416000000 }, /* freq = (6M * 71 ), index = 71 */
    {17, 0, 0, 0, 432000000 }, /* freq = (6M * 72 ), index = 72 */
    {8 , 1, 0, 0, 432000000 }, /* freq = (6M * 73 ), index = 73 */
    {27, 1, 2, 0, 448000000 }, /* freq = (6M * 74 ), index = 74 */
    {24, 2, 3, 0, 450000000 }, /* freq = (6M * 75 ), index = 75 */
    {18, 0, 0, 0, 456000000 }, /* freq = (6M * 76 ), index = 76 */
    {28, 1, 2, 0, 464000000 }, /* freq = (6M * 77 ), index = 77 */
    {12, 2, 1, 0, 468000000 }, /* freq = (6M * 78 ), index = 78 */
    {25, 2, 3, 0, 468000000 }, /* freq = (6M * 79 ), index = 79 */
    {19, 0, 0, 0, 480000000 }, /* freq = (6M * 80 ), index = 80 */
    {19, 2, 2, 0, 480000000 }, /* freq = (6M * 81 ), index = 81 */
    {14, 3, 2, 0, 480000000 }, /* freq = (6M * 82 ), index = 82 */
    {30, 1, 2, 0, 496000000 }, /* freq = (6M * 83 ), index = 83 */
    {20, 0, 0, 0, 504000000 }, /* freq = (6M * 84 ), index = 84 */
    {31, 1, 2, 0, 512000000 }, /* freq = (6M * 85 ), index = 85 */
    {15, 3, 2, 0, 512000000 }, /* freq = (6M * 86 ), index = 86 */
    {15, 3, 2, 0, 512000000 }, /* freq = (6M * 87 ), index = 87 */
    {21, 0, 0, 0, 528000000 }, /* freq = (6M * 88 ), index = 88 */
    {10, 1, 0, 0, 528000000 }, /* freq = (6M * 89 ), index = 89 */
    {14, 2, 1, 0, 540000000 }, /* freq = (6M * 90 ), index = 90 */
    {16, 3, 2, 0, 544000000 }, /* freq = (6M * 91 ), index = 91 */
    {22, 0, 0, 0, 552000000 }, /* freq = (6M * 92 ), index = 92 */
    {22, 1, 1, 0, 552000000 }, /* freq = (6M * 93 ), index = 93 */
    {23, 0, 0, 0, 576000000 }, /* freq = (6M * 94 ), index = 94 */
    {11, 1, 0, 0, 576000000 }, /* freq = (6M * 95 ), index = 95 */
    {7 , 2, 0, 0, 576000000 }, /* freq = (6M * 96 ), index = 96 */
    {5 , 3, 0, 0, 576000000 }, /* freq = (6M * 97 ), index = 97 */
    {23, 1, 1, 0, 576000000 }, /* freq = (6M * 98 ), index = 98 */
    {15, 2, 1, 0, 576000000 }, /* freq = (6M * 99 ), index = 99 */
    {24, 0, 0, 0, 600000000 }, /* freq = (6M * 100), index = 100*/
    {18, 3, 2, 0, 608000000 }, /* freq = (6M * 101), index = 101*/
    {16, 2, 1, 0, 612000000 }, /* freq = (6M * 102), index = 102*/
    {25, 0, 0, 0, 624000000 }, /* freq = (6M * 103), index = 103*/
    {12, 1, 0, 0, 624000000 }, /* freq = (6M * 104), index = 104*/
    {25, 1, 1, 0, 624000000 }, /* freq = (6M * 105), index = 105*/
    {12, 3, 1, 0, 624000000 }, /* freq = (6M * 106), index = 106*/
    {12, 1, 1, 0, 624000000 }, /* freq = (6M * 107), index = 107*/
    {26, 0, 0, 0, 648000000 }, /* freq = (6M * 108), index = 108*/
    {8 , 2, 0, 0, 648000000 }, /* freq = (6M * 109), index = 109*/
    {26, 1, 1, 0, 648000000 }, /* freq = (6M * 110), index = 110*/
    {17, 2, 1, 0, 648000000 }, /* freq = (6M * 111), index = 111*/
    {27, 0, 0, 0, 672000000 }, /* freq = (6M * 112), index = 112*/
    {13, 1, 0, 0, 672000000 }, /* freq = (6M * 113), index = 113*/
    {18, 2, 1, 0, 684000000 }, /* freq = (6M * 114), index = 114*/
    {28, 0, 0, 0, 696000000 }, /* freq = (6M * 115), index = 115*/
    {28, 1, 1, 0, 696000000 }, /* freq = (6M * 116), index = 116*/
    {28, 1, 1, 0, 696000000 }, /* freq = (6M * 117), index = 117*/
    {28, 1, 1, 0, 696000000 }, /* freq = (6M * 118), index = 118*/
    {29, 0, 0, 0, 720000000 }, /* freq = (6M * 119), index = 119*/
    {14, 1, 0, 0, 720000000 }, /* freq = (6M * 120), index = 120*/
    {9 , 2, 0, 0, 720000000 }, /* freq = (6M * 121), index = 121*/
    {29, 1, 1, 0, 720000000 }, /* freq = (6M * 122), index = 122*/
    {19, 2, 1, 0, 720000000 }, /* freq = (6M * 123), index = 123*/
    {30, 0, 0, 0, 744000000 }, /* freq = (6M * 124), index = 124*/
    {30, 1, 1, 0, 744000000 }, /* freq = (6M * 125), index = 125*/
    {20, 2, 1, 0, 756000000 }, /* freq = (6M * 126), index = 126*/
    {31, 0, 0, 0, 768000000 }, /* freq = (6M * 127), index = 127*/
    {15, 1, 0, 0, 768000000 }, /* freq = (6M * 128), index = 128*/
    {7 , 3, 0, 0, 768000000 }, /* freq = (6M * 129), index = 129*/
    {31, 1, 1, 0, 768000000 }, /* freq = (6M * 130), index = 130*/
    {15, 3, 1, 0, 768000000 }, /* freq = (6M * 131), index = 131*/
    {10, 2, 0, 0, 792000000 }, /* freq = (6M * 132), index = 132*/
    {21, 2, 1, 0, 792000000 }, /* freq = (6M * 133), index = 133*/
    {21, 2, 1, 0, 792000000 }, /* freq = (6M * 134), index = 134*/
    {16, 1, 0, 0, 816000000 }, /* freq = (6M * 135), index = 135*/
    {16, 3, 1, 0, 816000000 }, /* freq = (6M * 136), index = 136*/
    {16, 3, 1, 0, 816000000 }, /* freq = (6M * 137), index = 137*/
    {22, 2, 1, 0, 828000000 }, /* freq = (6M * 138), index = 138*/
    {22, 2, 1, 0, 828000000 }, /* freq = (6M * 139), index = 139*/
    {17, 1, 0, 0, 864000000 }, /* freq = (6M * 140), index = 140*/
    {11, 2, 0, 0, 864000000 }, /* freq = (6M * 141), index = 141*/
    {8 , 3, 0, 0, 864000000 }, /* freq = (6M * 142), index = 142*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 143), index = 143*/
    {17, 3, 1, 0, 864000000 }, /* freq = (6M * 144), index = 144*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 145), index = 145*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 146), index = 146*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 147), index = 147*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 148), index = 148*/
    {23, 2, 1, 0, 864000000 }, /* freq = (6M * 149), index = 149*/
    {24, 2, 1, 0, 900000000 }, /* freq = (6M * 150), index = 150*/
    {24, 2, 1, 0, 900000000 }, /* freq = (6M * 151), index = 151*/
    {18, 1, 0, 0, 912000000 }, /* freq = (6M * 152), index = 152*/
    {18, 3, 1, 0, 912000000 }, /* freq = (6M * 153), index = 153*/
    {18, 3, 1, 0, 912000000 }, /* freq = (6M * 154), index = 154*/
    {18, 3, 1, 0, 912000000 }, /* freq = (6M * 155), index = 155*/
    {12, 2, 1, 0, 936000000 }, /* freq = (6M * 156), index = 156*/
    {25, 2, 1, 0, 936000000 }, /* freq = (6M * 157), index = 157*/
    {25, 2, 1, 0, 936000000 }, /* freq = (6M * 158), index = 158*/
    {25, 2, 1, 0, 936000000 }, /* freq = (6M * 159), index = 159*/
    {19, 1, 0, 0, 960000000 }, /* freq = (6M * 160), index = 160*/
    {9 , 3, 0, 0, 960000000 }, /* freq = (6M * 161), index = 161*/
    {9 , 3, 0, 0, 960000000 }, /* freq = (6M * 162), index = 162*/
    {19, 1, 0, 0, 960000000 }, /* freq = (6M * 163), index = 163*/
    {9 , 3, 0, 0, 960000000 }, /* freq = (6M * 164), index = 164*/
    {9 , 3, 0, 0, 960000000 }, /* freq = (6M * 165), index = 165*/
    {19, 1, 0, 0, 960000000 }, /* freq = (6M * 166), index = 166*/
    {9 , 3, 0, 0, 960000000 }, /* freq = (6M * 167), index = 167*/
    {20, 1, 0, 0, 1008000000}, /* freq = (6M * 168), index = 168*/
    {13, 2, 0, 0, 1008000000}, /* freq = (6M * 169), index = 169*/
    {20, 1, 0, 0, 1008000000}, /* freq = (6M * 170), index = 170*/
    {13, 2, 0, 0, 1008000000}, /* freq = (6M * 171), index = 171*/
    {20, 1, 0, 0, 1008000000}, /* freq = (6M * 172), index = 172*/
    {13, 2, 0, 0, 1008000000}, /* freq = (6M * 173), index = 173*/
    {13, 2, 0, 0, 1008000000}, /* freq = (6M * 174), index = 174*/
    {21, 1, 0, 0, 1056000000}, /* freq = (6M * 175), index = 175*/
    {10, 3, 0, 0, 1056000000}, /* freq = (6M * 176), index = 176*/
    {21, 1, 0, 0, 1056000000}, /* freq = (6M * 177), index = 177*/
    {10, 3, 0, 0, 1056000000}, /* freq = (6M * 178), index = 178*/
    {21, 1, 0, 0, 1056000000}, /* freq = (6M * 179), index = 179*/
    {14, 2, 0, 0, 1080000000}, /* freq = (6M * 180), index = 180*/
    {14, 2, 0, 0, 1080000000}, /* freq = (6M * 181), index = 181*/
    {14, 2, 0, 0, 1080000000}, /* freq = (6M * 182), index = 182*/
    {14, 2, 0, 0, 1080000000}, /* freq = (6M * 183), index = 183*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 184), index = 184*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 185), index = 185*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 186), index = 186*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 187), index = 187*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 188), index = 188*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 189), index = 189*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 190), index = 190*/
    {22, 1, 0, 0, 1104000000}, /* freq = (6M * 191), index = 191*/
    {23, 1, 0, 0, 1152000000}, /* freq = (6M * 192), index = 192*/
    {15, 2, 0, 0, 1152000000}, /* freq = (6M * 193), index = 193*/
    {11, 3, 0, 0, 1152000000}, /* freq = (6M * 194), index = 194*/
    {23, 1, 0, 0, 1152000000}, /* freq = (6M * 195), index = 195*/
    {15, 2, 0, 0, 1152000000}, /* freq = (6M * 196), index = 196*/
    {11, 3, 0, 0, 1152000000}, /* freq = (6M * 197), index = 197*/
    {23, 1, 0, 0, 1152000000}, /* freq = (6M * 198), index = 198*/
    {15, 2, 0, 0, 1152000000}, /* freq = (6M * 199), index = 199*/
    {24, 1, 0, 0, 1200000000}, /* freq = (6M * 200), index = 200*/
    {24, 1, 0, 0, 1200000000}, /* freq = (6M * 201), index = 201*/
    {24, 1, 0, 0, 1200000000}, /* freq = (6M * 202), index = 202*/
    {24, 1, 0, 0, 1200000000}, /* freq = (6M * 203), index = 203*/
    {16, 2, 0, 0, 1224000000}, /* freq = (6M * 204), index = 204*/
    {16, 2, 0, 0, 1224000000}, /* freq = (6M * 205), index = 205*/
    {16, 2, 0, 0, 1224000000}, /* freq = (6M * 206), index = 206*/
    {16, 2, 0, 0, 1224000000}, /* freq = (6M * 207), index = 207*/
    {25, 1, 0, 0, 1248000000}, /* freq = (6M * 208), index = 208*/
    {12, 3, 0, 0, 1248000000}, /* freq = (6M * 209), index = 209*/
    {25, 1, 0, 0, 1248000000}, /* freq = (6M * 210), index = 210*/
    {12, 3, 0, 0, 1248000000}, /* freq = (6M * 211), index = 211*/
    {25, 1, 0, 0, 1248000000}, /* freq = (6M * 212), index = 212*/
    {12, 3, 0, 0, 1248000000}, /* freq = (6M * 213), index = 213*/
    {25, 1, 0, 0, 1248000000}, /* freq = (6M * 214), index = 214*/
    {12, 3, 0, 0, 1248000000}, /* freq = (6M * 215), index = 215*/
    {26, 1, 0, 0, 1296000000}, /* freq = (6M * 216), index = 216*/
    {17, 2, 0, 0, 1296000000}, /* freq = (6M * 217), index = 217*/
    {26, 1, 0, 0, 1296000000}, /* freq = (6M * 218), index = 218*/
    {17, 2, 0, 0, 1296000000}, /* freq = (6M * 219), index = 219*/
    {26, 1, 0, 0, 1296000000}, /* freq = (6M * 220), index = 220*/
    {17, 2, 0, 0, 1296000000}, /* freq = (6M * 221), index = 221*/
    {26, 1, 0, 0, 1296000000}, /* freq = (6M * 222), index = 222*/
    {17, 2, 0, 0, 1296000000}, /* freq = (6M * 223), index = 223*/
    {27, 1, 0, 0, 1344000000}, /* freq = (6M * 224), index = 224*/
    {13, 3, 0, 0, 1344000000}, /* freq = (6M * 225), index = 225*/
    {13, 3, 0, 0, 1344000000}, /* freq = (6M * 226), index = 226*/
    {13, 3, 0, 0, 1344000000}, /* freq = (6M * 227), index = 227*/
    {18, 2, 0, 0, 1368000000}, /* freq = (6M * 228), index = 228*/
    {18, 2, 0, 0, 1368000000}, /* freq = (6M * 229), index = 229*/
    {18, 2, 0, 0, 1368000000}, /* freq = (6M * 230), index = 230*/
    {18, 2, 0, 0, 1368000000}, /* freq = (6M * 231), index = 231*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 232), index = 232*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 233), index = 233*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 234), index = 234*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 235), index = 235*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 236), index = 236*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 237), index = 237*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 238), index = 238*/
    {28, 1, 0, 0, 1392000000}, /* freq = (6M * 239), index = 239*/
    {29, 1, 0, 0, 1440000000}, /* freq = (6M * 240), index = 240*/
};
int ccm_get_pll1_para(__ccmu_pll1_reg0000_t *factor, __u64 rate)
{
    if(!factor)
    {
        return -1;
    }

    rate = rate>1440000000? 1440000000:rate;
    do_div(rate, 6000000);

    factor->FactorN = Pll1Tbl[rate].FactorN;
    factor->FactorK = Pll1Tbl[rate].FactorK;
    factor->FactorM = Pll1Tbl[rate].FactorM;

    /* software config not valid, controlled by hw */
    return 0;
}


/* normal pll(3/4/7/8/9/10) parameter table, frequency = 24*N/M */
static struct pll_freq_cfg_tbl    PllxTbl[] = {
    {0 , 0, 3, 0, 6000000  }, /* freq = (3M * 0  ), index = 0  */
    {0 , 0, 3, 0, 6000000  }, /* freq = (3M * 1  ), index = 1  */
    {0 , 0, 3, 0, 6000000  }, /* freq = (3M * 2  ), index = 2  */
    {0 , 0, 2, 0, 8000000  }, /* freq = (3M * 3  ), index = 3  */
    {1 , 0, 3, 0, 12000000 }, /* freq = (3M * 4  ), index = 4  */
    {1 , 0, 2, 0, 16000000 }, /* freq = (3M * 5  ), index = 5  */
    {2 , 0, 3, 0, 18000000 }, /* freq = (3M * 6  ), index = 6  */
    {2 , 0, 3, 0, 18000000 }, /* freq = (3M * 7  ), index = 7  */
    {0 , 0, 0, 0, 24000000 }, /* freq = (3M * 8  ), index = 8  */
    {2 , 0, 2, 0, 24000000 }, /* freq = (3M * 9  ), index = 9  */
    {4 , 0, 3, 0, 30000000 }, /* freq = (3M * 10 ), index = 10 */
    {3 , 0, 2, 0, 32000000 }, /* freq = (3M * 11 ), index = 11 */
    {5 , 0, 3, 0, 36000000 }, /* freq = (3M * 12 ), index = 12 */
    {4 , 0, 2, 0, 40000000 }, /* freq = (3M * 13 ), index = 13 */
    {6 , 0, 3, 0, 42000000 }, /* freq = (3M * 14 ), index = 14 */
    {6 , 0, 3, 0, 42000000 }, /* freq = (3M * 15 ), index = 15 */
    {1 , 0, 0, 0, 48000000 }, /* freq = (3M * 16 ), index = 16 */
    {1 , 0, 0, 0, 48000000 }, /* freq = (3M * 17 ), index = 17 */
    {8 , 0, 3, 0, 54000000 }, /* freq = (3M * 18 ), index = 18 */
    {6 , 0, 2, 0, 56000000 }, /* freq = (3M * 19 ), index = 19 */
    {4 , 0, 1, 0, 60000000 }, /* freq = (3M * 20 ), index = 20 */
    {8 , 0, 2, 0, 64000000 }, /* freq = (3M * 21 ), index = 21 */
    {10, 0, 3, 0, 66000000 }, /* freq = (3M * 22 ), index = 22 */
    {10, 0, 3, 0, 66000000 }, /* freq = (3M * 23 ), index = 23 */
    {2 , 0, 0, 0, 72000000 }, /* freq = (3M * 24 ), index = 24 */
    {2 , 0, 0, 0, 72000000 }, /* freq = (3M * 25 ), index = 25 */
    {12, 0, 3, 0, 78000000 }, /* freq = (3M * 26 ), index = 26 */
    {12, 0, 3, 0, 78000000 }, /* freq = (3M * 27 ), index = 27 */
    {6 , 0, 1, 0, 84000000 }, /* freq = (3M * 28 ), index = 28 */
    {14, 0, 3, 0, 90000000 }, /* freq = (3M * 29 ), index = 29 */
    {14, 0, 3, 0, 90000000 }, /* freq = (3M * 30 ), index = 30 */
    {14, 0, 3, 0, 90000000 }, /* freq = (3M * 31 ), index = 31 */
    {3 , 0, 0, 0, 96000000 }, /* freq = (3M * 32 ), index = 32 */
    {3 , 0, 0, 0, 96000000 }, /* freq = (3M * 33 ), index = 33 */
    {16, 0, 3, 0, 102000000}, /* freq = (3M * 34 ), index = 34 */
    {16, 0, 3, 0, 102000000}, /* freq = (3M * 35 ), index = 35 */
    {8 , 0, 1, 0, 108000000}, /* freq = (3M * 36 ), index = 36 */
    {8 , 0, 1, 0, 108000000}, /* freq = (3M * 37 ), index = 37 */
    {18, 0, 3, 0, 114000000}, /* freq = (3M * 38 ), index = 38 */
    {4 , 0, 0, 0, 120000000}, /* freq = (3M * 39 ), index = 39 */
    {4 , 0, 0, 0, 120000000}, /* freq = (3M * 40 ), index = 40 */
    {4 , 0, 0, 0, 120000000}, /* freq = (3M * 41 ), index = 41 */
    {20, 0, 3, 0, 126000000}, /* freq = (3M * 42 ), index = 42 */
    {20, 0, 3, 0, 126000000}, /* freq = (3M * 43 ), index = 43 */
    {10, 0, 1, 0, 132000000}, /* freq = (3M * 44 ), index = 44 */
    {10, 0, 1, 0, 132000000}, /* freq = (3M * 45 ), index = 45 */
    {22, 0, 3, 0, 138000000}, /* freq = (3M * 46 ), index = 46 */
    {22, 0, 3, 0, 138000000}, /* freq = (3M * 47 ), index = 47 */
    {5 , 0, 0, 0, 144000000}, /* freq = (3M * 48 ), index = 48 */
    {5 , 0, 0, 0, 144000000}, /* freq = (3M * 49 ), index = 49 */
    {24, 0, 3, 0, 150000000}, /* freq = (3M * 50 ), index = 50 */
    {24, 0, 3, 0, 150000000}, /* freq = (3M * 51 ), index = 51 */
    {12, 0, 1, 0, 156000000}, /* freq = (3M * 52 ), index = 52 */
    {12, 0, 1, 0, 156000000}, /* freq = (3M * 53 ), index = 53 */
    {12, 0, 1, 0, 156000000}, /* freq = (3M * 54 ), index = 54 */
    {6 , 0, 0, 0, 168000000}, /* freq = (3M * 55 ), index = 55 */
    {6 , 0, 0, 0, 168000000}, /* freq = (3M * 56 ), index = 56 */
    {6 , 0, 0, 0, 168000000}, /* freq = (3M * 57 ), index = 57 */
    {6 , 0, 0, 0, 168000000}, /* freq = (3M * 58 ), index = 58 */
    {14, 0, 1, 0, 180000000}, /* freq = (3M * 59 ), index = 59 */
    {14, 0, 1, 0, 180000000}, /* freq = (3M * 60 ), index = 60 */
    {14, 0, 1, 0, 180000000}, /* freq = (3M * 61 ), index = 61 */
    {14, 0, 1, 0, 180000000}, /* freq = (3M * 62 ), index = 62 */
    {7 , 0, 0, 0, 192000000}, /* freq = (3M * 63 ), index = 63 */
    {7 , 0, 0, 0, 192000000}, /* freq = (3M * 64 ), index = 64 */
    {7 , 0, 0, 0, 192000000}, /* freq = (3M * 65 ), index = 65 */
    {24, 0, 2, 0, 200000000}, /* freq = (3M * 66 ), index = 66 */
    {24, 0, 2, 0, 200000000}, /* freq = (3M * 67 ), index = 67 */
    {16, 0, 1, 0, 204000000}, /* freq = (3M * 68 ), index = 68 */
    {16, 0, 1, 0, 204000000}, /* freq = (3M * 69 ), index = 69 */
    {16, 0, 1, 0, 204000000}, /* freq = (3M * 70 ), index = 70 */
    {8 , 0, 0, 0, 216000000}, /* freq = (3M * 71 ), index = 71 */
    {8 , 0, 0, 0, 216000000}, /* freq = (3M * 72 ), index = 72 */
    {8 , 0, 0, 0, 216000000}, /* freq = (3M * 73 ), index = 73 */
    {8 , 0, 0, 0, 216000000}, /* freq = (3M * 74 ), index = 74 */
    {18, 0, 1, 0, 228000000}, /* freq = (3M * 75 ), index = 75 */
    {18, 0, 1, 0, 228000000}, /* freq = (3M * 76 ), index = 76 */
    {18, 0, 1, 0, 228000000}, /* freq = (3M * 77 ), index = 77 */
    {18, 0, 1, 0, 228000000}, /* freq = (3M * 78 ), index = 78 */
    {9 , 0, 0, 0, 240000000}, /* freq = (3M * 79 ), index = 79 */
    {9 , 0, 0, 0, 240000000}, /* freq = (3M * 80 ), index = 80 */
    {9 , 0, 0, 0, 240000000}, /* freq = (3M * 81 ), index = 81 */
    {9 , 0, 0, 0, 240000000}, /* freq = (3M * 82 ), index = 82 */
    {20, 0, 1, 0, 252000000}, /* freq = (3M * 83 ), index = 83 */
    {20, 0, 1, 0, 252000000}, /* freq = (3M * 84 ), index = 84 */
    {20, 0, 1, 0, 252000000}, /* freq = (3M * 85 ), index = 85 */
    {20, 0, 1, 0, 252000000}, /* freq = (3M * 86 ), index = 86 */
    {10, 0, 0, 0, 264000000}, /* freq = (3M * 87 ), index = 87 */
    {10, 0, 0, 0, 264000000}, /* freq = (3M * 88 ), index = 88 */
    {22, 0, 1, 0, 276000000}, /* freq = (3M * 89 ), index = 89 */
    {10, 0, 0, 0, 270000000}, /* freq = (3M * 90 ), index = 90 */
    {22, 0, 1, 0, 276000000}, /* freq = (3M * 91 ), index = 91 */
    {22, 0, 1, 0, 276000000}, /* freq = (3M * 92 ), index = 92 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 93 ), index = 93 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 94 ), index = 94 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 95 ), index = 95 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 96 ), index = 96 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 97 ), index = 97 */
    {11, 0, 0, 0, 288000000}, /* freq = (3M * 98 ), index = 98 */
    {11, 0, 0, 0, 297000000}, /* freq = (3M * 99 ), index = 99 */
    {24, 0, 1, 0, 300000000}, /* freq = (3M * 100), index = 100*/
    {24, 0, 1, 0, 300000000}, /* freq = (3M * 101), index = 101*/
    {24, 0, 1, 0, 300000000}, /* freq = (3M * 102), index = 102*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 103), index = 103*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 104), index = 104*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 105), index = 105*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 106), index = 106*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 107), index = 107*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 108), index = 108*/
    {12, 0, 0, 0, 312000000}, /* freq = (3M * 109), index = 109*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 110), index = 110*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 111), index = 111*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 112), index = 112*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 113), index = 113*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 114), index = 114*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 115), index = 115*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 116), index = 116*/
    {13, 0, 0, 0, 336000000}, /* freq = (3M * 117), index = 117*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 118), index = 118*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 119), index = 119*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 120), index = 120*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 121), index = 121*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 122), index = 122*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 123), index = 123*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 124), index = 124*/
    {14, 0, 0, 0, 360000000}, /* freq = (3M * 125), index = 125*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 126), index = 126*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 127), index = 127*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 128), index = 128*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 129), index = 129*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 130), index = 130*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 131), index = 131*/
    {15, 0, 0, 0, 384000000}, /* freq = (3M * 132), index = 132*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 133), index = 133*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 134), index = 134*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 135), index = 135*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 136), index = 136*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 137), index = 137*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 138), index = 138*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 139), index = 139*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 140), index = 140*/
    {16, 0, 0, 0, 408000000}, /* freq = (3M * 141), index = 141*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 142), index = 142*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 143), index = 143*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 144), index = 144*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 145), index = 145*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 146), index = 146*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 147), index = 147*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 148), index = 148*/
    {17, 0, 0, 0, 432000000}, /* freq = (3M * 149), index = 149*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 150), index = 150*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 151), index = 151*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 152), index = 152*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 153), index = 153*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 154), index = 154*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 155), index = 155*/
    {18, 0, 0, 0, 456000000}, /* freq = (3M * 156), index = 156*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 157), index = 157*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 158), index = 158*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 159), index = 159*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 160), index = 160*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 161), index = 161*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 162), index = 162*/
    {19, 0, 0, 0, 480000000}, /* freq = (3M * 163), index = 163*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 164), index = 164*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 165), index = 165*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 166), index = 166*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 167), index = 167*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 168), index = 168*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 169), index = 169*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 170), index = 170*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 171), index = 171*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 172), index = 172*/
    {20, 0, 0, 0, 504000000}, /* freq = (3M * 173), index = 173*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 174), index = 174*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 175), index = 175*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 176), index = 176*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 177), index = 177*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 178), index = 178*/
    {21, 0, 0, 0, 528000000}, /* freq = (3M * 179), index = 179*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 180), index = 180*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 181), index = 181*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 182), index = 182*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 183), index = 183*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 184), index = 184*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 185), index = 185*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 186), index = 186*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 187), index = 187*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 188), index = 188*/
    {22, 0, 0, 0, 552000000}, /* freq = (3M * 189), index = 189*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 190), index = 190*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 191), index = 191*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 192), index = 192*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 193), index = 193*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 194), index = 194*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 195), index = 195*/
    {23, 0, 0, 0, 576000000}, /* freq = (3M * 196), index = 196*/
    {24, 0, 0, 0, 600000000}, /* freq = (3M * 197), index = 197*/
    {24, 0, 0, 0, 600000000}, /* freq = (3M * 198), index = 198*/
    {24, 0, 0, 0, 600000000}, /* freq = (3M * 199), index = 199*/
    {99 , 0, 3, 0, 600000000}, /* freq = (3M * 201), index = 200*/
    {99 , 0, 3, 0, 600000000}, /* freq = (3M * 201), index = 201*/
    {100, 0, 3, 0, 606000000}, /* freq = (3M * 202), index = 202*/
    {100, 0, 3, 0, 606000000}, /* freq = (3M * 203), index = 203*/
    {101, 0, 3, 0, 612000000}, /* freq = (3M * 204), index = 204*/
    {101, 0, 3, 0, 612000000}, /* freq = (3M * 205), index = 205*/
    {102, 0, 3, 0, 618000000}, /* freq = (3M * 206), index = 206*/
    {102, 0, 3, 0, 618000000}, /* freq = (3M * 207), index = 207*/
    {103, 0, 3, 0, 624000000}, /* freq = (3M * 208), index = 208*/
    {103, 0, 3, 0, 624000000}, /* freq = (3M * 209), index = 209*/
    {104, 0, 3, 0, 630000000}, /* freq = (3M * 210), index = 210*/
    {104, 0, 3, 0, 630000000}, /* freq = (3M * 211), index = 211*/
    {105, 0, 3, 0, 636000000}, /* freq = (3M * 212), index = 212*/
    {105, 0, 3, 0, 636000000}, /* freq = (3M * 213), index = 213*/
    {106, 0, 3, 0, 642000000}, /* freq = (3M * 214), index = 214*/
    {106, 0, 3, 0, 642000000}, /* freq = (3M * 215), index = 215*/
    {107, 0, 3, 0, 648000000}, /* freq = (3M * 216), index = 216*/
    {107, 0, 3, 0, 648000000}, /* freq = (3M * 217), index = 217*/
    {108, 0, 3, 0, 654000000}, /* freq = (3M * 218), index = 218*/
    {108, 0, 3, 0, 654000000}, /* freq = (3M * 219), index = 219*/
    {109, 0, 3, 0, 660000000}, /* freq = (3M * 220), index = 220*/
    {109, 0, 3, 0, 660000000}, /* freq = (3M * 221), index = 221*/
    {110, 0, 3, 0, 666000000}, /* freq = (3M * 222), index = 222*/
    {110, 0, 3, 0, 666000000}, /* freq = (3M * 223), index = 223*/
    {111, 0, 3, 0, 672000000}, /* freq = (3M * 224), index = 224*/
    {111, 0, 3, 0, 672000000}, /* freq = (3M * 225), index = 225*/
    {112, 0, 3, 0, 678000000}, /* freq = (3M * 226), index = 226*/
    {112, 0, 3, 0, 678000000}, /* freq = (3M * 227), index = 227*/
    {113, 0, 3, 0, 684000000}, /* freq = (3M * 228), index = 228*/
    {113, 0, 3, 0, 684000000}, /* freq = (3M * 229), index = 229*/
    {114, 0, 3, 0, 690000000}, /* freq = (3M * 230), index = 230*/
    {114, 0, 3, 0, 690000000}, /* freq = (3M * 231), index = 231*/
    {115, 0, 3, 0, 696000000}, /* freq = (3M * 232), index = 232*/
    {115, 0, 3, 0, 696000000}, /* freq = (3M * 233), index = 233*/
    {116, 0, 3, 0, 702000000}, /* freq = (3M * 224), index = 234*/
    {116, 0, 3, 0, 702000000}, /* freq = (3M * 225), index = 235*/
    {117, 0, 3, 0, 708000000}, /* freq = (3M * 226), index = 236*/
    {117, 0, 3, 0, 708000000}, /* freq = (3M * 227), index = 237*/
    {118, 0, 3, 0, 714000000}, /* freq = (3M * 226), index = 238*/
    {118, 0, 3, 0, 714000000}, /* freq = (3M * 227), index = 239*/
    {119, 0, 3, 0, 720000000}, /* freq = (3M * 226), index = 240*/
};

int ccm_get_pllx_para(__ccmu_media_pll_t *factor, __u64 rate)
{
    if(!factor) {
        /* parameter is invalid */
        return -1;
    }

    if(rate > 720000000) {
        rate = 720000000;
    }

    /* find the clock configuration */
    do_div(rate, 3000000);
    factor->FactorN = PllxTbl[rate].FactorN;
    factor->FactorM = PllxTbl[rate].FactorM;
    return 0;
}



