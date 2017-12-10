//    請撰寫一程式，輸入1-12的數字，程式將印出對應的月份日數(假設2月份為28日)，若輸入數字不為1-12請輸出"ERROR"。

#include <iostream>

using namespace std;

int main() 
{
	int m;
	cin >> m;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) 
	{
		cout << "31" << '\n';
	}
	else if (m == 2) 
	{
		cout << "28" << '\n';
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) 
	{
		cout << "30" << '\n';
	}
	else 
	{
		cout << "ERROR";
	}
}

/*    學弟打的 

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while (cin >> n)
	{
		switch (n)
		{
		case 2:
			cout << 28 << endl;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << 31 << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << 30 << endl;
		default:
			cout << "ERROR" << endl;
		}
	}
	return 0;
}
