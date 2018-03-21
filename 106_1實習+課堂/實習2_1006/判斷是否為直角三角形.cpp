//    輸入三角形三邊長度值（均為正整數），判斷它是否能為直角三角形的三個邊長。
//    如果可以，則輸出「YES」，如果不能，則輸出「NO」。如果根本無法構成三角形，則輸出「NOT A TRIANGLE」。

#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a)) 
	{
		cout << "Not a triangle" << '\n';
	}
	else 
	{
		if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) 
		{
			cout << "Yes" << '\n';
		}
		else 
		{
			cout << "No" << '\n';
		}
	}
}

 
