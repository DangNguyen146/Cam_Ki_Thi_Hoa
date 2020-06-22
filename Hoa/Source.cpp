#include<iostream>
#include"ThanhPhan.h"
#include"Nhan.h"
#include"Nut.h"
using namespace std;
int main()
{
	system("cls");
	cout << "Nhap so thanh phan: ";
	int n, t;
	cin >> n;

	//Câu a
	ThanhPhan* a[100];
	for (int i = 0; i < n; i++)
	{
		cout << "1/Nhan 2/Nut" << endl;
		cin >> t;
		switch (t)
		{
		case 1:
			a[i] = new Nhan();
			break;
		case 2:
			a[i] = new Nut();
			break;
		}
		a[i]->Nhap();
	}
	//Câu b
	cout << "Mau bo tuc truoc tiep:" << endl;
	if (a[0]->GetMauChu() == (a[0]->GetMauNen() - 6) || (a[0]->GetMauChu() - 6) == a[0]->GetMauNen())
		cout << "Co phoi mau bo tuc truc tiep" << endl;
	else
		cout << "Khong co" << endl;
	//Cau c
	cout << "Kiem tra mau nen" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cout << "1/ Co phoi mau don sac" << endl;;
		if ((i + 1 < n) && (a[i]->GetMauNen() == (a[i + 1]->GetMauNen() - 6) || (a[i]->GetMauNen() - 6) == a[i + 1]->GetMauNen()))
		{
			cout << "a[" << i << "] a[" << i + 1 << "]: ";
			cout << "2/Phoi mau bo tuc truc tiep" << endl;
		}
		if (i + 2 < n)
		{
			int b[3];
			b[0] = a[i]->GetMauNen();
			b[1] = a[i + 1]->GetMauNen();
			b[2] = a[i + 2]->GetMauNen();
			for (int m = 0; m < 2; m++)
				for (int j = m; j < 3; j++)
					if (b[m] < b[j])
						swap(b[m], b[j]);
			if (b[0] - b[1] == 1 && b[1] - b[2] == 1)
			{
				cout << "a[" << i << "] a[" << i + 1 << "]:" << endl;
				cout << "3/Phoi Mau tuong dong" << endl;
			}
		}
	}
	return 0;
}