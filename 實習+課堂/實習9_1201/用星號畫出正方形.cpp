(�άP���e�X�����) �мg�X�@�Ө禡void square( int side )�A�Ө禡�b�ù�������άP���e�X�@�ӹ�ߥ���ΡA������O�Ѿ�ưѼ�side���w�C
�ü��g�A��D�禡���ϥΪ̿�J����C�Ҧp�A�p�G�ϥΪ̿�J4�A�I�s�禡��|��ܥH�U�ϧΡG

****

****

****

****

#include <iostream>

using namespace std;

void square(int side);

int main()
{
    int n;
    cin>>n;
    square(n);
}

void square(int side)
{
    for(int i=1;i<=side;i++)
	{
        for(int j=1;j<=side;j++)
		{
            cout<<"*";
        }
        cout<<'\n';
    }
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

void square( int side )
{
    for(int i =0; i< side; i++)
	{
        for(int j = 0; j < side; j++)
            cout<<'*';
        cout<<endl;
    }
}
int main()
{
    int sild;
    cin >> sild;
    square(sild);
} 


