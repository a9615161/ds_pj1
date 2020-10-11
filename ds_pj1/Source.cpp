#include<iostream>
#include<string>
#include"blocks.h"
#include<fstream>


#define max_m 1024

bool board[1024][1024];


void move_board_v(int row_u, int row_b, int dis);//up and bottem
int check_line(int row_b, int len);

int main(int argc, char* argv[]) {

	std::string cmd;
	int m, n;
	int pos, slide;

	for(int arg_it =1; arg_it <argc; arg_it++) {

		std::fstream input;
		input.open(argv[arg_it], std::ios::in);

		input >> m >> n;
		block* moving_block = nullptr;

		while (input >> cmd && cmd != "End") {
			input >> pos >> slide;
			switch (cmd.c_str()[0]) {
			case 't':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new t1(pos);
					break;
				case '2':
					//to do
					break;
				default:moving_block = nullptr;
				}
			default:break;
			}

			cmd.clear();

			if (moving_block != nullptr)
				moving_block->move_down(board, m, n);

			if (slide < 0)
				moving_block->move_left(board, m, n, slide * -1);
			else
				moving_block->move_right(board, m, n, slide);
			moving_block->move_down(board, m, n);

			for (int row = moving_block->get_x(),
				col = moving_block->get_y(),
				i = 0; i < moving_block->get_block_num(); i++) {

				board[row + moving_block->show_cell()[i].first]
					[col + moving_block->show_cell()[i].second]
				= 1;
			}

		}

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				std::cout << board[i][j] << " ";
			}
			std::cout << "\n";
		}

		input.close();
	}


}