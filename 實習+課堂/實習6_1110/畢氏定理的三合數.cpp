//    (����w�z���T�X��) �����T���Ϊ��T����i�H�������O��ƭȡC
//    �����T���ΤT������T�Ӿ�ƭȡA�κ٬�����w�z���T�X�� (Pythagorean triple)�C
//    �o�T���䪺���ץ��������H�U�����Y�A�]�N�O��Ѫ�������M�A��������������C
//    ��Jn�A�p��b�T��������W�Ln�����p�U�A���h�ֲղ���w�z�T�X�ơC
//    (�`�N�G3, 4, 5�B3, 5, 4�B4, 3, 5�B4, 5, 3�B5, 3, 4�P5, 4, 3�������P�@�աC)
//    Hint: �ϥΤT�h�_��for�j��h�թҦ��i��ʡC
//    �ҡG
//    ��J:10
//    ��X:2
//    ��J:17
//    ��X:5

#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int n, counter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1 + i; j <= n; j++) 
		{
			for (int t = 1 + j; t <= n; t++) 
			{
				if (i*i + j*j == t*t) 
				{
					counter++;
				}
			}
		}
	}
	cout << counter;
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int count = 0;
		for (long long int i = 3; i < n + 1; i++)
			for (long long int j = i + 1; j < n + 1; j++)
				for (long long int k = j + 1; k < n + 1; k++)
					if (i*i == k*k - j*j)
						count++;
		cout << count << endl;
	}
	return 0;
} 

