//    �аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬
//    (�N�Ʀr���Z�ഫ���I��) �м��g�禡qualityPoints�A�Ө禡�iŪ�J�ǥͪ��������Z�A
//    �p�G�䥭�����Z�b90-100�����A�N�Ǧ^4�F�Y�b80-89�����A�Ǧ^3�A�������Z�b70-79�����A�Ǧ^2�F�������Z�b60-69�����A�N�Ǧ^ 1�F�Y�����C��60�A�Ǧ^0�C

#include <iostream>

using namespace std;

int qualityPoints( int average );

int main()
{
   int average; // current average

   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } // end for

   cout << endl;
} // end main

int qualityPoints(int average )
{
    if(average>=90&&average<=100)
	{
        return 4;
    }
	else if(average>=80&&average<=89)
	{
        return 3;
    }
	else if(average>=70&&average<=79)
	{
        return 2;
    }
	else if(average>=60&&average<=69)
	{
        return 1;
    }
	else if(average<=60)
	{
        return 0;
    }
}



