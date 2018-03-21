//    輸入三個整數，輸出它們的平均值，(顯示至小數點後3位)。

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c;
	float avg;
	cout << "Please enter three integers" << '\n' << "Example: 21 76 43" << '\n';
	cin >> a >> b >> c;
	avg = (a + b + c) / 3.;
	cout << fixed << setprecision(3) << avg << '\n';
}

/*    學弟打的 

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		cout << fixed << setprecision(3) << (a + b + c) / 3 << '\n';
	}
}

