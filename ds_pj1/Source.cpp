#include<iostream>
#include<string>
#include"blocks.h"

#define max_m 1024

bool board[max_m][max_m];


void move_board_v(int row_u,int row_b,int dis);//up and bottem
int check_line(int row_b, int len);

int main() {

	std::string cmd;
	int m, n;
	int pos, slide;
	std::cin >> m >> n;
	
	while (std::cin >> cmd && cmd != "End") {
		std::cin >> pos >> slide;


	}



}