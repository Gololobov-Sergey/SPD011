#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<typeinfo>
using namespace std;

//type name(parametr)
//{
//	oper;
//}


void starline(int n = 10, char t = '*')
{
	for (size_t i = 0; i < n; i++)
	{
		cout << t;
	}
	cout << endl;
}


template<class T1, class T2>
auto Sum(T1 a, T2 b)
{
	return a + b;
}



bool isEven(int a)
{
	return a % 2 == 0;
}

template<class T>
void showArr(T *a, int n)
{
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
void fillArr(T *a, int n, int min = 0, int max = 9)
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
	for (size_t i = 0; i < n - 1; i++)
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
	if (n > 1)
		num(n - 1);
}

void num_n(int n)
{
	if (n > 1)
		num_n(n - 1);
	cout << n << " ";
}

double pow_my(int a, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	if (n < 0)
		return 1. / (a * pow_my(a, abs(n) - 1));
	return a * pow_my(a, n - 1);
}

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

void my_swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

template<class T>
T* addElemArray(T *a, int *n, T num)
{
	T *p1 = new T[*n + 1];
	for (size_t i = 0; i < *n; i++)
	{
		p1[i] = a[i];
	}
	p1[*n] = num;
	delete[]a;
	(*n)++;
	return p1;
}

template<class T>
T* delElemArray(T *a, int *n)
{
	T* p1 = new T[*n - 1];
	for (size_t i = 0; i < *n-1; i++)
	{
		p1[i] = a[i];
	}
	delete[]a;
	(*n)--;
	return p1;
}


template<class T>
T* addElemArrayPos(T *a, int *n, T num, int pos = 0)
{
	T *p1 = new T[*n + 1];
	for (size_t i = 0; i < pos; i++)
	{
		p1[i] = a[i];
	}
	p1[pos] = num;
	for (size_t i = pos; i < *n; i++)
	{
		p1[i+1] = a[i];
	}
	delete[]a;
	(*n)++;
	return p1;
}