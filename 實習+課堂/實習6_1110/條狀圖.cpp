//    (條狀圖) 繪製圖形與條狀圖是一種有趣的電腦應用。
//	  請設計一個能夠輸入5個數字的程式 (每個都是1到30之間)。
//	  假設使用者輸入的值都是有效的。針對每個輸入的數字，您的程式應該印出一行包含該數目的連續星號。
//	  例如，如果輸入程式的數目為7，則程式必須印出*******。
//    例：
//    輸入
//    5 10 8 14 2
//    輸出
//    *****
//    **********
//    ********
//    **************
//    **

#include<iostream>

using namespace std;

int main() 
{
	int n, counter=1;
	while (counter <= 5) 
	{
		cin >> n;
		for (int i = 1; i <= n; i++) 
		{
			cout << "*";
		}
		cout << '\n';
		counter++;
	}
}

/*    學弟寫的


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	for (int i = 0; i<5; i++) 
	{
		cin >> n;
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int main() {
	for (int i = 0; i< 5; i++) 
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
