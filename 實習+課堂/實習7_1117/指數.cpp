//    (����) ���g�禡integerPower�w�q�P�禡�쫬
//    �]�p�@�Ө禡integerPower (base, exponent)�A�Ǧ^base exponent���ƭȨҦp�AintegerPower(3, 4) = 3 * 3 * 3 * 3�C
//	  ���]exponent�O�û������B�B�j��s����ơA��base�h���@��ơC
//    �`�N�G�{����main�禡�Фŭק�A�ȥ[�W�禡�w�q�P�禡�쫬�A�ФŨϥμƾǨ禡�w�C

#include <iostream>

using namespace std;

int integerPower(int a, int b);

int main()
{
	int exp;
	int base;

	cin >> base >> exp;
	cout << integerPower(base, exp) << endl;
}

int integerPower(int a, int b) 
{
	int x = 1;
	if (b>0) 
	{
		for (int i = 1; i <= b; i++) 
		{
			x *= a;
		}
	}
	return x;
}

/*    �ǧ̼g��

#include <iostream>
using namespace std;

int integerPower(int,int);

int main()
{
   int exp; 
   int base; 
   
   cin >> base >> exp;
   cout << integerPower( base, exp ) << endl;
}

int integerPower(int base, int exponent){
    int sum = 1;
    for(int i = 0; i < exponent; i++)
        sum *= base;
    return sum;
} 

