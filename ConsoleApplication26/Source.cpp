#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A[10];
	int ch;
	for (int i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 1000;
		cout << "A[" << i << "]= " << A[i] << endl;
	}
	cout << "Выберите каким методом хотите:" << endl;
	cout << "1 метод пурька " << endl;
	cout << "2 прямым выьором " << endl;
	cout << "3 cпрямыми вставками" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		int temp;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 9; j > i; j--)
			{
				if (A[j - 1] > A[j])
				{
					temp = A[j - 1];
					A[j - 1] = A[j];
					A[j] = temp;
				}
			}
		}
	}
		break;
	case 2:
	{
		int  temp;
		int min;
		int s;
		for (int i = 0; i < 9; i++)
		{
			min = i;
			for (int j = i + 1; j < 10; j++)
			{
				if (A[j] < A[min])
					min = j;
			}
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	}
	break;
	case 3:
	{
		int v;
		int index;
		for (int i = 1; i < 10; i++)
		{
			v = A[i];
			index = i;
			while ((index > 0) && (A[index - 1] > v))
			{
				A[index] = A[index - 1];
				index--;
			}
			A[index] = v;
		}
	}
	break;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "A[" << i << "]= " << A[i] << endl;
	}
}