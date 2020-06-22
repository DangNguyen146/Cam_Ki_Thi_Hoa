#include"ThanhPhan.h"
#include<iostream>
#include<string>
using namespace std;
#pragma once
class Nut:public ThanhPhan
{
private:
	string HinhAnh;				//Thắc mắc lên phường
public:
	Nut() {}
	void Nhap();
};

