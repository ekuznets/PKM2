int LUGGER2_walk_count;
float LUGGER2_walk_verts[78];
int LUGGER2_walk_types[26];
int LUGGER2_walk_graph[52];

void LUGGER2_walk_init()
{
	LUGGER2_walk_count = 26;

	LUGGER2_walk_verts[0 ] = -1.270580;
	LUGGER2_walk_verts[1 ] = 1.043159;
	LUGGER2_walk_verts[2 ] = 5.516670;
	LUGGER2_walk_verts[3 ] = -2.350720;
	LUGGER2_walk_verts[4 ] = 0.963548;
	LUGGER2_walk_verts[5 ] = 2.606766;
	LUGGER2_walk_verts[6 ] = 1.613919;
	LUGGER2_walk_verts[7 ] = 1.139233;
	LUGGER2_walk_verts[8 ] = -3.947842;
	LUGGER2_walk_verts[9 ] = 0.157355;
	LUGGER2_walk_verts[10] = 1.090597;
	LUGGER2_walk_verts[11] = -3.112938;
	LUGGER2_walk_verts[12] = 2.021681;
	LUGGER2_walk_verts[13] = 0.992353;
	LUGGER2_walk_verts[14] = -0.618041;
	LUGGER2_walk_verts[15] = 1.305221;
	LUGGER2_walk_verts[16] = 0.992353;
	LUGGER2_walk_verts[17] = 2.260010;
	LUGGER2_walk_verts[18] = 2.461877;
	LUGGER2_walk_verts[19] = 0.992353;
	LUGGER2_walk_verts[20] = 3.279396;
	LUGGER2_walk_verts[21] = 0.932091;
	LUGGER2_walk_verts[22] = 0.992353;
	LUGGER2_walk_verts[23] = 5.739328;
	LUGGER2_walk_verts[24] = -1.060606;
	LUGGER2_walk_verts[25] = 1.149482;
	LUGGER2_walk_verts[26] = 6.425966;
	LUGGER2_walk_verts[27] = -1.377850;
	LUGGER2_walk_verts[28] = 0.972862;
	LUGGER2_walk_verts[29] = 1.059994;
	LUGGER2_walk_verts[30] = -0.894331;
	LUGGER2_walk_verts[31] = 1.344630;
	LUGGER2_walk_verts[32] = -4.803570;
	LUGGER2_walk_verts[33] = 1.043973;
	LUGGER2_walk_verts[34] = 1.344630;
	LUGGER2_walk_verts[35] = -2.283593;
	LUGGER2_walk_verts[36] = 1.338950;
	LUGGER2_walk_verts[37] = 1.344630;
	LUGGER2_walk_verts[38] = 1.086950;
	LUGGER2_walk_verts[39] = 1.533320;
	LUGGER2_walk_verts[40] = 1.036493;
	LUGGER2_walk_verts[41] = 4.491262;
	LUGGER2_walk_verts[42] = 2.847385;
	LUGGER2_walk_verts[43] = 2.328522;
	LUGGER2_walk_verts[44] = 7.124221;
	LUGGER2_walk_verts[45] = -2.754733;
	LUGGER2_walk_verts[46] = 2.393528;
	LUGGER2_walk_verts[47] = 7.149481;
	LUGGER2_walk_verts[48] = -3.328930;
	LUGGER2_walk_verts[49] = 2.201422;
	LUGGER2_walk_verts[50] = -1.076016;
	LUGGER2_walk_verts[51] = 0.578167;
	LUGGER2_walk_verts[52] = 6.767797;
	LUGGER2_walk_verts[53] = 6.720980;
	LUGGER2_walk_verts[54] = -0.605391;
	LUGGER2_walk_verts[55] = 6.767797;
	LUGGER2_walk_verts[56] = 6.720980;
	LUGGER2_walk_verts[57] = -0.624408;
	LUGGER2_walk_verts[58] = 7.499476;
	LUGGER2_walk_verts[59] = -0.861936;
	LUGGER2_walk_verts[60] = 3.389880;
	LUGGER2_walk_verts[61] = 2.201422;
	LUGGER2_walk_verts[62] = -1.076016;
	LUGGER2_walk_verts[63] = 0.608305;
	LUGGER2_walk_verts[64] = 7.487668;
	LUGGER2_walk_verts[65] = -0.861936;
	LUGGER2_walk_verts[66] = -0.035798;
	LUGGER2_walk_verts[67] = 1.254279;
	LUGGER2_walk_verts[68] = -5.719508;
	LUGGER2_walk_verts[69] = -0.035798;
	LUGGER2_walk_verts[70] = 0.782545;
	LUGGER2_walk_verts[71] = -6.340878;
	LUGGER2_walk_verts[72] = -0.035798;
	LUGGER2_walk_verts[73] = 0.782545;
	LUGGER2_walk_verts[74] = -6.548285;
	LUGGER2_walk_verts[75] = -0.035798;
	LUGGER2_walk_verts[76] = -0.190676;
	LUGGER2_walk_verts[77] = -7.493792;

	LUGGER2_walk_types[0 ] = 0;
	LUGGER2_walk_types[1 ] = 0;
	LUGGER2_walk_types[2 ] = 0;
	LUGGER2_walk_types[3 ] = 0;
	LUGGER2_walk_types[4 ] = 0;
	LUGGER2_walk_types[5 ] = 0;
	LUGGER2_walk_types[6 ] = 0;
	LUGGER2_walk_types[7 ] = 0;
	LUGGER2_walk_types[8 ] = 1;
	LUGGER2_walk_types[9 ] = 1;
	LUGGER2_walk_types[10] = 1;
	LUGGER2_walk_types[11] = 1;
	LUGGER2_walk_types[12] = 1;
	LUGGER2_walk_types[13] = 1;
	LUGGER2_walk_types[14] = 5;
	LUGGER2_walk_types[15] = 5;
	LUGGER2_walk_types[16] = 5;
	LUGGER2_walk_types[17] = 4;
	LUGGER2_walk_types[18] = 4;
	LUGGER2_walk_types[19] = 4;
	LUGGER2_walk_types[20] = 5;
	LUGGER2_walk_types[21] = 4;
	LUGGER2_walk_types[22] = 0;
	LUGGER2_walk_types[23] = 0;
	LUGGER2_walk_types[24] = 2;
	LUGGER2_walk_types[25] = 3;

	LUGGER2_walk_graph[0 ] = ( 0)*256 + ( 8);
	LUGGER2_walk_graph[1 ] = ( 8)*256 + (13);
	LUGGER2_walk_graph[2 ] = ( 0)*256 + ( 9);
	LUGGER2_walk_graph[3 ] = (-1)*256 + (-1);
	LUGGER2_walk_graph[4 ] = ( 7)*256 + (13);
	LUGGER2_walk_graph[5 ] = (13)*256 + ( 6);
	LUGGER2_walk_graph[6 ] = (13)*256 + ( 5);
	LUGGER2_walk_graph[7 ] = ( 6)*256 + ( 5);
	LUGGER2_walk_graph[8 ] = ( 5)*256 + ( 4);
	LUGGER2_walk_graph[9 ] = ( 5)*256 + ( 2);
	LUGGER2_walk_graph[10] = ( 4)*256 + ( 3);
	LUGGER2_walk_graph[11] = ( 2)*256 + ( 3);
	LUGGER2_walk_graph[12] = ( 2)*256 + (10);
	LUGGER2_walk_graph[13] = ( 9)*256 + ( 3);
	LUGGER2_walk_graph[14] = ( 9)*256 + (10);
	LUGGER2_walk_graph[15] = ( 3)*256 + (10);
	LUGGER2_walk_graph[16] = ( 3)*256 + (22);
	LUGGER2_walk_graph[17] = (10)*256 + (22);
	LUGGER2_walk_graph[18] = ( 2)*256 + (22);
	LUGGER2_walk_graph[19] = (22)*256 + (23);
	LUGGER2_walk_graph[20] = (23)*256 + (24);
	LUGGER2_walk_graph[21] = (24)*256 + (25);
	LUGGER2_walk_graph[22] = ( 4)*256 + (20);
	LUGGER2_walk_graph[23] = (20)*256 + (21);
	LUGGER2_walk_graph[24] = ( 9)*256 + (16);
	LUGGER2_walk_graph[25] = (16)*256 + (19);
	LUGGER2_walk_graph[26] = ( 7)*256 + (14);
	LUGGER2_walk_graph[27] = (14)*256 + (17);
	LUGGER2_walk_graph[28] = ( 8)*256 + (15);
	LUGGER2_walk_graph[29] = (15)*256 + (18);
	LUGGER2_walk_graph[30] = ( 0)*256 + ( 7);
	LUGGER2_walk_graph[31] = (-1)*256 + (-1);
	LUGGER2_walk_graph[32] = (-1)*256 + (-1);
	LUGGER2_walk_graph[33] = (-1)*256 + (-1);
	LUGGER2_walk_graph[34] = (-1)*256 + (-1);
	LUGGER2_walk_graph[35] = (-1)*256 + (-1);
	LUGGER2_walk_graph[36] = (-1)*256 + (-1);
	LUGGER2_walk_graph[37] = (-1)*256 + (-1);
	LUGGER2_walk_graph[38] = (-1)*256 + (-1);
	LUGGER2_walk_graph[39] = (-1)*256 + (-1);
	LUGGER2_walk_graph[40] = (-1)*256 + (-1);
	LUGGER2_walk_graph[41] = (-1)*256 + (-1);
	LUGGER2_walk_graph[42] = (-1)*256 + (-1);
	LUGGER2_walk_graph[43] = (-1)*256 + (-1);
	LUGGER2_walk_graph[44] = (-1)*256 + (-1);
	LUGGER2_walk_graph[45] = (-1)*256 + (-1);
	LUGGER2_walk_graph[46] = (-1)*256 + (-1);
	LUGGER2_walk_graph[47] = (-1)*256 + (-1);
	LUGGER2_walk_graph[48] = (-1)*256 + (-1);
	LUGGER2_walk_graph[49] = (-1)*256 + (-1);
	LUGGER2_walk_graph[50] = (-1)*256 + (-1);
	LUGGER2_walk_graph[51] = (-1)*256 + (-1);
}
