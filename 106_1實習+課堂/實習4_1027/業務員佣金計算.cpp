//    (業務員佣金計算程式) 某家大公司是按照佣金的方式計算業務員的薪資。
//    業務員的底薪是每星期$200美元，加上該週銷售毛額的百分之9。
//    例如，一週銷售$5000美元藥品的業務員就給$200美元加$5000美元的百分之9，也就是$650美元。
//    開發一個C++程式，使用while敘述輸入數位業務員上週的銷售毛額，輸入-1(警示值)後結束並計算、顯示各業務員的薪資。
//    一次處理一位業務員的薪資。
//
//    例：輸入 5000.00 6000.00 7000.00 -1
//
//    輸出 $650.00 $740.00 $830.00

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	float money;
	cin >> money;
	while (money != -1) 
	{
		cout << fixed << setprecision(2) << 200+money*0.09;
		cin >> money;
	}
}

/*    學弟寫的

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	double num;
	cin >> num;
	while (num != -1) 
	{
		cout << setprecision(2) << fixed << 200 + num * 0.09;
		cin >> num;
	}
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    while(cin>>n)
	{
        if(n == -1)
            break;
        cout<<fixed<<setprecision(2)<<200+n*0.09<<" ";
    }
}
