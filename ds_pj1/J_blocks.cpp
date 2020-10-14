#include"blocks.h"

/*J1 like this
0 0 0
0 1 0
0 1 0
1 1 0
*/

J1::J1(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 1;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 3;
	new_cell[2].second = 0;

	new_cell[3].first = 3;
	new_cell[3].second = 1;

	set_cell(new_cell);
}
/*J2 like this
0 0 0
0 0 0
1 0 0
1 1 1
*/

J2::J2(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 0;

	new_cell[1].first = 3;
	new_cell[1].second = 0;

	new_cell[2].first = 3;
	new_cell[2].second = 1;

	new_cell[3].first = 3;
	new_cell[3].second = 2;

	set_cell(new_cell);
}
/*J3 like this
0 0 0
1 1 0
1 0 0
1 0 0
*/

J3::J3(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 1;
	new_cell[0].second = 0;

	new_cell[1].first = 1;
	new_cell[1].second = 1;

	new_cell[2].first = 2;
	new_cell[2].second = 0;

	new_cell[3].first = 3;
	new_cell[3].second = 0;

	set_cell(new_cell);
}
/*J4 like this
0 0 0 0
0 0 0 0
1 1 1 0
0 0 1 0
*/

J4::J4(int start_col) :block(start_col) {
	cell_vet* new_cell = new cell_vet[5];
	set_block_num(4);

	new_cell[0].first = 2;
	new_cell[0].second = 0;

	new_cell[1].first = 2;
	new_cell[1].second = 1;

	new_cell[2].first = 2;
	new_cell[2].second = 2;

	new_cell[3].first = 3;
	new_cell[3].second = 2;

	set_cell(new_cell);
}
