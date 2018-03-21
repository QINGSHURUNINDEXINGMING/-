//    電腦的一種常見應用，就是在一堆數字中找出最大的數字 (也就是一群數字中的最大值)。 
//    例如，程式會先輸入每位業務員的銷售數量，然後決定銷售競賽的優勝者。銷售最多的人員就能夠贏得該項競賽。
//    請撰寫一個使用while敘述的C++程式，並輸入10個數字，然後決定並印出其中最大的數字。  
//    輸入：10個整數 
//    輸出：最大整數

#include <iostream>
using namespace std;
int main() 
{
	int n, max=-1, counter = 1;
	while (counter <= 10) 
	{
		cin >> n;
		if (n > max) 
		{
			max = n;
		}
		counter++;
	}
	cout << max;
}

/*    學弟打的

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m;
	while (cin >> m)
	{
		int cmp;
		for (int i = 0; i<9; i++) {
			cin >> cmp;
			m = max(m, cmp);
		}
		cout << m << endl;
	}
}
