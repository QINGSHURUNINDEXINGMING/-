//  (使用密碼學保護隱私) 某一間公司想要透過網際網路傳送資料，他們請你寫一個程式將資料加密，因此可以較安全地將資料傳送出去。
//	他們所有的資料都是以四位數的整數來傳送。
//	你的程式應該讓使用者鍵入一個四位數的整數，並以下列的方法加密：將每一位數分別加7，然後將此數除以10，所得餘數即為新的數，以此取代原來的位數。
//	然後將第一個位數和第三個位數交換，第二個位數和第四個位數交換。最後印出加密過的整數。
//
//    例：輸入 1234
//
//    輸出 189

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int number;
	cin >> number;
	int a = (number % 10 + 7) % 10;
	int b = (number / 10 % 10 + 7) % 10;
	int c = (number / 10 / 10 % 10 + 7) % 10;
	int d = (number / 10 / 10 / 10 % 10 + 7) % 10;
	int total = d * 1000 + c * 100 + b * 10 + 1 * a;
	cout << total;
}

/*學弟寫的

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		for (int i = 1; i <= 1000; i *= 10)
			n = n - (n % (i * 10) / i) *i + (((n % (i * 10) / i) + 7) % 10) * i;
		cout << (n % 100) * 100 + n / 100 << endl;
	}
}
 
#include <iostream>
using namespace std;

int main() {
	int num;
	int ans = 0;
	cin >> num;

	ans += (num / 100 % 10 + 7) % 10;
	ans += (num / 1000 % 10 + 7) % 10 * 10;
	ans += (num / 1 % 10 + 7) % 10 * 100;
	ans += (num / 10 % 10 + 7) % 10 * 1000;

	cout << ans;
}


