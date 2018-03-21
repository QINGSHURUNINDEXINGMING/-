//    叫皌mainㄧΑ磅︽mainㄧΑ叫づэ度级糶ㄧΑ﹚竡籔ㄧΑ
//    (程そ计) ㄢ俱计程そ计 (greatest common divisorGCD) 琌盢ㄢ俱计常俱埃程俱计叫级糶ㄧΑgcdтㄢ俱计程そ计

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

