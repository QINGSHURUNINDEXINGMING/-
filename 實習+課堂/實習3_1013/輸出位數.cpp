//    ��J�@�Ӥ��W�L109������ơA��X������ơC�Ҧp�G12735����ƬO5�B0����ƬO0�C�Ф��n�ϥΥ���ƾǨ�ơA�u�ϥκ�ƹB��M�j��

#include<iostream>

using namespace std;

int main() 
{
	int n, counter=0;
	cin >> n;
	while (n != 0) 
	{
		n /= 10;
		counter++;
	}
	cout << counter;
}

/*�ǧ̼g��

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string n;
	while (cin >> n) 
	{
		if (n == "0")
			cout << 0 << endl;
		else
			cout << n.length();
	}
} 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	while (cin >> n)
	{
		int total = 0;
		for (; n>0; total++)
			n /= 10;
		cout << total << endl;
	}
	return 0;
}

