#include<iostream>
using namespace std;


int Add(int a, int b); //�������� �������(���������� �������)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "������� ����� a: "; cin >> a;
	cout << "������� ����� b: "; cin >> b;

	cout << a << "+" << b << "=" << Add(a, b) << endl;//����� �������
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}
	int Add(int a, int b) //���������� �������
	{
		//Addition - ��������
		return a + b;
	}

	int Sub(int a, int b)
	{
		//Subtraction - ���������
		return a - b;
	}

	int Mul(int a, int b)
	{
		//Multiplication - ���������
		return a * b;
	}

	double Div(int a, int b)
	{
		//Division - �������
		return (double)a / b;
	}
