//    �q�����@�ر`�����ΡA�N�O�b�@��Ʀr����X�̤j���Ʀr (�]�N�O�@�s�Ʀr�����̤j��)�C 
//    �Ҧp�A�{���|����J�C��~�ȭ����P��ƶq�A�M��M�w�P���v�ɪ��u�Ӫ̡C�P��̦h���H���N���Ĺ�o�Ӷ��v�ɡC
//    �м��g�@�Өϥ�while�ԭz��C++�{���A�ÿ�J10�ӼƦr�A�M��M�w�æL�X�䤤�̤j���Ʀr�C  
//    ��J�G10�Ӿ�� 
//    ��X�G�̤j���

#include <iostream>
using namespace std;
int main() 
{
	int n, max=-1, counter = 1;
	while (counter <= 10) 
	{
		cin >> n;
		if (n > max) 
		{
			max = n;
		}
		counter++;
	}
	cout << max;
}

/*    �ǧ̥���

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m;
	while (cin >> m)
	{
		int cmp;
		for (int i = 0; i<9; i++) {
			cin >> cmp;
			m = max(m, cmp);
		}
		cout << m << endl;
	}
}
