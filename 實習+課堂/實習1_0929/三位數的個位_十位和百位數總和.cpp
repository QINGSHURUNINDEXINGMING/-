//    讓使者輸入一個三位數的整數，程式將在螢幕上顯示此三位數的個位、十位和百位數總和。例如：使用者輸入487，則輸出為19。

#include <iostream>

using namespace std;

int main()
{
	int n, A;
	cout << "Please enter three digit integers: " << '\n' << "Example: 487" << '\n';
	cin >> n;
	A = (n % 10) + (n / 10 % 10) + (n / 10 / 10 % 10);
	cout << '\n' << A << '\n';
}

/*    學弟打的 
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int n;
     while(cin>>n)
	 {
         int m = 0;
         while(n>0)
		 {
             m += n%10;
             n /= 10;
         }
         cout<<m<<endl;
     }
}
