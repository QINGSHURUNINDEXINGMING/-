//    (計算Pi) 從以下的無窮級數計算出Pi值
//
//    Pi=4-4/3+4/5-4/7+4/9-4/11+…
//
//    輸入n，顯示計算至此級數第n項的π的近似值。(請輸出至小數點後八位)
//
//    例：
//
//    輸入 1
//
//    輸出 4.00000000
//
//    輸入 10
//
//    輸出 3.04183962
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int counter = 1, number, a = 1;
	double Pi = 0;
	cin >> number;
	for (counter = 1; counter <= number; counter++) 
	{
		Pi = Pi + a*4. / (counter * 2 - 1);
		a *= -1;
	}
	cout << fixed << setprecision(8) << Pi;
}

/*學弟寫的

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int count;
	double pi = 0.0;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		if (i % 2 == 0)
			pi -= 4.0 / (1 + (i - 1) * 2);
		else
			pi += 4.0 / (1 + (i - 1) * 2);
	}
	cout << setprecision(8) << fixed << pi;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
	{
        double pi = 0;
        for(int i = 0; i < n; i++)
            pi += (double)4/ (i*2+1) * (i%2 ? -1 : 1);
        cout<<fixed<<setprecision(8)<<pi;
    }
}

 
 
