//    ��J��ӥ����m�Bn�A�M���Jn�ӥ����a1, a2, �K, an�C�έpa1, a2, �K, an�����h�־�ƪ��Ȥp��m�C
//    �ҡG
//    ��J  
//    7 5 1 9 8 14 7
//    ��X
//    1

#include<iostream>

using namespace std;

int main() 
{
	int n, m, n1, counter = 0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
	{
		cin >> n1;
		if (n > n1) 
		{
			counter++;
		}
	}
	cout << counter;
}

/*�ǧ̼g��
 
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int count = 0, amount, input;
		cin >> amount;
		for (int i = 0; i < amount; i++) 
		{
			cin >> input;
			if (input<n)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}

