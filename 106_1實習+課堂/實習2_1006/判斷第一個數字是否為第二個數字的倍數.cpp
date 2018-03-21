//    能讀取兩整數並能判斷第一個數字是否為第二個數字的倍數，且將其結果印出

#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	cin >> a >> b;
	if (a%b == 0) 
	{
		cout << "Yes\n";
	}
	else 
	{
		cout << "No\n";
	}
}

