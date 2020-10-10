#include<iostream>
#include <string.h>
#include<utility>

typedef std::pair<int, int>  cell_vet;

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

	void set_xy(int x_i, int y_i) { x = x_i, y = y_i; block_num = 0; }
	void set_block_num(int num) { block_num = num; }
	void set_cell(cell_vet* to_set) { cell = to_set; }

	cell_vet* show_cell() { return cell; }
	inline int get_x() {  return x; }
	inline int get_y() { return y; }
	inline int get_block_num(){ return block_num; }

	void move_down(bool** board, int m, int n);
	void move_left(bool** board, int m, int n, int dis);
	void move_right(bool** board, int m, int n, int dis);

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






