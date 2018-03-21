//    請撰寫一程式，輸入一個小於15的整數，程式將它轉換成二進位數。例如輸入13，則輸出1101。

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter the integer (integer<=15): " << '\n';
	cin >> n;
	cout << n / 2 / 2 / 2 % 2 << n / 2 / 2 % 2 << n / 2 % 2 << n % 2 << '\n';
}

/*    學弟打的

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		string m = "";
		do
		{
			m = (char)((1 & n) + '0') + m;
			n >>= 1;
		} while (n>0);
		cout << m << endl;
	}
}
