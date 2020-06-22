#include "ThanhPhan.h"
void ThanhPhan::Nhap()
{
	cout << "text>> ";
	getline(cin, this->text);
	//Màu 12
	cout << "1/Red 2/Orange 3/Yellow 4/Sring Green 5/ Gree 6/Turquoise\n7/Cyan 8/Ocean 9/Blue 10/Violet 11/Magenta 12/Raspberry" << endl;
	
	cout << "MauChu>> ";
	cin >> this->MauChu;
	cout << "MauNen>> ";
	cin >> this->MauNen;
}
int ThanhPhan::GetMauChu()
{
	return this->MauChu;
}
int ThanhPhan::GetMauNen()
{
	return this->MauNen;
}