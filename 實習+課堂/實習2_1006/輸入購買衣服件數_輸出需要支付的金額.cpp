//    一件衣服95元，若消費滿300元，可打八五折。輸入購買衣服件數，輸出需要支付的金額（單位：元），列印至兩位小數。

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int n;
	float t;
	cin >> n;
	t = 95. * n;
	if (t >= 300) 
	{
		t = 95 * n*0.85;
	}
	cout << fixed << setprecision(2) << t << '\n';
}

