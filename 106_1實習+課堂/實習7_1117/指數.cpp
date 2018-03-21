//    (计) 级糶ㄧΑintegerPower﹚竡籔ㄧΑ
//    砞璸ㄧΑintegerPower (base, exponent)肚base exponent计ㄒintegerPower(3, 4) = 3 * 3 * 3 * 3
//	  安砞exponent琌ッ环タ箂俱计τbase玥俱计
//    猔種祘ΑいmainㄧΑ叫づэ度ㄧΑ﹚竡籔ㄧΑ叫づㄏノ计厩ㄧΑ畐

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

/*    厩糶

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

