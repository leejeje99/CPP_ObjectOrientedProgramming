#include <iostream>
#include <cmath>
using namespace std;
// --------------------------------------����---------------------------------------------
/*
1�� 
int square(int);

int main() {
	int x;
	x = 5;
	cout << square(x) << endl;
}

int square(int a) {
	return a * a;
}
*/

/*
* 2��
int get_num();
int myadd(int x, int y);
int mysub(int x, int y); 
int mymul(int x, int y);
float mydiv(int x, int y);

int getdata();

int main() {
	int x, y;
	x = getdata();
	y = getdata();

	cout << "x = " << x << ", y =" << y << endl;
	cout << "x + y = " << myadd(x, y) << endl;
	cout << "x - y = " << mysub(x, y) << endl;
	cout << "x * y = " << mymul(x, y) << endl;
	cout << "x / y = " << mydiv(x, y) << endl;

	return 0;
}

int getdata() {
	int num;
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> num;
	return num;
}

int myadd(int x, int y) {
	return x + y;
}

int mysub(int x, int y) {
	return x - y; 
}

int mymul(int x, int y) {
	return x * y;
}

float mydiv(int x, int y) {
	return 1.0 * x / y;
}
*/

/*
3��
int main() {
	double value; 
	value = 5; 
	cout << sqrt(value) <<endl;
	cout << exp(value) <<endl;
	cout << log(value) <<endl;
	cout << cos(value) <<endl;

	return 0; 

}
*/
/*
4��
void applePrice(int a = 1000) {
	cout << "price of an apple is " << a << endl;

}

void main() {
	applePrice(1500);
	applePrice(500);
	applePrice();
	applePrice();

	return 0; 
}
*/

// --------------------------------------����---------------------------------------------
/*
* 1�� 
int getdata();
int myadd(int x, int y);
int mysub(int x, int y);
int mymul(int x, int y);
float mydiv(int x, int y);

int addmul(int	x, int	y, int	z);//	return	value:	(x	+ y)	*	z
float muldiv(int	x, int	y, int	z);	//	return	value:	(x	* y)	/	z
int addmuladd(int	x, int	y, int	z);	//	return	value:	(x + y)	*	(y	+	z)
float subdivsub(int	x, int	y, int	z);	//	return	value:	(x - y) / (y - z)


int main() {
	int x, y, z;
	x = getdata();
	y = getdata();
	z = getdata();

	cout << 'x : ' << x << ", y : " << y << ", z : " << z << endl;
	cout << "( x + y ) * z =" << addmul(x, y, z) << endl;
	cout << "( x * y ) / z =" << muldiv(x, y, z) << endl;
	cout << "( x + y ) * ( y + z ) =" << addmuladd(x, y, z) << endl;
	cout << "( x - y ) / ( y - z ) =" << subdivsub(x, y, z) << endl;
}


int getdata() {
	int num;
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> num;
	return num;
}

int addmul(int	x, int	y, int	z) {
	return mymul(myadd(x, y), z);
}

float muldiv(int x, int	y, int	z) {
	return mydiv(mymul(x, y), z);
}

int addmuladd(int	x, int	y, int	z) {
	return mymul(myadd(x, y), myadd(y, z));
}

float subdivsub(int	x, int	y, int	z) {
	return mydiv(mysub(x, y), mysub(y, z));
}	

int myadd(int x, int y) {
	return x + y;
}

int mysub(int x, int y) {
	return x - y;
}

int mymul(int x, int y) {
	return x * y;
}

float mydiv(int x, int y) {
	return 1.0 * x / y;
}

*/
/*
2��
int Getdata();
int Print_DOB(int year = 1900, int month = 1, int day = 1);

int main() {
	Print_DOB();

	int x, y, z;
	x = Getdata();
	y = Getdata();
	z = Getdata();

	Print_DOB(x, y, z);

	return 0;
}

int Getdata() {
	int num;
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> num;
	return num;
}

int Print_DOB(int year, int month, int day) {
	cout << "��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�" << endl;
	return 0;
}
*/
/* 3�� 

void calc(double, double);

int main() {
	double a, b;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> b;

	calc(a, b);
	return 0;
}

void calc(double x, double y) {
	cout << x << endl;
	cout << y << endl;
	cout << "Rounding up number of " << x << ":" << ceil(x) << endl;
	cout << "Rounding down number of " << x << ":" << floor(x) << endl;
	cout << "Rounding number of " << x << ":" << round(x) << endl;

	cout << x << "-th root of" << y << ":" << pow(x, 1/y) << endl;
	cout << "|" << x << "-" << y << "| = " << abs(x-y)<< endl;

}
*/

/* 4��
int x, y;

void getdata(int& x, int& y) {
	cout << "���ڸ� �Է����ּ��� : ";
	cin >> x;
	cout << "���ڸ� �Է����ּ��� : ";
	cin >> y;
}

void swap_call_by_value(int x, int y) {
	x = y;
	y = x; 
	cout << "swap_call_by_value �Լ� ���� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
}

void swap_call_by_reference(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
	cout << "swap_call_by_reference �Լ� ���� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
}

int main() {
	getdata(x, y);
	
	cout << "swap_call_by_value �Լ� ���� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	
	swap_call_by_value(x, y);

	cout << "swap_call_by_reference �Լ� ���� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;

	swap_call_by_reference(x, y);
}
*/