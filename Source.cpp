#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
float tinhchuvihcn(int cd, int cr);
float dientichhcn(int cd, int cr);
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
	cout << "chu vi hinh chu nhat =" << tinhchuvihcn(a, b);
	cout << "dien tich hinh chu nhat=" << dientichhcn(a, b);
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
void phepCong(){
	srand(time(NULL));
	int a=rand()%100+1;
	int b=rand()%100+1;
	cout <<"so a: "<<a<<endl;
	cout <<"so b: "<<b<<endl;
	cout<<:Ket qua la:"<<a+b<<endl;
}
bool kiemTra(intkq,int a, int b){
	if(kq==(a+b))
		return true;
	else
		return false;
}
void phepTru(){
	srand(time(NULL));
	int a=rand()%100+1;
	int b=rand()%100+1;
	cout <<"so a: "<<a<<endl;
	cout <<"so b: "<<b<<endl;
	cout<<:Ket qua la:"<<a-b<<endl;
}
bool kiemTra(intkq,int a, int b){
	if(kq==(a-b))
		return true;
	else
		return false;
}
