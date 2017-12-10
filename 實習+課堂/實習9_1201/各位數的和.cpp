//    (�U��ƪ��M)�g�@�Ө禡int sumOfDigits(int n)�A�Ө禡�����@�����n�A�p��öǦ^����Ƥ��U��Ʀr�M�C
//
//    Write a function that takes a integer value n and returns the digit sum of n.
//
//    (e.g. the digit sum of 84001 is calculated as 8+4+0+0+1 = 13)
//
//    ���g�U�C�禡�ðt�X�ҵ��D�{������A�Цۦ�t�A�һݤ����Y��

#include <iostream>

using namespace std;

int sumOfDigits(int n);

int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}

int sumOfDigits(int n)
{
    int total=0;
    while(n!=0)
	{
        total+=n%10;
        n/=10;
    }
    return total;
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int);
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;
}

int sumOfDigits(int n)
{
    int total = 0;
    while(n>0)
	{
        total += n%10;
        n /= 10;
    }
    return total;
} 

