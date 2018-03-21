//    (整數的平均值) 請設計一個使用for敘述的程式，計算並印出幾個整數的平均值。假設最後一個讀入的是警示值9999。典型的的輸入序列可能是：
//
//    表示程式應該計算在9999之前所有數值的平均值。(請輸出至小數點後兩位)
//
//    例：
//
//    輸入 10 8 11 7 9 9999
//
//    輸出 9.00

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	float n = 0, counter = 0, total = 0;
	cin >> n;
	for (; n != 9999;) 
	{
		total += n;
		counter++;
		cin >> n;
	}
	cout << fixed << setprecision(2) << total / counter;
}

/*    學弟寫的
 
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int num;
	int i;
	int sum = 0;
	cin >> num;
	for(i = 0; num != 9999; i++)
	{
	    sum += num;
	    cin >> num;
	}
	cout << setprecision(2) << fixed << 1.0 * sum / i;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, sum = 0, c = 0;
    for(;cin>>n&& n != 9999;c++)
        sum+=n;
    cout<<fixed<<setprecision(2)<<sum/c<<endl;
    return 0;
}
 
 

