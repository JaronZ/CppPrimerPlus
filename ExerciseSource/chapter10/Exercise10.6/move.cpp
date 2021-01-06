#include<iostream>
#include"move.hpp"
using namespace std;
Move::Move(double a,double b){
	x=a;
	y=b;
}

void Move::showmove()const{
	cout<<"("<<x<<","<<y<<")";
}

Move Move::add(const Move & m)const{
	return Move(m.x+x,m.y+y);
}

void Move::reset(double a,double b){
	x=a;
	y=b;
}