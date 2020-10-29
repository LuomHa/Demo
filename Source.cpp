#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int tinhdientichhinhvuong(int a);
int tinhchivihinhvuong(int a);
	
int main()
{
	int a, b;
	cout << "Mời bạn nhập a: ";
	cin >> a;
	cout << "Mời bạn nhập b: ";
	cin >> b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
	cout << "Hieu 2 số a-b= "<< hieu(a,b);
	cout<< " Thuong 2 số a/b="<<thuong(a,b);
	cout << "Tong 2 số a+b= "<< tong(a,b);
	cout << "Tich 2 số a+b= "<< tich(a,b);
	cout << "chu vi hinh vuong canh a " << tinhchivihinhvuong(a);
	cout << "dien tich hinh vuong canh a " << tinhdientichhinhvuong(a);
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

int thuong(int a, int b)
{
	int s = 0;
	s = a / b;
	return s;
}

int tich(int a, int b)
{
	int s = 0;
	s = a * b;
	return s;
}

int tinhchivihinhvuong(int a){
	int s = 0;
	S=a*2;
	return s;

}
int tinhdientichhinhvuong(int a){
	int s = 0;
	S=a*a;
	return s;

}