//    (畢氏定理的三合數) 直角三角形的三邊長可以全部都是整數值。
//    直角三角形三邊長的三個整數值，統稱為畢氏定理的三合數 (Pythagorean triple)。
//    這三個邊的長度必須滿足以下的關係，也就是兩股長的平方和，等於斜邊長的平方。
//    輸入n，計算在三邊長均不超過n的情況下，有多少組畢氏定理三合數。
//    (注意：3, 4, 5、3, 5, 4、4, 3, 5、4, 5, 3、5, 3, 4與5, 4, 3均視為同一組。)
//    Hint: 使用三層巢狀for迴圈去試所有可能性。
//    例：
//    輸入:10
//    輸出:2
//    輸入:17
//    輸出:5

#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int n, counter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1 + i; j <= n; j++) 
		{
			for (int t = 1 + j; t <= n; t++) 
			{
				if (i*i + j*j == t*t) 
				{
					counter++;
				}
			}
		}
	}
	cout << counter;
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int count = 0;
		for (long long int i = 3; i < n + 1; i++)
			for (long long int j = i + 1; j < n + 1; j++)
				for (long long int k = j + 1; k < n + 1; k++)
					if (i*i == k*k - j*j)
						count++;
		cout << count << endl;
	}
	return 0;
} 

