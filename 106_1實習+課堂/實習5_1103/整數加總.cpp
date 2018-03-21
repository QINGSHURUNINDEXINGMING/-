//    (整數加總) 寫個程式，使用for敘述加總一連串整數。假設輸入的第一個整數，代表後續即將輸入的數值個數。您的程式應該在每個輸入敘述中，每次只讀取一個數值。典型的的輸入序列可能是
//
//    其中的5代表接下來有5個數值需要進行相加。
//
//    例：
//
//    輸入 5 100 200 300 400 500
//
//    輸出 1500

#include <iostream>

using namespace std;

int main() 
{
	int counter , number, total = 0;
	cin >> counter;
	for (int i = 1; i <= counter; i++) 
	{
		cin >> number;
		total += number;
	}
	cout << total;
}

/*學弟寫的

#include <iostream> 
using namespace std;
int main()
{
	int count;
	int num;
	int sum = 0;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum;
}
 
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		long long int sum = 0, c;
		for (int i = 0; i < n; i++) 
		{
			cin >> c;
			sum += c;
		}
		cout << sum << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int total = 0, s;
		for (int i = 0; i < n; i++) 
		{
			cin >> s;
			total += s;
		}
		cout << total << endl;
	}
	return 0;
}
