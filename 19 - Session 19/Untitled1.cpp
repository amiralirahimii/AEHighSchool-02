#include <iostream>

using namespace std;

class Table{
private:
	double height;
	double width;
public:
	Table(double height_,double width_){
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
	
	void move(double dt){
		x = x + dt*vx;
		y = y + dt*vy;
		while(x<0 || y<0 || x>table->getWidth() || y>table->getHeight()){
			if(x<0){
				x = -x;
				vx = -vx;
			}
			if(x>table->getWidth()){
				x = 2*table->getWidth() - x;
				vx = -vx;
			}
			if(y<0){
				y = -y;
				vy= -vy;
			}
			if(y>table->getHeight()){
				y = 2*table->getHeight() - y;
				vy = -vy;
			}
		}
	}
	
	void print(){
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
	}
};

int main(){
	Table table(10, 50);
	Ball ball(5, 10, 6, 12, &table);
	ball.move(10);
	ball.print();
}
