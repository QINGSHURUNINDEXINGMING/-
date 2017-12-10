//    請配合main函式執行，main函式請勿修改，僅撰寫函式定義與函式原型
//    (將數字成績轉換成點數) 請撰寫函式qualityPoints，該函式可讀入學生的平均成績，
//    如果其平均成績在90-100之間，就傳回4；若在80-89之間，傳回3，平均成績在70-79之間，傳回2；平均成績在60-69之間，就傳回 1；若平均低於60，傳回0。

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



