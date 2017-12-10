//    (找出最小的整數) 請設計一個使用for敘述的程式，能夠找出幾個整數的最小值。
//    假設讀取的第一個數字代表後續數字的個數。
//
//    例：
//
//    輸入 6 10 3 15 21 26 14
//
//    輸出 3

#include <iostream>

using namespace std;

int main() 
{
	int counter , number, min;
	cin >> counter>>min;
	for (int i = 1; i <= counter - 1; i++) 
	{
		cin >> number;
		if (number<min) 
		{
			min = number;
		}
	}
	cout << min;
}

/*    學弟寫的
#include <iostream> 
using namespace std;

int main()
{
	int count;
	int num;
	int min;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> num;
		if (i == 1)
			min = num;
		else if (min > num)
			min = num;
	}
	cout << min;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		long long int min_, c;
		cin >> c;
		min_ = c;
		for (int i = 1; i < n; i++) 
		{
			cin >> c;
			min_ = min(c, min_);
		}
		cout << min_ << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int min_, s;
		cin >> min_;
		for (int i = 1; i< n; i++) 
		{
			cin >> s;
			min_ = min(min_, s);
		}
		cout << min_ << endl;
	}
	return 0;
}

