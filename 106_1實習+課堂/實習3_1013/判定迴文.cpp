//    迴文是指某個數字或文字片語，不論從頭或從尾端讀起，它的數字或文字的順序都是相同的。
//    例如，以下五位數整數都是迴文：12321、55555、45554和11611。
//    撰寫一個可以讀入3個五位數整數的應用程式，並判定所讀入的3個五位數整數各是否為迴文，若是則印出YES，否則印出NO。
//    [提示：請使用除法和模數運算子，將數字分成它的個別數字。]
//    輸入：3個五位數整數
//    輸出：3個以空格相間的YES或NO。
//    範例：
//    輸入：12321 55565 45554
//    輸出：YES NO YES

#include <iostream>

using namespace std;

int main() 
{
	int n, counter = 1;
	while (counter <= 3) 
	{
		cin >> n;
		counter = counter + 1;
		int a, b, c, d, e;
		e = n % 10;
		d = n / 10 % 10;
		c = n / 10 / 10 % 10;
		b = n / 10 / 10 / 10 % 10;
		a = n / 10 / 10 / 10 / 10 % 10;
		if (a == e&&b == d) 
		{
			cout << "YES" << " ";
		}
		else 
		{
			cout << "NO" << " ";
		}
	}
}

/*學弟寫的

#include <iostream>

using namespace std;

int main() 
{
	int counter = 0;
	int number;
	while (counter<3) 
	{
		cin >> number;
		if (number % 10 == number / 10000 % 10 && number / 10 % 10 == number / 1000 % 10) 
		{
			cout << "YES";
		}
		else cout << "NO";
		counter++;
	}
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[3];
    while(cin>>s[0]>>s[1]>>s[2])
	{
        for(int i = 0 ;i < 3 ; i++)
            if(equal(s[i].begin(), s[i].begin() + s[i].length() /2, s[i].rbegin()))
                cout<<"YES ";
            else
                cout<<"NO ";
            cout<<endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string s;
	while (cin >> s) 
	{
		bool c = true;
		for (int i = 0; i<s.length() / 2; i++)
			if (s[i] != s[s.length() - i - 1]) 
			{
				c = false;
				break;
			}
		if (c)
			cout << "YES ";
		else
			cout << "NO ";
	}

	return 0;
}

