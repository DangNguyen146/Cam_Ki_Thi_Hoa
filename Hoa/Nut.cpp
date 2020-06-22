#include "Nut.h"
void Nut::Nhap()
{
	cout << "1/Nhap Anh  2/Nhap text" << endl;
	cout << ">>";
	int t;
	cin >> t;
	switch (t)
	{
	case 1:
		cout << "Nhap image"<<endl;
		cout << "Da xong !";
		text = "";
		MauChu = 0;
		MauNen = 0;
		break;
	case 2:
		ThanhPhan::Nhap();
		break;
	}
}