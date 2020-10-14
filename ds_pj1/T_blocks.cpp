
#include"blocks.h"
//t1 like this
/*
0 0 0 0
0 0 0 0
1 1 1 0
0 1 0 0
*/

t1::t1(int start_col) :block(start_col)
{
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 0;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 2;
	new_cell[2].second = 2;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}

//t2 like this
/*
0 0 0 0
0 1 0 0
1 1 0 0
0 1 0 0
*/

t2::t2(int start_col) :block(start_col)
{
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 1;

	new_cell[1].first = 2;
	new_cell[1].second = 0;

	new_cell[2].first = 2;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}
//t3 like this
/*
0 0 0 0
0 0 0 0
0 1 0 0
1 1 1 0
*/

t3::t3(int start_col) :block(start_col)
{
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 1;

	new_cell[1].first = 3;
	new_cell[1].second = 0;

	new_cell[2].first = 3;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 2;

	set_cell(new_cell);
}
//t4 like this
/*
0 0 0 0
1 0 0 0
1 1 0 0
1 0 0 0
*/

t4::t4(int start_col) :block(start_col)
{
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 0;

	new_cell[1].first = 2;
	new_cell[1].second = 0;

	new_cell[2].first = 2;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 0;

	set_cell(new_cell);
}