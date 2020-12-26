#include<iostream>
#include<ctime>
using namespace std;

int main()
{

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

	srand(time(0));

	const int n = 10;

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

	int a = 5, b = 13, c = 7;
	int d = b * b - 4 * a*c;
	cout << d << endl;
	if (d > 0)
	{
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << endl;
		cout << x2 << endl;
	}

	system("pause");
}