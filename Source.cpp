#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
float tinhchuvihcn(int cd, int cr);
float dientichhcn(int cd, int cr);
int main()
{
	int a, b;
	cout << "Mời bạn nhập a: ";
	cin >> a;
	cout << "Mời bạn nhập b: ";
	cin >> b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
	cout << "Tong 2 số a+b= "<< tong(a,b);
	cout << "hieu 2 số a-b= "<< hieu(a,b);
	cout << "chu vi hinh chu nhat =" << tinhchuvihcn(a, b);
	cout << "dien tich hinh chu nhat=" << dientichhcn(a, b);
	system("pause");
	return 0;
}
int tong(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}
int hieu(int a, int b)
{
	int s = 0;
	s = a - b;
	return s;
}
float tinhchuvihcn(int cd, int cr)
{
	float cv = (cd + cr) * 2;
	return cv;
}
float dientichhcn(int cd, int cr)
{
	float dt = cd * cr;
	return dt;
}