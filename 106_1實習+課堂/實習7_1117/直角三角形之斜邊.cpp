//    (直角三角形之斜邊) 撰寫函式hypotenuse定義與函式原型
//
//    定義函式hypotenuse，利用兩個已知的邊求出直角三角形的斜邊長。
//    這個函式應有兩個double型別的引數，並且傳回double型別的斜邊長(輸出至小數點後1位)。
//    然後，在程式中利用該函式，計算以下每個三角形的斜邊長度。
//
//    注意：程式中main函式請勿修改，僅加上函式定義與函式原型，請勿使用數學函式庫。

#include <iostream>
#include <iomanip>
using namespace std;

double hypotenuse( double a, double b );

int main()
{
   double side1; 
   double side2; 
   
   cout << fixed; 

   
   for ( int i = 1; i <= 3; i++ ) 
   {
      cin >> side1 >> side2;

      
      cout << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } 
   
}
double hypotenuse( double a, double b )
{
    int c = a*a+b*b;
    double d =0.0;
    for( ;d<=c; d+=0.1)
	{
        if(d*d>c)
		{
            break;
        }
    }
    return d-0.1;
}

/*    學弟寫的 

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

double hypotenuse(double,double);

int main()
{
   double side1; 
   double side2; 
   
   cout << fixed; 

   
   for ( int i = 1; i <= 3; i++ ) 
   {
      cin >> side1 >> side2;

      
      cout << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } 
}

//數學函式開根號-.-
double hypotenuse(double side1, double side2){
    return sqrt(side1 * side1 + side2 * side2);
}
