//    �аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬
//    (����Ʀr) �м��g�@�Ө禡�A��J�@�Ӿ�ƭȡA�ñN���ȫ��Ө�Ʀr���ۤ϶��ǶǦ^�C�Ҧp�A�ǤJ�Ʀr7631�A�h�禡�Ǧ^1367�C

#include <iostream>
#include <iomanip>

using namespace std;

int reverseDigits( int number );

int main()
{
   int number; // input number

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
} // end main


int reverseDigits(int number )
{
    int total = 0;
    
    while(number != 0)
	{
        total *= 10;
        total += number % 10;
        number = number / 10;
    }
    return total;
}

/*

#include <iostream>
#include <iomanip>

using namespace std;

int reverseDigits( int number );

int main()
{
   int number; // input number

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
} // end main


int reverseDigits(int number )
{
    int total = 0;   
    while(number != 0)
	{
        total = total*10+number % 10;
        number /= 10;
    }
    return total;
    
}



