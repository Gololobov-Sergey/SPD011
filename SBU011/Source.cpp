#include<iostream>
#include<ctime>
#include<iomanip>
#include<typeinfo>
using namespace std;

//type name(parametr)
//{
//	oper;
//}

//void starline()
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}

//void starline(int n = 10)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}

void starline(int n = 10, char t = '*')
{
	for (size_t i = 0; i < n; i++)
	{
		cout << t;
	}
	cout << endl;
}


int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

template<class T1, class T2>
auto Sum(T1 a, T2 b)
{
	return a + b;
}

float avg(int a, int b, int c)
{
	return (a + b + c) / 3.;
}

bool isEven(int a)
{
	return a % 2 == 0;
}

template<class T>
void showArr(T a[], int n)
{
	cout << typeid(T).name() << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

template<class T>
void showArr2D(T a[][10], int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

template<class T>
void fillArr(T a[], int n, int min = 0, int max = 9)
{
	if ((string)typeid(T).name() == "char")
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 26 + 65;
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}


void bubbleSortArr(int a[], int n)
{
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void selectionSortArr(int a[], int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		int imin = i;
		for (size_t j = i + 1; j < n; j++)
		{
			if (a[j] < a[imin])
				imin = j;
		}
		swap(a[i], a[imin]);
	}
}


int Increment(int a)
{
	//
	return ++a;
}

int fact(int n)
{
	int f = 1;
	for (size_t i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}


int fact_r(int n)
{
	if (n == 1)
		return 1;
	return n * fact_r(n - 1);
}

void num(int n)
{
	cout << n << " ";
	if(n > 1)
		num(n - 1);
}

void num_n(int n)
{
	if (n > 1)
		num_n(n - 1);
	cout << n << " ";
}

int main()
{
	srand(time(0));

	// cout << fact_r(10) << endl;
	num_n(5);
	/*starline();
	starline(20);
	starline(30, '&');

	int arr[10][10] = {0};
	int row = 3, col = 8;
	showArr2D(arr, row, col);*/
	//auto a = 0;
	// << typeid(a).name() << endl;
	//int a = 5;
	//cout << a << endl; //5
	//a = Increment();
	//cout << a << endl; //

	//starline();
	//starline();
	//starline();
	//float a = 4, b = 5;
	//int c = Sum(3, 5);
	//cout << Sum(3.8, 5.5) << endl;
	/*const int n = 10;
	int a[n], c = 0;
	fillArr(a, n);*/
	//fillArr(a, n, 50, 100);
	//showArr(a, n);
	/*for (size_t i = 0; i < n; i++)
	{
		if (isEven(a[i]))
			c++;
	}*/
	//cout << c << endl;
	//bubbleSortArr(a, n);
	//showArr(a, n);

	/*int n;
	cin >> n;*/

	/*for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				cout << " ";
			}

			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}*/

	/*for (int i = pow(10, n-1); i < pow(10,n); i++)
	{
		int m = i, s = 0;
		while (m > 0)
		{
			int r = m % 10;
			s += pow(r, n);
			m /= 10;
		}
		if (s == i)
		{
			cout << i << endl;
		}
	}*/

	/*int h1, h2, m1, m2, s1, s2, c = 0;
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				h1 = h / 10;
				h2 = h % 10;
				m1 = m / 10;
				m2 = m % 10;
				s1 = s / 10;
				s2 = s % 10;
				if (h1 == s2 && h2 == s1 && m1 == m2)
				{
					cout << h1 << h2 << ":" << m1 << m2 << ":" << s1 << s2 << endl;
					c++;
				}
			}

		}
	}
	cout << c << endl;*/

	

	//const int n = 10;

	/*int arr[n], arr2[n], c = 0, k = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 20 + 1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			arr2[c++] = arr[i];
	}*/


	/*int max = arr[0], imax = 0, min = arr[0], imin = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}

	int t = arr[imin];
	arr[imin] = arr[imax];
	arr[imax] = t;*/

	/*for (int i = 0; i < c; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;*/

	//cout << imax << endl;

	/*int a = 5, b = 13, c = 7;
	int d = b * b - 4 * a*c;
	cout << d << endl;
	if (d > 0)
	{
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << endl;
		cout << x2 << endl;
	}*/


	///// 23.01.2021
	// type name[row][col]
	//const int row = 5, col = 5;
	//int arr[row][col];// = { 2,4,6,{7},6,87 };
	//arr[0][1] = 5;

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 9;
		}
	}*/

	/*int max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}*/

	/*for (size_t i = 0; i < row; i++)
	{
		int sumRow = 0;
		for (size_t j = 0; j < col; j++)
		{
			sumRow += arr[i][j];
			cout << setw(5) << arr[i][j];
		}
		cout << setw(2) << "| " << setw(5) << sumRow << endl;
	}

	int arrCol[col];
	for (size_t i = 0; i < col; i++)
	{
		int sumCol = 0;
		for (size_t j = 0; j < row; j++)
		{
			sumCol += arr[i][j];
		}
		arrCol[i] = sumCol;
	}

	for (size_t i = 0; i < col + 1; i++)
	{
		cout << setw(5) << "-----";
	}
	cout << endl;

	int total = 0;
	for (size_t i = 0; i < col; i++)
	{
		cout << setw(5) << arrCol[i];
		total += arrCol[i];
	}
	cout << setw(2) << "| " <<  setw(5) << total << endl << endl;*/

	//cout << max << endl;


	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;

	cout << endl;

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col - 1 - i; j++)
		{
			swap(arr[i][j], arr[col - 1 - j][row - 1 - i]);
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}*/

	//int a[][layer][row][col];

	system("pause");
}


