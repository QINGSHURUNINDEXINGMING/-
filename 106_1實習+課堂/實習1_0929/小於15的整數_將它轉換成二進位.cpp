//    �м��g�@�{���A��J�@�Ӥp��15����ơA�{���N���ഫ���G�i��ơC�Ҧp��J13�A�h��X1101�C

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter the integer (integer<=15): " << '\n';
	cin >> n;
	cout << n / 2 / 2 / 2 % 2 << n / 2 / 2 % 2 << n / 2 % 2 << n % 2 << '\n';
}

/*    �ǧ̥���

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
