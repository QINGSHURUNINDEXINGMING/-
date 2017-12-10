//    撰寫一程式輸入一整數，輸出此數除以10的餘數。

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n % 10 << '\n';
}

/*    學弟寫的

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{ 
		cout << n % 10;
	} 
} 

