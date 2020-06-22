#include<iostream>
#include<string>
using namespace std;
#pragma once
class ThanhPhan
{
protected:
	string text;
	int MauChu;
	int MauNen;
public:
	virtual void Nhap();
	virtual int GetMauChu();
	virtual int GetMauNen();
};

