//    ��J���ơA��X���G�ƪ��M�B�n�B�t�P�ӡC �Ҧp�G�ϥΪ̿�J 7 9�A�h��X�p�U�C

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Please enter the two integers: " << '\n' << "Example: 23 46" << '\n';
	cin >> a >> b;
	cout << '\n' << a + b << '\n' << a*b << '\n' << a - b << '\n' << a / b << endl;
}

/*    �ǧ̼g�� 

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl << a*b << endl << a - b << endl << a / b << endl;
	}
}
