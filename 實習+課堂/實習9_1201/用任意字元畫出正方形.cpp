//    (�Υ��N�r���e�X�����) �ק���D6.22�ҫإߪ��禡��void square( int side, char fillCharacter )�A�N����ΥH�r���Ѽ�fillCharacter�ҳW�w���r��ø�X�C
//    �ü��g�A��D�禡���ϥΪ̿�J����P�r���C�Ҧp�A�p�G�ϥΪ̿�J���5�A�Ӧr������#���A�h�|�L�X�H�U�ϧΡG
//
//
//
//    #####
//
//    #####
//
//    #####
//
//    #####
//
//    #####

#include <iostream>

using namespace std;

void square(int side, char fillCharacter);

int main()
{
    int n;
    char c;
    cin>>n>>c;
    square(n, c);
}

void square(int side, char fillCharacter)
{
    for(int i=1;i<=side;i++)
	{
        for(int j=1;j<=side;j++)
		{
            cout<< fillCharacter;
        }
        cout<<'\n';
    }
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

void square( int side, char fillCharacter )
{
    for(int i =0; i< side; i++)
	{
        for(int j = 0; j < side; j++)
            cout<<fillCharacter;
        cout<<endl;
    }
}
int main()
{
    int sild;
    char c;
    cin >> sild >> c;
    square(sild,c);
} 

