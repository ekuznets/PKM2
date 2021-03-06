int FLEUT1_walk_count;
float FLEUT1_walk_verts[126];
int FLEUT1_walk_types[42];
int FLEUT1_walk_graph[84];

void FLEUT1_walk_init()
{
	FLEUT1_walk_count = 42;

	FLEUT1_walk_verts[0 ] = -1.929874;
	FLEUT1_walk_verts[1 ] = 4.060003;
	FLEUT1_walk_verts[2 ] = 6.838603;
	FLEUT1_walk_verts[3 ] = -1.629202;
	FLEUT1_walk_verts[4 ] = 5.571132;
	FLEUT1_walk_verts[5 ] = 9.972677;
	FLEUT1_walk_verts[6 ] = -1.120867;
	FLEUT1_walk_verts[7 ] = 5.633203;
	FLEUT1_walk_verts[8 ] = 12.663636;
	FLEUT1_walk_verts[9 ] = 0.940432;
	FLEUT1_walk_verts[10] = 5.664536;
	FLEUT1_walk_verts[11] = 12.621218;
	FLEUT1_walk_verts[12] = -1.771641;
	FLEUT1_walk_verts[13] = 5.571132;
	FLEUT1_walk_verts[14] = 9.418664;
	FLEUT1_walk_verts[15] = 1.558220;
	FLEUT1_walk_verts[16] = 5.603270;
	FLEUT1_walk_verts[17] = 8.314543;
	FLEUT1_walk_verts[18] = -1.655774;
	FLEUT1_walk_verts[19] = 4.102969;
	FLEUT1_walk_verts[20] = 5.946877;
	FLEUT1_walk_verts[21] = 1.582354;
	FLEUT1_walk_verts[22] = 4.084267;
	FLEUT1_walk_verts[23] = 6.291374;
	FLEUT1_walk_verts[24] = 1.714048;
	FLEUT1_walk_verts[25] = 4.082921;
	FLEUT1_walk_verts[26] = 0.018841;
	FLEUT1_walk_verts[27] = -1.861085;
	FLEUT1_walk_verts[28] = 4.105772;
	FLEUT1_walk_verts[29] = -2.327683;
	FLEUT1_walk_verts[30] = 0.298227;
	FLEUT1_walk_verts[31] = 4.094111;
	FLEUT1_walk_verts[32] = -2.568628;
	FLEUT1_walk_verts[33] = 1.763107;
	FLEUT1_walk_verts[34] = 6.163427;
	FLEUT1_walk_verts[35] = -5.932146;
	FLEUT1_walk_verts[36] = 1.383388;
	FLEUT1_walk_verts[37] = 6.184342;
	FLEUT1_walk_verts[38] = -13.678864;
	FLEUT1_walk_verts[39] = 0.803734;
	FLEUT1_walk_verts[40] = 4.074061;
	FLEUT1_walk_verts[41] = 7.313381;
	FLEUT1_walk_verts[42] = 0.803734;
	FLEUT1_walk_verts[43] = 4.074061;
	FLEUT1_walk_verts[44] = 7.983641;
	FLEUT1_walk_verts[45] = 3.349013;
	FLEUT1_walk_verts[46] = 6.050252;
	FLEUT1_walk_verts[47] = 9.411176;
	FLEUT1_walk_verts[48] = -3.259134;
	FLEUT1_walk_verts[49] = 6.050251;
	FLEUT1_walk_verts[50] = 9.344265;
	FLEUT1_walk_verts[51] = -3.529994;
	FLEUT1_walk_verts[52] = 6.023930;
	FLEUT1_walk_verts[53] = -3.660413;
	FLEUT1_walk_verts[54] = 0.530705;
	FLEUT1_walk_verts[55] = 13.798398;
	FLEUT1_walk_verts[56] = 9.020707;
	FLEUT1_walk_verts[57] = -0.570331;
	FLEUT1_walk_verts[58] = 13.772983;
	FLEUT1_walk_verts[59] = 9.020707;
	FLEUT1_walk_verts[60] = -0.862457;
	FLEUT1_walk_verts[61] = 15.080405;
	FLEUT1_walk_verts[62] = -1.315888;
	FLEUT1_walk_verts[63] = 1.009281;
	FLEUT1_walk_verts[64] = 15.824937;
	FLEUT1_walk_verts[65] = 8.402053;
	FLEUT1_walk_verts[66] = -0.654266;
	FLEUT1_walk_verts[67] = 15.864022;
	FLEUT1_walk_verts[68] = 10.073030;
	FLEUT1_walk_verts[69] = -1.262729;
	FLEUT1_walk_verts[70] = 17.811058;
	FLEUT1_walk_verts[71] = -0.855095;
	FLEUT1_walk_verts[72] = -1.267675;
	FLEUT1_walk_verts[73] = 6.141674;
	FLEUT1_walk_verts[74] = -12.421252;
	FLEUT1_walk_verts[75] = 3.591863;
	FLEUT1_walk_verts[76] = 5.993599;
	FLEUT1_walk_verts[77] = -3.670884;
	FLEUT1_walk_verts[78] = 0.912208;
	FLEUT1_walk_verts[79] = 15.155173;
	FLEUT1_walk_verts[80] = -1.315888;
	FLEUT1_walk_verts[81] = -1.768763;
	FLEUT1_walk_verts[82] = 6.188766;
	FLEUT1_walk_verts[83] = -2.792763;
	FLEUT1_walk_verts[84] = 1.109514;
	FLEUT1_walk_verts[85] = 17.811058;
	FLEUT1_walk_verts[86] = -0.111349;
	FLEUT1_walk_verts[87] = 0.511884;
	FLEUT1_walk_verts[88] = 6.028923;
	FLEUT1_walk_verts[89] = -2.587435;
	FLEUT1_walk_verts[90] = 0.494634;
	FLEUT1_walk_verts[91] = 6.163427;
	FLEUT1_walk_verts[92] = -5.657519;
	FLEUT1_walk_verts[93] = 2.120644;
	FLEUT1_walk_verts[94] = 4.082921;
	FLEUT1_walk_verts[95] = -2.347161;
	FLEUT1_walk_verts[96] = 1.877136;
	FLEUT1_walk_verts[97] = 6.163427;
	FLEUT1_walk_verts[98] = -5.808963;
	FLEUT1_walk_verts[99] = -1.536985;
	FLEUT1_walk_verts[100] = 6.156000;
	FLEUT1_walk_verts[101] = -10.630485;
	FLEUT1_walk_verts[102] = -0.760864;
	FLEUT1_walk_verts[103] = 8.891379;
	FLEUT1_walk_verts[104] = -16.961889;
	FLEUT1_walk_verts[105] = -0.061598;
	FLEUT1_walk_verts[106] = 8.930758;
	FLEUT1_walk_verts[107] = -18.290199;
	FLEUT1_walk_verts[108] = 0.741654;
	FLEUT1_walk_verts[109] = 8.930758;
	FLEUT1_walk_verts[110] = -17.167150;
	FLEUT1_walk_verts[111] = 0.522212;
	FLEUT1_walk_verts[112] = 8.952293;
	FLEUT1_walk_verts[113] = -14.466308;
	FLEUT1_walk_verts[114] = -1.024896;
	FLEUT1_walk_verts[115] = 4.105300;
	FLEUT1_walk_verts[116] = -2.911971;
	FLEUT1_walk_verts[117] = -1.024896;
	FLEUT1_walk_verts[118] = 4.105300;
	FLEUT1_walk_verts[119] = -3.798866;
	FLEUT1_walk_verts[120] = 0.571683;
	FLEUT1_walk_verts[121] = 6.184631;
	FLEUT1_walk_verts[122] = -14.527671;
	FLEUT1_walk_verts[123] = 0.571683;
	FLEUT1_walk_verts[124] = 6.184631;
	FLEUT1_walk_verts[125] = -15.538573;

	FLEUT1_walk_types[0 ] = 0;
	FLEUT1_walk_types[1 ] = 0;
	FLEUT1_walk_types[2 ] = 0;
	FLEUT1_walk_types[3 ] = 0;
	FLEUT1_walk_types[4 ] = 0;
	FLEUT1_walk_types[5 ] = 0;
	FLEUT1_walk_types[6 ] = 0;
	FLEUT1_walk_types[7 ] = 0;
	FLEUT1_walk_types[8 ] = 0;
	FLEUT1_walk_types[9 ] = 0;
	FLEUT1_walk_types[10] = 0;
	FLEUT1_walk_types[11] = 0;
	FLEUT1_walk_types[12] = 0;
	FLEUT1_walk_types[13] = 2;
	FLEUT1_walk_types[14] = 3;
	FLEUT1_walk_types[15] = 5;
	FLEUT1_walk_types[16] = 5;
	FLEUT1_walk_types[17] = 5;
	FLEUT1_walk_types[18] = 4;
	FLEUT1_walk_types[19] = 4;
	FLEUT1_walk_types[20] = 4;
	FLEUT1_walk_types[21] = 6;
	FLEUT1_walk_types[22] = 6;
	FLEUT1_walk_types[23] = 6;
	FLEUT1_walk_types[24] = 0;
	FLEUT1_walk_types[25] = 5;
	FLEUT1_walk_types[26] = 4;
	FLEUT1_walk_types[27] = 0;
	FLEUT1_walk_types[28] = 6;
	FLEUT1_walk_types[29] = 0;
	FLEUT1_walk_types[30] = 0;
	FLEUT1_walk_types[31] = 0;
	FLEUT1_walk_types[32] = 0;
	FLEUT1_walk_types[33] = 0;
	FLEUT1_walk_types[34] = 0;
	FLEUT1_walk_types[35] = 0;
	FLEUT1_walk_types[36] = 0;
	FLEUT1_walk_types[37] = 0;
	FLEUT1_walk_types[38] = 2;
	FLEUT1_walk_types[39] = 3;
	FLEUT1_walk_types[40] = 2;
	FLEUT1_walk_types[41] = 3;

	FLEUT1_walk_graph[0 ] = (37)*256 + (36);
	FLEUT1_walk_graph[1 ] = (35)*256 + (36);
	FLEUT1_walk_graph[2 ] = (34)*256 + (35);
	FLEUT1_walk_graph[3 ] = (34)*256 + (36);
	FLEUT1_walk_graph[4 ] = (24)*256 + (34);
	FLEUT1_walk_graph[5 ] = (24)*256 + (33);
	FLEUT1_walk_graph[6 ] = (12)*256 + (33);
	FLEUT1_walk_graph[7 ] = (12)*256 + (40);
	FLEUT1_walk_graph[8 ] = (40)*256 + (41);
	FLEUT1_walk_graph[9 ] = (12)*256 + (30);
	FLEUT1_walk_graph[10] = (12)*256 + (11);
	FLEUT1_walk_graph[11] = (12)*256 + (33);
	FLEUT1_walk_graph[12] = (33)*256 + (27);
	FLEUT1_walk_graph[13] = (11)*256 + (30);
	FLEUT1_walk_graph[14] = (11)*256 + (32);
	FLEUT1_walk_graph[15] = (31)*256 + (32);
	FLEUT1_walk_graph[16] = ( 8)*256 + (31);
	FLEUT1_walk_graph[17] = (10)*256 + (31);
	FLEUT1_walk_graph[18] = ( 9)*256 + (38);
	FLEUT1_walk_graph[19] = (38)*256 + (39);
	FLEUT1_walk_graph[20] = ( 8)*256 + ( 7);
	FLEUT1_walk_graph[21] = ( 7)*256 + (13);
	FLEUT1_walk_graph[22] = (13)*256 + (14);
	FLEUT1_walk_graph[23] = ( 6)*256 + (13);
	FLEUT1_walk_graph[24] = ( 0)*256 + ( 6);
	FLEUT1_walk_graph[25] = ( 4)*256 + ( 0);
	FLEUT1_walk_graph[26] = ( 1)*256 + ( 4);
	FLEUT1_walk_graph[27] = ( 1)*256 + ( 2);
	FLEUT1_walk_graph[28] = ( 2)*256 + ( 3);
	FLEUT1_walk_graph[29] = ( 3)*256 + ( 5);
	FLEUT1_walk_graph[30] = (-1)*256 + (-1);
	FLEUT1_walk_graph[31] = (27)*256 + (30);
	FLEUT1_walk_graph[32] = ( 9)*256 + ( 6);
	FLEUT1_walk_graph[33] = ( 6)*256 + ( 7);
	FLEUT1_walk_graph[34] = (32)*256 + (25);
	FLEUT1_walk_graph[35] = (25)*256 + (26);
	FLEUT1_walk_graph[36] = (26)*256 + (28);
	FLEUT1_walk_graph[37] = (27)*256 + (17);
	FLEUT1_walk_graph[38] = (17)*256 + (20);
	FLEUT1_walk_graph[39] = (20)*256 + (23);
	FLEUT1_walk_graph[40] = ( 5)*256 + (15);
	FLEUT1_walk_graph[41] = (15)*256 + (18);
	FLEUT1_walk_graph[42] = (18)*256 + (21);
	FLEUT1_walk_graph[43] = ( 1)*256 + (16);
	FLEUT1_walk_graph[44] = (16)*256 + (19);
	FLEUT1_walk_graph[45] = (19)*256 + (22);
	FLEUT1_walk_graph[46] = (-1)*256 + (-1);
	FLEUT1_walk_graph[47] = (-1)*256 + (-1);
	FLEUT1_walk_graph[48] = (-1)*256 + (-1);
	FLEUT1_walk_graph[49] = (-1)*256 + (-1);
	FLEUT1_walk_graph[50] = (-1)*256 + (-1);
	FLEUT1_walk_graph[51] = (-1)*256 + (-1);
	FLEUT1_walk_graph[52] = (-1)*256 + (-1);
	FLEUT1_walk_graph[53] = (-1)*256 + (-1);
	FLEUT1_walk_graph[54] = (-1)*256 + (-1);
	FLEUT1_walk_graph[55] = (-1)*256 + (-1);
	FLEUT1_walk_graph[56] = (-1)*256 + (-1);
	FLEUT1_walk_graph[57] = (-1)*256 + (-1);
	FLEUT1_walk_graph[58] = (-1)*256 + (-1);
	FLEUT1_walk_graph[59] = (-1)*256 + (-1);
	FLEUT1_walk_graph[60] = (-1)*256 + (-1);
	FLEUT1_walk_graph[61] = (-1)*256 + (-1);
	FLEUT1_walk_graph[62] = (-1)*256 + (-1);
	FLEUT1_walk_graph[63] = (-1)*256 + (-1);
	FLEUT1_walk_graph[64] = (-1)*256 + (-1);
	FLEUT1_walk_graph[65] = (-1)*256 + (-1);
	FLEUT1_walk_graph[66] = (-1)*256 + (-1);
	FLEUT1_walk_graph[67] = (-1)*256 + (-1);
	FLEUT1_walk_graph[68] = (-1)*256 + (-1);
	FLEUT1_walk_graph[69] = (-1)*256 + (-1);
	FLEUT1_walk_graph[70] = (-1)*256 + (-1);
	FLEUT1_walk_graph[71] = (-1)*256 + (-1);
	FLEUT1_walk_graph[72] = (-1)*256 + (-1);
	FLEUT1_walk_graph[73] = (-1)*256 + (-1);
	FLEUT1_walk_graph[74] = (-1)*256 + (-1);
	FLEUT1_walk_graph[75] = (-1)*256 + (-1);
	FLEUT1_walk_graph[76] = (-1)*256 + (-1);
	FLEUT1_walk_graph[77] = (-1)*256 + (-1);
	FLEUT1_walk_graph[78] = (-1)*256 + (-1);
	FLEUT1_walk_graph[79] = (-1)*256 + (-1);
	FLEUT1_walk_graph[80] = (-1)*256 + (-1);
	FLEUT1_walk_graph[81] = (-1)*256 + (-1);
	FLEUT1_walk_graph[82] = (-1)*256 + (-1);
	FLEUT1_walk_graph[83] = (-1)*256 + (-1);
}
