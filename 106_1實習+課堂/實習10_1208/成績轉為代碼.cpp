//    �B�Τ@���}�C�ѨM�H�U���D�G��J���N�Ӥ���0��100���Ʀr�H�N����ơA�̧ǿ�X�o��U���� A(90-100) B(80-89) C(70-79) D(60-69) F(60�H�U) ���H�ơC�ХHĵ�ܭȱ���j�鼶�g�A�ó]ĵ�ܭȬ�-1�C
//
//    Use a one-dimensional array to solve the following problem. 
//    Read in any number of integers as scores, each of which is between 0 and 100, inclusive. As each number is read, determines how many of the students there are in each of the grades.
//
//    �ҡG
//
//    ��J
//
//    55 100 80 14 23 64 88 -1
//
//   ��X
//
//   1 2 0 1 3

#include <iostream>

using namespace std;

int main() 
{
	int n, v[5] = { 0 };
	
	while (cin >> n&&n != -1) 
	{
		if (n / 10 == 9 ? 1 : n / 10 == 10) //if (n / 10 == 10 || n / 10 == 9)
		{
			v[0]++;
		}
		else if (n / 10 == 8) 
		{
			v[1]++;
		}
		else if (n / 10 == 7) 
		{
			v[2]++;
		}
		else if (n / 10 == 6) 
		{
			v[3]++;
		}
		else 
		{
			v[4]++;
		}
	}
	for (int i = 0; i<5; i++) 
	{
		cout << v[i] << " ";
	}
}

/*   �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {0},n;
    while(cin>>n&&n!=-1)
        a[n/10-6 < 0 ? 0 : n==100 ? 4 : n/10-5]++;
    for(int i = 4; i>-1; i--)cout<<a[i]<<" ";
    return 0;
} 

