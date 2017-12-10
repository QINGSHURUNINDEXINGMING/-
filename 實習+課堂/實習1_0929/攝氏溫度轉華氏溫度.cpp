//    利用 std::fixed , std::setpricision() 串流操作子可以顯示浮點數(實數)的小數位數(要include 標頭檔 iomanip)。 
// 
//    附檔floating.cpp為使用此法顯示浮點數的例子。
//
//    問題：請撰寫一程式main.cpp，該程式輸入整數的攝氏溫度，輸出華氏溫度 (註: 華氐溫度 = 32 + 9*攝氐溫度/5) 。
//
//    輸入：整數攝氏溫度 輸出：相對應的華氏溫度(顯示至小數點後2位)

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int number;
	float F;
	cout << "Please enter the Celsius: " << '\n' << "Example: 100°" << endl;
	cin >> number;
	F = (number * 9) / 5. + 32;
	cout << fixed << setprecision(2) << F << endl;
}

/*    學弟打的

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a;
	while (cin >> a)
	{
		cout << fixed << setprecision(2) << 32 + 9 * a / 5 << endl;
	}
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	float f;
	int d;
	while (1) 
	{
		cout << "Please enter the number: ";
		cin >> f;
		cout << "Please enter the digit: ";
		cin >> d;
		cout << '\n' << fixed << setprecision(d) << f << '\n';
	}
}



 
