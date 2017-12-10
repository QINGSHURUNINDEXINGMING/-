//    請輸入一個只包含0和1的整數 (也就是「二進位」整數)，並印出它所代表的十進位整數。  
//    範例：
//    輸入：110100100
//    輸出：420

#include <iostream>

using namespace std;

int main() 
{
	int number;
	int total = 0;
	int x = 1;
	cin >> number;
	while (number != 0) 
	{
		total += number % 10 * x;
		x *= 2;
		number /= 10;
	}
	cout << total;
}

/*    學弟寫的

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string b;
    while(cin>>b)
	{
        unsigned int d = 0;
        int len = b.length();
        for(int i = 0; i<len; i++)
            d += pow(2,len-i-1) * (int)(b[i]-'0');
        cout<<d<<endl;
    }
} 

