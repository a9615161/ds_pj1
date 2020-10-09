#include"blocks.h"
#include<iostream>

void block::move_down(int** board, int m, int n)
{
	int move = 99999999;
	int block_num = get_block_num();

	for (int i = 0; i < block_num; i++) {
		int down_dis;

		for (int row = show_cell()[i].first + get_x()
			, int col = show_cell()[i].second + get_y(), down_dis = 0;
			row < m; ++down_dis) {

			if (board[row + down_dis][col] == 1)break;
		}

		if (down_dis < move)move = down_dis;
	}
	set_xy(get_x() + move, get_y());
}

void block::move_left(int** board, int m, int n, int dis)
{
	int block_num = get_block_num();

	for (int i = 0; i < block_num; i++) {
		int left_dis;

		for (int row = show_cell()[i].first + get_x()
			, int col = show_cell()[i].second + get_y(),
			left_dis = 0;
			left_dis < dis; ++left_dis) {

			if ((col - left_dis < 0) ||(board[row][col - left_dis] == 1))//invaild test case
			{
				std::cout << "block can't move right,since (" << row << "," << col - left_dis << ") has a block";
				return;
			}
		}

		//	if (right_dis < move)move = right_dis;
	}
	set_xy(get_x() - dis, get_y());
}

void block::move_right(int** board, int m, int n, int dis)//detect if there are any collision on the moving path
{
	int block_num = get_block_num();

	for (int i = 0; i < block_num; i++) {
		int right_dis;

		for (int row = show_cell()[i].first  + get_x()
			,int col = show_cell()[i].second + get_y(),
			right_dis = 0;
			right_dis < dis; ++right_dis) {

			if ( (col + right_dis > n) || (board[row][col + right_dis] == 1) )//invaild test case
			{
				std::cout << "block can't move right,since (" << row << "," << col + right_dis << ") has a block";
				return;
			}
		}

	//	if (right_dis < move)move = right_dis;
	}
	set_xy(get_x() + dis , get_y());
}


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

	new_cell[0].first  = 2;
	new_cell[0].second = 0;

	new_cell[1].first  = 2;
	new_cell[1].second = 1;

	new_cell[2].first  = 2;
	new_cell[2].second = 2;

	new_cell[3].first  = 3;
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

	new_cell[0].first  = 1;
	new_cell[0].second = 1;

	new_cell[1].first  = 2;
	new_cell[1].second = 0;

	new_cell[2].first  = 2;
	new_cell[2].second = 1;

	new_cell[3].first  = 3;
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

	new_cell[0].first  = 2;
	new_cell[0].second = 1;

	new_cell[1].first  = 3;
	new_cell[1].second = 0;

	new_cell[2].first  = 3;
	new_cell[2].second = 1;

	new_cell[3].first  = 3;
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
