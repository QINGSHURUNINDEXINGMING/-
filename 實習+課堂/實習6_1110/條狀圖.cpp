//    (������) ø�s�ϧλP�����ϬO�@�ئ��쪺�q�����ΡC
//	  �г]�p�@�ӯ����J5�ӼƦr���{�� (�C�ӳ��O1��30����)�C
//	  ���]�ϥΪ̿�J���ȳ��O���Ī��C�w��C�ӿ�J���Ʀr�A�z���{�����ӦL�X�@��]�t�Ӽƥت��s��P���C
//	  �Ҧp�A�p�G��J�{�����ƥج�7�A�h�{�������L�X*******�C
//    �ҡG
//    ��J
//    5 10 8 14 2
//    ��X
//    *****
//    **********
//    ********
//    **************
//    **

#include<iostream>

using namespace std;

int main() 
{
	int n, counter=1;
	while (counter <= 5) 
	{
		cin >> n;
		for (int i = 1; i <= n; i++) 
		{
			cout << "*";
		}
		cout << '\n';
		counter++;
	}
}

/*    �ǧ̼g��


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	for (int i = 0; i<5; i++) 
	{
		cin >> n;
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int main() {
	for (int i = 0; i< 5; i++) 
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
