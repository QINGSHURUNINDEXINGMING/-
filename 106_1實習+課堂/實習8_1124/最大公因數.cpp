//    �аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬
//    (�̤j���]��) ��Ӿ�ƪ��̤j���]�� (greatest common divisor�AGCD) �O��N���Ƴ��㰣���̤j��ơC�м��g�禡gcd�A��X��Ӿ�ƪ��̤j���]�ơC

#include <iostream>

using namespace std;

int gcd(int a,int b );

int main()
{
   int a; // first number
   int b; // second number

   // loop for 5 pairs of inputs
   for ( int j = 1; j <= 5; j++ ) 
   {
      cin >> a >> b;
      cout <<  gcd( a, b ) << endl;
   } // end for
} // end main

int gcd(int a,int b )
{
    int c=0;
    if(a>=b)
	{
        for(int i=1;i<=b;i++)
		{
            if(a%i==0&&b%i==0)
			{
                c=i;
            }
        }
    }
	else
	{
        for(int i=1;i<=a;i++)
		{
            if(a%i==0&&b%i==0)
			{
                c=i;
            }
        }
    } 
    return c;
}

