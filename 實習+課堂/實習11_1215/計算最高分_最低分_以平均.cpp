//    main函式已輸入某班程式設計考試成績至陣列score
//    請參考課本範例撰寫函式maximum, minimum, average以計算班上最高分，最低分，以及全班平均。
//    請勿更動main函式。
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

/*    學弟寫的
 
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

