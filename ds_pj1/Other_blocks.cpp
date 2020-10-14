#include"blocks.h"

/*S1 like this
0 0 0
0 0 0
0 1 1
1 1 0
*/

S1::S1(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 2;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 3;
	new_cell[2].second = 0;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}
/*S2 like this
0 0 0
1 0 0
1 1 0
0 1 0
*/

S2::S2(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 0;

	new_cell[1].first = 2;
	new_cell[1].second = 0;

	new_cell[2].first = 2;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}
/*Z1 like this
0 0 0
0 0 0
1 1 0
0 1 1
*/

Z1::Z1(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 0;
	new_cell[0].second = 2;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 3;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 2;

	set_cell(new_cell);
}
/*Z2 like this
0 0 0 0
0 1 0 0
1 1 0 0
1 0 0 0
*/

Z2::Z2(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 1;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 2;
	new_cell[2].second = 2;

	new_cell[3].first = 3;
	new_cell[3].second = 0;

	set_cell(new_cell);
}
/*I1 like this
1 0 0
1 0 0
1 0 0
1 0 0
*/
I1::I1(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 0 ;
	new_cell[0].second = 0;

	new_cell[1].first = 1;
	new_cell[1].second = 0;

	new_cell[2].first = 2;
	new_cell[2].second = 0;

	new_cell[3].first = 3;
	new_cell[3].second = 0;

	set_cell(new_cell);
}
/*I2 like this
0 0 0 0
0 0 0 0 
0 0 0 0
1 1 1 1
*/
I2::I2(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 3;
	new_cell[0].second = 0;

	new_cell[1].first = 3;
	new_cell[1].second = 1;

	new_cell[2].first = 3;
	new_cell[2].second = 2;

	new_cell[3].first = 3;
	new_cell[3].second = 3;

	set_cell(new_cell);
}

/* O like this
0 0 0 
0 0 0
1 1 0
1 1 0
*/
O::O(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 0;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 3;
	new_cell[2].second = 0;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}


