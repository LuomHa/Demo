#include <iostream>
#define pi 3.14;
using namespace std;

float tinhchuvihinhtron(int a)
float dientichhinhtron(int a)
int main()
{
	int a;
	cout << "Mời bạn nhập a: ";
	cin >> a;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
	cout << "chu vi hinh tron =" << tinhchuvihinhtron(a);
	cout << "dien tich hinh tron=" << dientichhinhtron(a);
	system("pause");
	return 0;
}
float tinhchuvihinhtron(int a)
{
	float cv = 2*a*pi;
	return cv;
}
float dientichhinhtron(int a)
{
	float dt = pi*a*a;
	return dt;
}

