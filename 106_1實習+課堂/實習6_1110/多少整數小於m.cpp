//    輸入兩個正整數m、n，然後輸入n個正整數a1, a2, …, an。統計a1, a2, …, an中有多少整數的值小於m。
//    例：
//    輸入  
//    7 5 1 9 8 14 7
//    輸出
//    1

#include<iostream>

using namespace std;

int main() 
{
	int n, m, n1, counter = 0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
	{
		cin >> n1;
		if (n > n1) 
		{
			counter++;
		}
	}
	cout << counter;
}

/*學弟寫的
 
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int count = 0, amount, input;
		cin >> amount;
		for (int i = 0; i < amount; i++) 
		{
			cin >> input;
			if (input<n)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}

