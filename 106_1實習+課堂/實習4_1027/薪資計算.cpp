//    (薪資計算程式) 請設計一個使用while敘述的C++程式，能算出每位職員的薪資總額。
//    該公司支付每位職員薪資的方式，就是前40個小時，是以「基本薪資」來計算，超過40小時的部分則按照「原來薪資的一倍半」費用來加以計算。
//    假設您已經有該公司所有職員的名單，每位職員上一週的工作時數和每位職員的時薪。
//    程式應輸入每位員工的工時與薪資，並決定和顯示這些員工的總收入。
//
//    例：輸入 39 10.00 40 10.00 41 10.00 -1
//
//    輸出 $390.00 $400.00 $415.00

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	float time, money, total;
	cin >> time;
	while (time != -1) 
	{
		cin >> money;
		total = money*time;
		if (time>40) 
		{
			total = 40 * money + (time - 40)*1.5*money;
		}
		cout << fixed << setprecision(2) << total;
		cin >> time;
	}
}


/*學弟寫的

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int num;
	double may;
	cin >> num;
	while (num != -1) 
	{
		cin >> may;
		if (num < 40)
			cout << setprecision(2) << fixed << num * may << " ";
		else
			cout << setprecision(2) << fixed << (40 * may) + (num - 40) * may * 1.5 << " ";
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
        double race;
        cin>>race;
        if(n>40)
            cout<<fixed<<setprecision(2)<<40*race + (n-40)*race*1.5 <<" ";
        else
            cout<<fixed<<setprecision(2)<<n*race<<" ";
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	double race;
	while (cin >> n&&n != -1) 
	{
		cin >> race;
		cout << fixed << setprecision(2) << ((n > 40) ? (40 * race + (n - 40)* race * 1.5) : (n*race)) << " ";
	}
	return 0;
}
