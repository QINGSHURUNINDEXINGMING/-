//    輸入正整數n，輸出1+2+…+n的值。（此題請使用公式）

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << (n*(1 + n)) / 2 << '\n';
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
		cout << (n + 1)*n / 2 << endl;
	}
}
