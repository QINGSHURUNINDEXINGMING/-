//    main函式已輸入某班程式設計考試成績至陣列score
//    請撰寫函式vertical_barchart以統計各組距(0-9, 10-19, …,90-99, 100)人數，並依序(由左至右自分數低至高的組)印出各組人數垂直長條圖。請勿更動main函式。
//    
//    Write function vertical_barchart to calcute and display the histogram of the grade distribution vertically. 
//    Please do not modify the main function.
//  
//    輸出範例如下(長條圖前勿留空行，圖的高度為各組中最多人數)：

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

void verticalbar(int a[], int n)
{
	int b[11] = {};
	for (int k = 0; k<n; k++)
	{
		b[a[k] / 10]++;
	}
	int max = maximum(b, 11);
	for (int s = max; s>0; s--)
	{
		for (int i = 0; i<11; i++)
		{
			if (b[i] >= s)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

int main() 
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++) 
	{
		cin >> score[i];
	}
	verticalbar(score, arraySize);
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

void verticalbar(int s[], int as) 
{
	int f[11] = { 0 };
	for (int i = 0; i < as; i++)
		f[s[i] / 10]++;

	// y max
	int hight = f[0];
	for (int i = 1; i < 11; i++)
		hight = max(hight, f[i]);

	//output
	for (int y = 0; y < hight; y++) 
	{
		for (int x = 0; x < 11; x++)
		{
			cout << (hight - y > f[x] ? " " : "*");
		}
		cout << endl;
	}
}

int main()
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++)
	{
		cin >> score[i];
	}
	verticalbar(score, arraySize);
} 

