//    (計算銷售總額) 一家郵購公司銷售五種不同的產品，其零售價格分別是：
//    產品1─$2.98，產品2─$4.50，產品3─$9.98，產品4─$4.49和產品5─$6.87。
//    請設計一個程式，能夠讀取一連串數字配對：
//    1.	a) 產品編號
//    2.	b) 銷售量
//
//    您的程式應該使用switch敘述，以判定各個產品的零售價格。 
//    您的程式應計算並顯示上一週所有售出產品的總零售價格。
//    使用一個警示控制迴圈，決定何時該終止程式並顯示最後的結果。
//    例：
//    輸入 (依序為產品1銷售量 5、產品3銷售量 2、產品4銷售量 2、產品1銷售量 1)
//    1 5 3 2 4 2 1 1 -1
//    輸出 (前五個數字分別為產品1至產品5的個別總價，第6個數字為所有產品之總價。)
//    17.88
//    0.00
//    19.96
//    8.98
//    0.00
//    46.82

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	int n1 = 0, n2 = 0;
	cin >> n1>> n2;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	while (n1!=-1) 
	{
		switch (n1) 
		{
		case 1:
			a+=n2;
			break;
		case 2:
			b+=n2;
			break;
		case 3:
			c+=n2;
			break;
		case 4:
			d+=n2;
			break;
		case 5:
			e+=n2;
			break;
		}
		cin>> n1;
		if(n1!=-1)
			cin >> n2;
	}
	cout << fixed << setprecision(2) << 2.98*a << '\n';
	cout << fixed << setprecision(2) << 4.5*b << '\n';
	cout << fixed << setprecision(2) << 9.98*c << '\n';
	cout << fixed << setprecision(2) << 4.49*d << '\n';
	cout << fixed << setprecision(2) << 6.87*e << '\n';
	cout << fixed << setprecision(2) << 2.98*a +4.5*b +9.98*c +4.49*d +6.87*e << '\n';
}

/*    陣列 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price[]={2.98, 4.5, 9.98, 4.49, 6.87}; 
    double indiviual[5]={0};
	double total=0;
	int id, n;
    while(1)
	{
    	cin>>id;
    	if(id==-1)
		{
    		break;
		}
		cin>>n;
		total+=n*price[id-1];
		indiviual[id-1]+=n*price[id-1];
	}
	for(int j=0;j<5;j++){
		cout<<fixed<<setprecision(2)<<indiviual[j]<<'\n';
	}
	cout<<fixed<<setprecision(2)<<total;
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, item[5] = { 0 };
	double price[5] = { 2.98,4.50,9.98,4.49,6.87 };
	switch (n) {}
	while (cin >> n&&n != -1) 
	{
		int amount;
		cin >> amount;
		item[n - 1] += amount;
	}
	double sum = 0;
	cout << fixed << setprecision(2);
	for (int i = 0; i < 5; i++) 
	{
		cout << item[i] * price[i] << endl;
		sum += item[i] * price[i];
	}
	cout << sum << endl;
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	int obj, num;
	double may[5] = { 0 };
	cin >> obj;
	while (obj != -1) 
	{
		cin >> num;
		switch (obj) 
		{
		case 1:
			may[0] += 2.98 * num; break;
		case 2:
			may[1] += 4.50 * num; break;
		case 3:
			may[2] += 9.98 * num; break;
		case 4:
			may[3] += 4.49 * num; break;
		case 5:
			may[4] += 6.87 * num; break;
		case -1:
			break;
		}
		cin >> obj;
	}
	cout << setprecision(2) << fixed;
	for (int i = 0; i <= 4; i++)
		cout << may[i] << endl;
	cout << may[0] + may[1] + may[2] + may[3] + may[4] << endl;
}


