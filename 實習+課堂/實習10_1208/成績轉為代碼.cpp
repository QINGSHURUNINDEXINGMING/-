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
    int n;
    int var[5]={0};
    cin>>n;
    while(n!=-1)
	{
        if(90<=n&&n<=100)
		{
            var[0]++;
        }
		else if(80<=n&&n<=89)
		{
            var[1]++;
        }
		else if(70<=n&&n<=79)
		{
            var[2]++;
        }
		else if(60<=n&&n<=69)
		{
            var[3]++;
        }
		else
		{
            var[4]++;
        }
        cin>>n;
    }
    for(int i=0; i<5; i++)
	{
        cout<<var[i];
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

