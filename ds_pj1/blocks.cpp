#include"blocks.h"
#include<iostream>


void block::move_down(bool board[max_m][max_m], int m, int n)
{
	int move = 99999999;
	int block_num = get_block_num();
	if (block_num <= 0)return;
	for (int i = 0; i < block_num; i++) {
		int down_dis, row,col;

		for ( row = get_cell(i).first  + get_x(),
			  col = get_cell(i).second + get_y(),
			  down_dis = 0; row + down_dis < m; ++down_dis) {

			if (board[row + down_dis][col] == 1)break;
		}

		if (down_dis < move)move = down_dis;
	}
	set_xy(get_x() + move, get_y());
}

void block::move_left(bool board[max_m][max_m], int m, int n, int dis)
{
	int block_num = get_block_num();
	if (block_num <= 0)return;
	for (int i = 0; i < block_num; i++) {
	

		for (int row = get_cell(i).first  + get_x(),
			     col = get_cell(i).second + get_y(),
			     left_dis = 0;
			 left_dis < dis; ++left_dis) {

			if ( (col - left_dis < 0) || (board[row][col - left_dis] == 1) )//invaild test case
			{
				std::cout << "block can't move right,since (" << row << "," << col - left_dis << ") has a block";
				return;
			}
		}

		//	if (right_dis < move)move = right_dis;
	}
	set_xy(get_x(), get_y() - dis);
}

void block::move_right(bool board[max_m][max_m], int m, int n, int dis)//detect if there are any collision on the moving path
{
	int block_num = get_block_num();
	if (block_num <= 0)return;
	for (int i = 0; i < block_num; i++) {
		

		for (int row = get_cell(i).first  + get_x(),
			     col = get_cell(i).second + get_y(),
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
	set_xy(get_x()  , get_y() + dis);
}


