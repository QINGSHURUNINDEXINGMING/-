//    main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore
//    �аѦҽҥ��d�Ҽ��g�禡maximum, minimum, average�H�p��Z�W�̰����A�̧C���A�H�Υ��Z�����C
//    �Фŧ��main�禡�C
//    
//    Write three functions maximum, minimum, average to compute and return the maximum, minimun and average of an integer array.
//    Please do not modify the main function.

#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int a[], int n) 
{
	int max = a[0];
	for (int i = 1; i<n; i++)
	{
		if (max<a[i]) max = a[i];
	}
	return max;
}

int minimum(int a[], int n) 
{
	int min = a[0];
	for (int i = 1; i<n; i++)
	{
		if (min>a[i]) min = a[i];
	}
	return min;
}

double average(int a[], int n)
{
	int total = 0;

	for (int i = 0; i<n; i++)
	{
		total += a[i];
	}
	return (double)total / n;
}

int main()
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++)
	{
		cin >> score[i];
	}
	cout << maximum(score, arraySize) << endl;
	cout << minimum(score, arraySize) << endl;
	cout << fixed << setprecision(2) << average(score, arraySize) << endl;
}

/*    �ǧ̼g��
 
#include <bits/stdc++.h>
using namespace std;

int maximum(int s[], int as)
{
	int max_ = s[0];
	for (int i = 1; i < as; i++)
		max_ = max(max_, s[i]);
	return max_;
}

int minimum(int s[], int as)
{
	int min_ = s[0];
	for (int i = 1; i < as; i++)
		min_ = min(min_, s[i]);
	return min_;
}

double average(int s[], int as)
{
	double avg = 0;
	for (int i = 0; i<as; i++)
		avg += s[i];
	return avg / as;
}

int main()
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++) 
	{
		cin >> score[i];
	}
	cout << maximum(score, arraySize) << endl;
	cout << minimum(score, arraySize) << endl;
	cout << fixed << setprecision(2) << average(score, arraySize) << endl;
}

