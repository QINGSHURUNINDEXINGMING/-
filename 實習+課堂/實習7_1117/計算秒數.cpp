//    (計算秒數) 撰寫函式seconds定義與函式原型
//    請設計一個函式seconds，以三個整數引數輸入時間 (時、分、秒)，然後傳回從上次12點整到此時間所經過的秒數。
//	  使用這個函數計算兩個時間之間相隔的秒數，這兩個時間都位在同一個12小時的週期內。
//    注意：程式中main函式請勿修改，僅加上函式定義與函式原型。

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

/*    學弟寫的

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
 
