#include<iostream>
#include<string>
#include"blocks.h"

#define max_m 1024

bool board[1024][1024];


void move_board_v(int row_u, int row_b, int dis);//up and bottem
int check_line(int row_b, int len);

int main() {

	std::string cmd;
	int m, n;
	int pos, slide;
	std::cin >> m >> n;

	
	

	block* moving_block;

	while (std::cin >> cmd && cmd != "End") {
		std::cin >> pos >> slide;
		switch (cmd.c_str()[0]) {
		case 't':
			switch (cmd.c_str()[1]) {
			case '1':
				moving_block = (block*)new t1(pos);
			default:break;
			}
		default:break;
		}




		moving_block->move_down((bool**)board, m, n);
		if (slide < 0)
			moving_block->move_left((bool**)board, m, n, slide * -1);
		else
			moving_block->move_right((bool**)board, m, n, slide);
		moving_block->move_down((bool**)board, m, n);

		for (int row = moving_block->get_x(),
			int col = moving_block->get_y(),
			int i = 0; i < moving_block->get_block_num(); i++) {

			board[row + moving_block->show_cell()[i].first]
				[col + moving_block->show_cell()[i].second]
			= 1;
		}

	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << "\n";
	}

}