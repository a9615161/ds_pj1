#include<iostream>
#include<string>
#ifndef BLOCKS.H
#define BLOCKS.H
#include"blocks.h"
#endif
#include"blocks.cpp"
#include"T_blocks.cpp"
#include"J_blocks.cpp"
#include"L_blocks.cpp"
#include"Other_blocks.cpp"
#include<fstream>


#define max_m 1024

bool board[1024][1024];

void print(int m, int n);
void move_board_v( int to_erase,int m,int n);//move the rows above the to_erase down by one row
void check_line(int m,int n);

int main(int argc, char* argv[]) {

	std::string cmd;
	int m, n;
	int pos, slide;

	for(int arg_it =1; arg_it <argc; arg_it++) {

		std::fstream input;
		input.open(argv[arg_it], std::ios::in);

		input >> m >> n;

		while (input >> cmd && cmd != "End") {

			block* moving_block = nullptr;
			input >> pos >> slide;

			switch (cmd.c_str()[0]) {
			case 'T':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new t1(pos);
					break;
				case '2':
					moving_block = (block*)new t2(pos);
					break;
				case '3':
					moving_block = (block*)new t3(pos);
					break;
				case '4':
					moving_block = (block*)new t4(pos);
					break;
				}
				break;
			case 'L':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new L1(pos);
					break;
				case '2':
					moving_block = (block*)new L2(pos);
					break;
				case '3':
					moving_block = (block*)new L3(pos);
					break;
				case '4':
					moving_block = (block*)new L4(pos);
					break;
				default:moving_block = nullptr;
				}
				break;
			case 'J':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new J1(pos);
					break;
				case '2':
					moving_block = (block*)new J2(pos);
					break;
				case '3':
					moving_block = (block*)new J3(pos);
					break;
				case '4':
					moving_block = (block*)new J4(pos);
					break;
				default:moving_block = nullptr;
				}
				break;
			case 'S':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new S1(pos);
					break;
				case '2':
					moving_block = (block*)new S2(pos);
					break;

				default:moving_block = nullptr;
				}
				break;
			case 'I':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new I1(pos);
					break;
				case '2':
					moving_block = (block*)new I2(pos);
					break;

				default:moving_block = nullptr;
				}
				break;
			case 'Z':
				switch (cmd.c_str()[1]) {
				case '1':
					moving_block = (block*)new Z1(pos);
					break;
				case '2':
					moving_block = (block*)new Z2(pos);
					break;

				default:moving_block = nullptr;
				}
				break;
			case 'O':
				moving_block = (block*)new O(pos);
				break;
			
			default:moving_block = nullptr;
			}

			cmd.clear();

			if (moving_block == nullptr) continue;

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
			
			check_line(m, n);
			//print(m,n);
		//	moving_block->~block();
			delete moving_block;
		}
		
		//to do
		print(m, n);
		input.close();
	}


}


void print(int m, int n) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void move_board_v(int to_erase,int m,int n) {
	if (to_erase > m)return;
	for (int i = to_erase; i > 0; --i) {
		for (int j = 1; j <= n; ++j) {
			board[i][j] = board[i - 1][j];
		}
	}
}
void check_line(int m, int n) {
	for (int i = 1; i <= m; ++i) {
		int flag = 1;
		for (int j = 1; j <= n; ++j) {
			if (board[i][j] != 1)
				flag = 0;
		}
		if (flag)move_board_v(i, m, n);
	}
}