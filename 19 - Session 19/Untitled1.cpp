#include <iostream>

class Table{
private:
	double height;
	double width;
public:
	Table(height_, width_){
		height = height_;
		width = width_;
		if(height<=0 || width<=0){
			abort();
		}
	}
	double getHeight(){return height;}
	double getWidth(){return width;}
};

class Ball{
private:
	double x;
	double y;
	double vx;
	double vy;
	Table* table;
public:
	Ball(double x_, double y_, double vx_, double vy_, Table* table_){
		x = x_;
		y = y_;
		vx = vx_;
		vy = vy_;
		table = table_;
		if(x<0 || y<0 || x>table->getWidth() || y>table->getHeight()){
			abort();
		}
	}
};
