#include<iostream>
#include<ctime>
#include<iomanip>
#include<typeinfo>
#include"MyFunc.h"
using namespace std;



int main()
{
	srand(time(0));

	//int a = 5;
	//int b = 8;

	//int *pa = &a;
	//cout << "&a = " << pa << endl;
	///*cout << " a = " << a << endl;
	//*pa = 122;
	//cout << " a = " << a << endl;*/
	//cout << pa + 1 << endl;


	/*int *pb = &b;
	cout << "&b = " << pb << endl;
	cout << " b = " << b << endl;
	
	*pb = 500;
	cout << " b = " << b << endl;*/

	//cout << (pa < pb) << endl;

	/*int *pc = nullptr;
	if(pc)
		cout << *pc << endl;
	pc = &a;*/

	/*const int n = 10;
	int a[n];
	fillArr(a, n);
	showArr(a, n);

	int *p = a;
	for (size_t i = 0; i < n; i++)
	{
		cout << *(p + i)  << " ";
	}
	cout << endl;

	for (int* pi = a; pi < &a[n]; pi++)
	{
		cout << *pi << " ";
	}*/

	/*int a = 5, b = 4;
	cout << a << " " << b << endl;
	my_swap(&a, &b);
	cout << a << " " << b << endl;
	int *pa = &a;

	char t = 'r';
	char *pt = &t;

	double d = 4.4;
	double *pd = &d;

	cout << sizeof(pa) << endl;
	cout << sizeof(pd) << endl;
	cout << sizeof(pt) << endl;*/

	int n;
	cin >> n;
	int *p = new int[n];

	fillArr(p, n);
	showArr(p, n);

	p = addElemArrayPos(p, &n, 100);

	showArr(p, n);

	p = delElemArray(p, &n);
	showArr(p, n);


	delete []p;


	
	/*cout << a << endl;
	cout << typeid(a).name() << endl;
	cout << sizeof(a) << endl;
	cout << &a << endl;*/


	// cout << fact_r(10) << endl;
	/*cout << pow_my(2, -3) << endl;
	cout << fibo(7) << endl;
	starline();
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


