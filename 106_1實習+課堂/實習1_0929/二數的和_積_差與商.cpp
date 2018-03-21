//    輸入兩整數，輸出此二數的和、積、差與商。 例如：使用者輸入 7 9，則輸出如下。

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Please enter the two integers: " << '\n' << "Example: 23 46" << '\n';
	cin >> a >> b;
	cout << '\n' << a + b << '\n' << a*b << '\n' << a - b << '\n' << a / b << endl;
}

/*    學弟寫的 

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl << a*b << endl << a - b << endl << a / b << endl;
	}
}
