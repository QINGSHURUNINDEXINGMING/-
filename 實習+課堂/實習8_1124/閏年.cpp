//    �м��g�@�禡bool isLeapYear(int y)�A�Ө禡�����@�N��褸�~��������ơA�Y�Ӧ~�׬��|�~�A�Ǧ^true�A�Y�_�h�Ǧ^false�C
//    �аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬

#include <iostream> 

using namespace std;

bool isLeapYear(int y);

int main()
{
   int y;

   for(int i=0;i<3;i++)
   {
   	  cin >> y;
	  if (isLeapYear(y)) 
	  	cout<<"TRUE"<<endl;
	  else 
	  	cout<<"FALSE"<<endl;
   }
   
} 

bool isLeapYear(int y)
{
    if(y%4==0&&y%100==0||y%400==0)
	{
        return true;
    }
	else
	{
        return false;
    }
}

