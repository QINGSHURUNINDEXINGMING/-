//    �м��g�@�{���A��J1-12���Ʀr�A�{���N�L�X������������(���]2�����28��)�A�Y��J�Ʀr����1-12�п�X"ERROR"�C

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

/*    �ǧ̥��� 

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
