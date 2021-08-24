#include<iostream>
using namespace std;


void FillRand(int arr[], const int n); //Функция заполнения рандомными числами
//Два параметра - сам массив и размер этого массива (const int n - количество элементов)
//Все это - прототип функции

void Print(int arr[], const int n);//Функция вывода на экран
void Sort(int arr[], const int n);//функция сортировки
int Sum(int arr[], const int n);//Сумма элементов массива
double Avg(int arr[], const int n);//Среднее арифметическое элементов массива
int MinValueIn(int arr[], const int n);//Минимальное значение массива
int MaxValueIn(int arr[], const int n);//Максимальное значение массива
void ShiftLeft(int arr[], const int n);//Сдвиг влево на определенное количество символов
void ShiftRight(int arr[], const int n);//Сдвиг вправо на определенное количество символов




void main()
{
	setlocale(LC_ALL, "ru");
	
	const int n = 5;
	int arr[n];
	
	FillRand(arr, n);//заполнить его случайными числами
	Print(arr, n);//выводим массив на экран
	Sort(arr, n);//сортировка массива
	Print(arr, n);//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(arr, n) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(arr, n) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(arr, n) << endl;//Максимальное значение массива
	ShiftLeft(arr, n);//Сдвиг влево на определенное количество символов
	ShiftRight(arr, n);//Сдвиг вправо на определенное количество символов
	

	



	///////////////////////////////////////////////////////

	const int B_SIZE = 8;
	int brr[B_SIZE];
	
	FillRand(brr, B_SIZE);//заполнить его случайными числами
	Print(brr, B_SIZE);//выводим массив на экран
	Sort(brr, B_SIZE);//сортировка массива
	Print(brr, B_SIZE);	//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(brr, B_SIZE) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, B_SIZE) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(brr, B_SIZE) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(brr, B_SIZE) << endl;//Максимальное значение массива
	ShiftLeft(brr, B_SIZE);//Сдвиг влево на определенное количество символов
	ShiftRight(brr, B_SIZE);//Сдвиг вправо на определенное количество символов
	


	
}

void FillRand(int arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	} cout << endl;
}

void Print(int arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}

void Sort(int arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int  i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
double Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}

int MaxValueIn(int arr[], const int n)
{
	int max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}

void ShiftLeft(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		int c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}

	//вывод обновленного массива
	cout << "Массив, сдвинутый влево: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
}

void ShiftRight(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		int d = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}

	//вывод массива
	cout << "Массив, сдвинутый вправо: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl << endl;
}