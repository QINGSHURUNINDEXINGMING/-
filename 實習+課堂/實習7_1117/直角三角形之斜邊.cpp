//    (�����T���Τ�����) ���g�禡hypotenuse�w�q�P�禡�쫬
//
//    �w�q�禡hypotenuse�A�Q�Ψ�Ӥw������D�X�����T���Ϊ�������C
//    �o�Ө禡�������double���O���޼ơA�åB�Ǧ^double���O�������(��X�ܤp���I��1��)�C
//    �M��A�b�{�����Q�θӨ禡�A�p��H�U�C�ӤT���Ϊ�������סC
//
//    �`�N�G�{����main�禡�Фŭק�A�ȥ[�W�禡�w�q�P�禡�쫬�A�ФŨϥμƾǨ禡�w�C

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

/*    �ǧ̼g�� 

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

//�ƾǨ禡�}�ڸ�-.-
double hypotenuse(double side1, double side2){
    return sqrt(side1 * side1 + side2 * side2);
}
