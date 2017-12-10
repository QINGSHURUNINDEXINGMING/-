//    請配合main函式執行，main函式請勿修改，僅撰寫函式定義與函式原型
//    (反轉數字) 請撰寫一個函式，輸入一個整數值，並將此值按照其數字的相反順序傳回。例如，傳入數字7631，則函式傳回1367。

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



