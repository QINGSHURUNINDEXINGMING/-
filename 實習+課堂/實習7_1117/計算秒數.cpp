//    (�p����) ���g�禡seconds�w�q�P�禡�쫬
//    �г]�p�@�Ө禡seconds�A�H�T�Ӿ�Ƥ޼ƿ�J�ɶ� (�ɡB���B��)�A�M��Ǧ^�q�W��12�I��즹�ɶ��Ҹg�L����ơC
//	  �ϥγo�Ө�ƭp���Ӯɶ������۹j����ơA�o��Ӯɶ�����b�P�@��12�p�ɪ��g�����C
//    �`�N�G�{����main�禡�Фŭק�A�ȥ[�W�禡�w�q�P�禡�쫬�C

#include <iostream>
#include <cmath>

using namespace std;

int seconds(int a, int b, int c);

int main()
{
	unsigned hours;
	unsigned minutes;
	unsigned secs;
	int first;
	int second;
	int difference;

	cin >> hours >> minutes >> secs;
	first = seconds(hours, minutes, secs);

	cin >> hours >> minutes >> secs;
	second = seconds(hours, minutes, secs);
	difference = fabs(first - second);

	cout << difference << endl;
}

int seconds(int a, int b, int c) 
{
	return a * 3600 + b * 60 + c;
}

/*    �ǧ̼g��

#include <iostream>
#include <cmath>
using namespace std;

int seconds(int, int, int);

int main()
{
   unsigned hours; 
   unsigned minutes; 
   unsigned secs; 
   int first;
   int second; 
   int difference; 

   cin >> hours >> minutes >> secs;
   first = seconds( hours, minutes, secs ); 

   cin >> hours >> minutes >> secs;
   second = seconds( hours, minutes, secs ); 
   difference = fabs( first - second ); 

   
   cout << difference << endl;
}

int seconds(int hr, int min, int sec)
{
    return hr * 3600 + min * 60 + sec;
}
 
