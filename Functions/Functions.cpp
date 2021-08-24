#include<iostream>
using namespace std;


int Add(int a, int b); //прототип функции(объявление функции)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "Введите число a: "; cin >> a;
	cout << "Введите число b: "; cin >> b;

	cout << a << "+" << b << "=" << Add(a, b) << endl;//вызов функции
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}
	int Add(int a, int b) //реализация функции
	{
		//Addition - сложение
		return a + b;
	}

	int Sub(int a, int b)
	{
		//Subtraction - вычитание
		return a - b;
	}

	int Mul(int a, int b)
	{
		//Multiplication - умножение
		return a * b;
	}

	double Div(int a, int b)
	{
		//Division - деление
		return (double)a / b;
	}
