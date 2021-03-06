#include<iostream>
#ifndef BLOCKS.H
#define BLOCKS.H
#include"blocks.h"
#endif
#include<utility>
#define max_m 1024
typedef std::pair<int, int>  cell_vet;


//note that x infer to row(downward) and
	//		y infer to col(rightward)
class block
{
public:
	block(int start_col) { 
		x = -3;
		y = start_col;
		block_num = 0;
		cell = nullptr;
	};
	~block() {
		if(cell!=nullptr)
			delete[] cell;

	}

	void set_xy(int x_i, int y_i) { x = x_i, y = y_i;  }
	void set_block_num(int num) { block_num = num; }
	void set_cell(cell_vet* to_set) { cell = to_set; }

	cell_vet* show_cell() { return cell; }
	cell_vet get_cell(int i) { return cell[i]; }
	inline int get_x() {  return x; }
	inline int get_y() { return y; }
	inline int get_block_num(){ return block_num; }

	void move_down (bool board[max_m][max_m], int m, int n);
	void move_left (bool board[max_m][max_m], int m, int n, int dis);
	void move_right(bool board[max_m][max_m], int m, int n, int dis);

private:
	cell_vet* cell;
	int x, y;//the pt of the left up
	int block_num;
};

class t1:private block
{
public:
	t1( int start_col);
private:
};
class t2 :private block
{
public:
	t2(int start_col);
private:
}; 
class t3 :private block
{
public:
	t3(int start_col);
private:
};
class t4 :private block
{
public:
	t4(int start_col);
private:
};

class L1 :private block
{
public:
	L1(int start_col);
private:
};
class L2 :private block
{
public:
	L2(int start_col);
private:
};
class L3 :private block
{
public:
	L3(int start_col);
private:
};
class L4 :private block
{
public:
	L4(int start_col);
private:
};

class J1 :private block
{
public:
	J1(int start_col);
private:
};
class J2 :private block
{
public:
	J2(int start_col);
private:
};
class J3 :private block
{
public:
	J3(int start_col);
private:
};
class J4 :private block
{
public:
	J4(int start_col);
private:
};

class S1 :private block
{
public:
	S1(int start_col);
private:
};
class S2 :private block
{
public:
	S2(int start_col);
private:
};

class Z1 :private block
{
public:
	Z1(int start_col);
private:
};
class Z2 :private block
{
public:
	Z2(int start_col);
private:
};

class I1 :private block
{
public:
	I1(int start_col);
private:
};
class I2 :private block
{
public:
	I2(int start_col);
private:
};
class O :private block
{
public:
	O(int start_col);
private:
};









