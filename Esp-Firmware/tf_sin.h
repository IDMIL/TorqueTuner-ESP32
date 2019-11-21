const int tf_sin[] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 3, 3, 3, 3, 3, 3, 3, 3, 4,
 4, 4, 4, 4, 4, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 7, 7, 7, 8, 8, 8,
 8, 9, 9, 9, 10, 10, 11, 11, 11, 12,
 12, 13, 13, 14, 14, 15, 15, 16, 17, 17,
 18, 18, 19, 20, 20, 21, 22, 23, 24, 24,
 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
 35, 36, 38, 39, 40, 41, 43, 44, 46, 47,
 49, 50, 52, 53, 55, 57, 58, 60, 62, 64,
 66, 68, 70, 72, 74, 77, 79, 81, 84, 86,
 89, 91, 94, 97, 99, 102, 105, 108, 111, 114,
 118, 121, 124, 128, 131, 135, 139, 143, 147, 151,
 155, 159, 163, 167, 172, 177, 181, 186, 191, 196,
 201, 206, 212, 217, 223, 228, 234, 240, 246, 253,
 259, 265, 272, 279, 286, 293, 300, 307, 315, 323,
 330, 338, 347, 355, 363, 372, 381, 390, 399, 408,
 418, 428, 438, 448, 458, 469, 479, 490, 501, 513,
 524, 536, 548, 560, 573, 585, 598, 612, 625, 639,
 652, 667, 681, 696, 711, 726, 741, 757, 773, 789,
 806, 823, 840, 857, 875, 893, 911, 930, 949, 968,
 988, 1008, 1028, 1048, 1069, 1091, 1112, 1134, 1157, 1179,
 1202, 1226, 1249, 1274, 1298, 1323, 1348, 1374, 1400, 1427,
 1454, 1481, 1509, 1537, 1565, 1594, 1624, 1654, 1684, 1715,
 1746, 1778, 1810, 1842, 1875, 1909, 1943, 1977, 2012, 2048,
 2084, 2120, 2157, 2195, 2233, 2272, 2311, 2350, 2390, 2431,
 2472, 2514, 2557, 2599, 2643, 2687, 2732, 2777, 2823, 2869,
 2916, 2964, 3012, 3061, 3110, 3160, 3211, 3262, 3314, 3367,
 3420, 3474, 3528, 3584, 3639, 3696, 3753, 3811, 3870, 3929,
 3989, 4050, 4111, 4173, 4236, 4299, 4363, 4428, 4494, 4561,
 4628, 4696, 4764, 4834, 4904, 4975, 5046, 5119, 5192, 5266,
 5341, 5417, 5493, 5570, 5648, 5727, 5807, 5887, 5968, 6051,
 6133, 6217, 6302, 6387, 6474, 6561, 6649, 6737, 6827, 6918,
 7009, 7101, 7195, 7289, 7383, 7479, 7576, 7674, 7772, 7871,
 7972, 8073, 8175, 8278, 8382, 8487, 8592, 8699, 8806, 8915,
 9024, 9135, 9246, 9358, 9471, 9585, 9700, 9816, 9933, 10051,
 10170, 10290, 10410, 10532, 10655, 10778, 10903, 11028, 11155, 11282,
 11410, 11540, 11670, 11801, 11933, 12067, 12201, 12336, 12472, 12609,
 12747, 12886, 13026, 13167, 13309, 13451, 13595, 13740, 13886, 14032,
 14180, 14329, 14478, 14629, 14780, 14933, 15086, 15240, 15396, 15552,
 15709, 15867, 16026, 16186, 16347, 16509, 16672, 16836, 17000, 17166,
 17332, 17500, 17668, 17838, 18008, 18179, 18351, 18524, 18698, 18872,
 19048, 19224, 19402, 19580, 19759, 19939, 20120, 20301, 20484, 20667,
 20851, 21036, 21222, 21409, 21597, 21785, 21974, 22164, 22355, 22546,
 22739, 22932, 23126, 23320, 23516, 23712, 23909, 24106, 24305, 24504,
 24703, 24904, 25105, 25307, 25510, 25713, 25917, 26121, 26326, 26532,
 26739, 26946, 27154, 27362, 27571, 27780, 27991, 28201, 28412, 28624,
 28837, 29049, 29263, 29477, 29691, 29906, 30121, 30337, 30554, 30770,
 30988, 31205, 31423, 31642, 31860, 32080, 32299, 32519, 32740, 32960,
 33181, 33403, 33624, 33846, 34068, 34291, 34513, 34736, 34959, 35183,
 35406, 35630, 35854, 36078, 36303, 36527, 36752, 36976, 37201, 37426,
 37651, 37876, 38101, 38326, 38551, 38776, 39002, 39227, 39452, 39677,
 39902, 40127, 40351, 40576, 40801, 41025, 41250, 41474, 41698, 41921,
 42145, 42368, 42592, 42814, 43037, 43259, 43482, 43703, 43925, 44146,
 44367, 44587, 44807, 45027, 45246, 45465, 45683, 45901, 46118, 46335,
 46552, 46768, 46983, 47198, 47412, 47626, 47839, 48051, 48263, 48475,
 48685, 48895, 49104, 49313, 49521, 49728, 49934, 50140, 50345, 50549,
 50752, 50955, 51156, 51357, 51557, 51756, 51954, 52152, 52348, 52543,
 52738, 52931, 53124, 53315, 53506, 53695, 53884, 54071, 54257, 54443,
 54627, 54810, 54992, 55173, 55352, 55531, 55708, 55884, 56059, 56233,
 56405, 56576, 56746, 56915, 57082, 57248, 57413, 57576, 57738, 57899,
 58059, 58217, 58373, 58528, 58682, 58834, 58985, 59135, 59283, 59429,
 59574, 59718, 59860, 60000, 60139, 60277, 60413, 60547, 60680, 60811,
 60940, 61068, 61194, 61319, 61442, 61563, 61683, 61801, 61918, 62032,
 62145, 62256, 62366, 62474, 62580, 62684, 62786, 62887, 62986, 63083,
 63179, 63273, 63364, 63454, 63543, 63629, 63713, 63796, 63877, 63956,
 64033, 64108, 64182, 64253, 64323, 64391, 64456, 64520, 64582, 64642,
 64701, 64757, 64811, 64863, 64914, 64962, 65009, 65054, 65096, 65137,
 65176, 65212, 65247, 65280, 65311, 65340, 65367, 65391, 65414, 65435,
 65454, 65471, 65486, 65499, 65510, 65519, 65526, 65531, 65534, 65535,
 65534, 65531, 65526, 65519, 65510, 65499, 65486, 65471, 65454, 65435,
 65414, 65391, 65367, 65340, 65311, 65280, 65247, 65212, 65176, 65137,
 65096, 65054, 65009, 64962, 64914, 64863, 64811, 64757, 64701, 64642,
 64582, 64520, 64456, 64391, 64323, 64253, 64182, 64108, 64033, 63956,
 63877, 63796, 63713, 63629, 63543, 63454, 63364, 63273, 63179, 63083,
 62986, 62887, 62786, 62684, 62580, 62474, 62366, 62256, 62145, 62032,
 61918, 61801, 61683, 61563, 61442, 61319, 61194, 61068, 60940, 60811,
 60680, 60547, 60413, 60277, 60139, 60000, 59860, 59718, 59574, 59429,
 59283, 59135, 58985, 58834, 58682, 58528, 58373, 58217, 58059, 57899,
 57738, 57576, 57413, 57248, 57082, 56915, 56746, 56576, 56405, 56233,
 56059, 55884, 55708, 55531, 55352, 55173, 54992, 54810, 54627, 54443,
 54257, 54071, 53884, 53695, 53506, 53315, 53124, 52931, 52738, 52543,
 52348, 52152, 51954, 51756, 51557, 51357, 51156, 50955, 50752, 50549,
 50345, 50140, 49934, 49728, 49521, 49313, 49104, 48895, 48685, 48475,
 48263, 48051, 47839, 47626, 47412, 47198, 46983, 46768, 46552, 46335,
 46118, 45901, 45683, 45465, 45246, 45027, 44807, 44587, 44367, 44146,
 43925, 43703, 43482, 43259, 43037, 42814, 42592, 42368, 42145, 41921,
 41698, 41474, 41250, 41025, 40801, 40576, 40351, 40127, 39902, 39677,
 39452, 39227, 39002, 38776, 38551, 38326, 38101, 37876, 37651, 37426,
 37201, 36976, 36752, 36527, 36303, 36078, 35854, 35630, 35406, 35183,
 34959, 34736, 34513, 34291, 34068, 33846, 33624, 33403, 33181, 32960,
 32740, 32519, 32299, 32080, 31860, 31642, 31423, 31205, 30988, 30770,
 30554, 30337, 30121, 29906, 29691, 29477, 29263, 29049, 28837, 28624,
 28412, 28201, 27991, 27780, 27571, 27362, 27154, 26946, 26739, 26532,
 26326, 26121, 25917, 25713, 25510, 25307, 25105, 24904, 24703, 24504,
 24305, 24106, 23909, 23712, 23516, 23320, 23126, 22932, 22739, 22546,
 22355, 22164, 21974, 21785, 21597, 21409, 21222, 21036, 20851, 20667,
 20484, 20301, 20120, 19939, 19759, 19580, 19402, 19224, 19048, 18872,
 18698, 18524, 18351, 18179, 18008, 17838, 17668, 17500, 17332, 17166,
 17000, 16836, 16672, 16509, 16347, 16186, 16026, 15867, 15709, 15552,
 15396, 15240, 15086, 14933, 14780, 14629, 14478, 14329, 14180, 14032,
 13886, 13740, 13595, 13451, 13309, 13167, 13026, 12886, 12747, 12609,
 12472, 12336, 12201, 12067, 11933, 11801, 11670, 11540, 11410, 11282,
 11155, 11028, 10903, 10778, 10655, 10532, 10410, 10290, 10170, 10051,
 9933, 9816, 9700, 9585, 9471, 9358, 9246, 9135, 9024, 8915,
 8806, 8699, 8592, 8487, 8382, 8278, 8175, 8073, 7972, 7871,
 7772, 7674, 7576, 7479, 7383, 7289, 7195, 7101, 7009, 6918,
 6827, 6737, 6649, 6561, 6474, 6387, 6302, 6217, 6133, 6051,
 5968, 5887, 5807, 5727, 5648, 5570, 5493, 5417, 5341, 5266,
 5192, 5119, 5046, 4975, 4904, 4834, 4764, 4696, 4628, 4561,
 4494, 4428, 4363, 4299, 4236, 4173, 4111, 4050, 3989, 3929,
 3870, 3811, 3753, 3696, 3639, 3584, 3528, 3474, 3420, 3367,
 3314, 3262, 3211, 3160, 3110, 3061, 3012, 2964, 2916, 2869,
 2823, 2777, 2732, 2687, 2643, 2599, 2557, 2514, 2472, 2431,
 2390, 2350, 2311, 2272, 2233, 2195, 2157, 2120, 2084, 2048,
 2012, 1977, 1943, 1909, 1875, 1842, 1810, 1778, 1746, 1715,
 1684, 1654, 1624, 1594, 1565, 1537, 1509, 1481, 1454, 1427,
 1400, 1374, 1348, 1323, 1298, 1274, 1249, 1226, 1202, 1179,
 1157, 1134, 1112, 1091, 1069, 1048, 1028, 1008, 988, 968,
 949, 930, 911, 893, 875, 857, 840, 823, 806, 789,
 773, 757, 741, 726, 711, 696, 681, 667, 652, 639,
 625, 612, 598, 585, 573, 560, 548, 536, 524, 513,
 501, 490, 479, 469, 458, 448, 438, 428, 418, 408,
 399, 390, 381, 372, 363, 355, 347, 338, 330, 323,
 315, 307, 300, 293, 286, 279, 272, 265, 259, 253,
 246, 240, 234, 228, 223, 217, 212, 206, 201, 196,
 191, 186, 181, 177, 172, 167, 163, 159, 155, 151,
 147, 143, 139, 135, 131, 128, 124, 121, 118, 114,
 111, 108, 105, 102, 99, 97, 94, 91, 89, 86,
 84, 81, 79, 77, 74, 72, 70, 68, 66, 64,
 62, 60, 58, 57, 55, 53, 52, 50, 49, 47,
 46, 44, 43, 41, 40, 39, 38, 36, 35, 34,
 33, 32, 31, 30, 29, 28, 27, 26, 25, 24,
 24, 23, 22, 21, 20, 20, 19, 18, 18, 17,
 17, 16, 15, 15, 14, 14, 13, 13, 12, 12,
 11, 11, 11, 10, 10, 9, 9, 9, 8, 8,
 8, 8, 7, 7, 7, 6, 6, 6, 6, 5,
 5, 5, 5, 5, 4, 4, 4, 4, 4, 4,
 3, 3, 3, 3, 3, 3, 3, 3, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
 -2, -3, -3, -3, -3, -3, -3, -3, -3, -4,
 -4, -4, -4, -4, -4, -5, -5, -5, -5, -5,
 -6, -6, -6, -6, -7, -7, -7, -8, -8, -8,
 -8, -9, -9, -9, -10, -10, -11, -11, -11, -12,
 -12, -13, -13, -14, -14, -15, -15, -16, -17, -17,
 -18, -18, -19, -20, -20, -21, -22, -23, -24, -24,
 -25, -26, -27, -28, -29, -30, -31, -32, -33, -34,
 -35, -36, -38, -39, -40, -41, -43, -44, -46, -47,
 -49, -50, -52, -53, -55, -57, -58, -60, -62, -64,
 -66, -68, -70, -72, -74, -77, -79, -81, -84, -86,
 -89, -91, -94, -97, -99, -102, -105, -108, -111, -114,
 -118, -121, -124, -128, -131, -135, -139, -143, -147, -151,
 -155, -159, -163, -167, -172, -177, -181, -186, -191, -196,
 -201, -206, -212, -217, -223, -228, -234, -240, -246, -253,
 -259, -265, -272, -279, -286, -293, -300, -307, -315, -323,
 -330, -338, -347, -355, -363, -372, -381, -390, -399, -408,
 -418, -428, -438, -448, -458, -469, -479, -490, -501, -513,
 -524, -536, -548, -560, -573, -585, -598, -612, -625, -639,
 -652, -667, -681, -696, -711, -726, -741, -757, -773, -789,
 -806, -823, -840, -857, -875, -893, -911, -930, -949, -968,
 -988, -1008, -1028, -1048, -1069, -1091, -1112, -1134, -1157, -1179,
 -1202, -1226, -1249, -1274, -1298, -1323, -1348, -1374, -1400, -1427,
 -1454, -1481, -1509, -1537, -1565, -1594, -1624, -1654, -1684, -1715,
 -1746, -1778, -1810, -1842, -1875, -1909, -1943, -1977, -2012, -2048,
 -2084, -2120, -2157, -2195, -2233, -2272, -2311, -2350, -2390, -2431,
 -2472, -2514, -2557, -2599, -2643, -2687, -2732, -2777, -2823, -2869,
 -2916, -2964, -3012, -3061, -3110, -3160, -3211, -3262, -3314, -3367,
 -3420, -3474, -3528, -3584, -3639, -3696, -3753, -3811, -3870, -3929,
 -3989, -4050, -4111, -4173, -4236, -4299, -4363, -4428, -4494, -4561,
 -4628, -4696, -4764, -4834, -4904, -4975, -5046, -5119, -5192, -5266,
 -5341, -5417, -5493, -5570, -5648, -5727, -5807, -5887, -5968, -6051,
 -6133, -6217, -6302, -6387, -6474, -6561, -6649, -6737, -6827, -6918,
 -7009, -7101, -7195, -7289, -7383, -7479, -7576, -7674, -7772, -7871,
 -7972, -8073, -8175, -8278, -8382, -8487, -8592, -8699, -8806, -8915,
 -9024, -9135, -9246, -9358, -9471, -9585, -9700, -9816, -9933, -10051,
 -10170, -10290, -10410, -10532, -10655, -10778, -10903, -11028, -11155, -11282,
 -11410, -11540, -11670, -11801, -11933, -12067, -12201, -12336, -12472, -12609,
 -12747, -12886, -13026, -13167, -13309, -13451, -13595, -13740, -13886, -14032,
 -14180, -14329, -14478, -14629, -14780, -14933, -15086, -15240, -15396, -15552,
 -15709, -15867, -16026, -16186, -16347, -16509, -16672, -16836, -17000, -17166,
 -17332, -17500, -17668, -17838, -18008, -18179, -18351, -18524, -18698, -18872,
 -19048, -19224, -19402, -19580, -19759, -19939, -20120, -20301, -20484, -20667,
 -20851, -21036, -21222, -21409, -21597, -21785, -21974, -22164, -22355, -22546,
 -22739, -22932, -23126, -23320, -23516, -23712, -23909, -24106, -24305, -24504,
 -24703, -24904, -25105, -25307, -25510, -25713, -25917, -26121, -26326, -26532,
 -26739, -26946, -27154, -27362, -27571, -27780, -27991, -28201, -28412, -28624,
 -28837, -29049, -29263, -29477, -29691, -29906, -30121, -30337, -30554, -30770,
 -30988, -31205, -31423, -31642, -31860, -32080, -32299, -32519, -32740, -32960,
 -33181, -33403, -33624, -33846, -34068, -34291, -34513, -34736, -34959, -35183,
 -35406, -35630, -35854, -36078, -36303, -36527, -36752, -36976, -37201, -37426,
 -37651, -37876, -38101, -38326, -38551, -38776, -39002, -39227, -39452, -39677,
 -39902, -40127, -40351, -40576, -40801, -41025, -41250, -41474, -41698, -41921,
 -42145, -42368, -42592, -42814, -43037, -43259, -43482, -43703, -43925, -44146,
 -44367, -44587, -44807, -45027, -45246, -45465, -45683, -45901, -46118, -46335,
 -46552, -46768, -46983, -47198, -47412, -47626, -47839, -48051, -48263, -48475,
 -48685, -48895, -49104, -49313, -49521, -49728, -49934, -50140, -50345, -50549,
 -50752, -50955, -51156, -51357, -51557, -51756, -51954, -52152, -52348, -52543,
 -52738, -52931, -53124, -53315, -53506, -53695, -53884, -54071, -54257, -54443,
 -54627, -54810, -54992, -55173, -55352, -55531, -55708, -55884, -56059, -56233,
 -56405, -56576, -56746, -56915, -57082, -57248, -57413, -57576, -57738, -57899,
 -58059, -58217, -58373, -58528, -58682, -58834, -58985, -59135, -59283, -59429,
 -59574, -59718, -59860, -60000, -60139, -60277, -60413, -60547, -60680, -60811,
 -60940, -61068, -61194, -61319, -61442, -61563, -61683, -61801, -61918, -62032,
 -62145, -62256, -62366, -62474, -62580, -62684, -62786, -62887, -62986, -63083,
 -63179, -63273, -63364, -63454, -63543, -63629, -63713, -63796, -63877, -63956,
 -64033, -64108, -64182, -64253, -64323, -64391, -64456, -64520, -64582, -64642,
 -64701, -64757, -64811, -64863, -64914, -64962, -65009, -65054, -65096, -65137,
 -65176, -65212, -65247, -65280, -65311, -65340, -65367, -65391, -65414, -65435,
 -65454, -65471, -65486, -65499, -65510, -65519, -65526, -65531, -65534, -65535,
 -65534, -65531, -65526, -65519, -65510, -65499, -65486, -65471, -65454, -65435,
 -65414, -65391, -65367, -65340, -65311, -65280, -65247, -65212, -65176, -65137,
 -65096, -65054, -65009, -64962, -64914, -64863, -64811, -64757, -64701, -64642,
 -64582, -64520, -64456, -64391, -64323, -64253, -64182, -64108, -64033, -63956,
 -63877, -63796, -63713, -63629, -63543, -63454, -63364, -63273, -63179, -63083,
 -62986, -62887, -62786, -62684, -62580, -62474, -62366, -62256, -62145, -62032,
 -61918, -61801, -61683, -61563, -61442, -61319, -61194, -61068, -60940, -60811,
 -60680, -60547, -60413, -60277, -60139, -60000, -59860, -59718, -59574, -59429,
 -59283, -59135, -58985, -58834, -58682, -58528, -58373, -58217, -58059, -57899,
 -57738, -57576, -57413, -57248, -57082, -56915, -56746, -56576, -56405, -56233,
 -56059, -55884, -55708, -55531, -55352, -55173, -54992, -54810, -54627, -54443,
 -54257, -54071, -53884, -53695, -53506, -53315, -53124, -52931, -52738, -52543,
 -52348, -52152, -51954, -51756, -51557, -51357, -51156, -50955, -50752, -50549,
 -50345, -50140, -49934, -49728, -49521, -49313, -49104, -48895, -48685, -48475,
 -48263, -48051, -47839, -47626, -47412, -47198, -46983, -46768, -46552, -46335,
 -46118, -45901, -45683, -45465, -45246, -45027, -44807, -44587, -44367, -44146,
 -43925, -43703, -43482, -43259, -43037, -42814, -42592, -42368, -42145, -41921,
 -41698, -41474, -41250, -41025, -40801, -40576, -40351, -40127, -39902, -39677,
 -39452, -39227, -39002, -38776, -38551, -38326, -38101, -37876, -37651, -37426,
 -37201, -36976, -36752, -36527, -36303, -36078, -35854, -35630, -35406, -35183,
 -34959, -34736, -34513, -34291, -34068, -33846, -33624, -33403, -33181, -32960,
 -32740, -32519, -32299, -32080, -31860, -31642, -31423, -31205, -30988, -30770,
 -30554, -30337, -30121, -29906, -29691, -29477, -29263, -29049, -28837, -28624,
 -28412, -28201, -27991, -27780, -27571, -27362, -27154, -26946, -26739, -26532,
 -26326, -26121, -25917, -25713, -25510, -25307, -25105, -24904, -24703, -24504,
 -24305, -24106, -23909, -23712, -23516, -23320, -23126, -22932, -22739, -22546,
 -22355, -22164, -21974, -21785, -21597, -21409, -21222, -21036, -20851, -20667,
 -20484, -20301, -20120, -19939, -19759, -19580, -19402, -19224, -19048, -18872,
 -18698, -18524, -18351, -18179, -18008, -17838, -17668, -17500, -17332, -17166,
 -17000, -16836, -16672, -16509, -16347, -16186, -16026, -15867, -15709, -15552,
 -15396, -15240, -15086, -14933, -14780, -14629, -14478, -14329, -14180, -14032,
 -13886, -13740, -13595, -13451, -13309, -13167, -13026, -12886, -12747, -12609,
 -12472, -12336, -12201, -12067, -11933, -11801, -11670, -11540, -11410, -11282,
 -11155, -11028, -10903, -10778, -10655, -10532, -10410, -10290, -10170, -10051,
 -9933, -9816, -9700, -9585, -9471, -9358, -9246, -9135, -9024, -8915,
 -8806, -8699, -8592, -8487, -8382, -8278, -8175, -8073, -7972, -7871,
 -7772, -7674, -7576, -7479, -7383, -7289, -7195, -7101, -7009, -6918,
 -6827, -6737, -6649, -6561, -6474, -6387, -6302, -6217, -6133, -6051,
 -5968, -5887, -5807, -5727, -5648, -5570, -5493, -5417, -5341, -5266,
 -5192, -5119, -5046, -4975, -4904, -4834, -4764, -4696, -4628, -4561,
 -4494, -4428, -4363, -4299, -4236, -4173, -4111, -4050, -3989, -3929,
 -3870, -3811, -3753, -3696, -3639, -3584, -3528, -3474, -3420, -3367,
 -3314, -3262, -3211, -3160, -3110, -3061, -3012, -2964, -2916, -2869,
 -2823, -2777, -2732, -2687, -2643, -2599, -2557, -2514, -2472, -2431,
 -2390, -2350, -2311, -2272, -2233, -2195, -2157, -2120, -2084, -2048,
 -2012, -1977, -1943, -1909, -1875, -1842, -1810, -1778, -1746, -1715,
 -1684, -1654, -1624, -1594, -1565, -1537, -1509, -1481, -1454, -1427,
 -1400, -1374, -1348, -1323, -1298, -1274, -1249, -1226, -1202, -1179,
 -1157, -1134, -1112, -1091, -1069, -1048, -1028, -1008, -988, -968,
 -949, -930, -911, -893, -875, -857, -840, -823, -806, -789,
 -773, -757, -741, -726, -711, -696, -681, -667, -652, -639,
 -625, -612, -598, -585, -573, -560, -548, -536, -524, -513,
 -501, -490, -479, -469, -458, -448, -438, -428, -418, -408,
 -399, -390, -381, -372, -363, -355, -347, -338, -330, -323,
 -315, -307, -300, -293, -286, -279, -272, -265, -259, -253,
 -246, -240, -234, -228, -223, -217, -212, -206, -201, -196,
 -191, -186, -181, -177, -172, -167, -163, -159, -155, -151,
 -147, -143, -139, -135, -131, -128, -124, -121, -118, -114,
 -111, -108, -105, -102, -99, -97, -94, -91, -89, -86,
 -84, -81, -79, -77, -74, -72, -70, -68, -66, -64,
 -62, -60, -58, -57, -55, -53, -52, -50, -49, -47,
 -46, -44, -43, -41, -40, -39, -38, -36, -35, -34,
 -33, -32, -31, -30, -29, -28, -27, -26, -25, -24,
 -24, -23, -22, -21, -20, -20, -19, -18, -18, -17,
 -17, -16, -15, -15, -14, -14, -13, -13, -12, -12,
 -11, -11, -11, -10, -10, -9, -9, -9, -8, -8,
 -8, -8, -7, -7, -7, -6, -6, -6, -6, -5,
 -5, -5, -5, -5, -4, -4, -4, -4, -4, -4,
 -3, -3, -3, -3, -3, -3, -3, -3, -2, -2,
 -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};