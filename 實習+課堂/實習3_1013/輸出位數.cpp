//    輸入一個不超過109的正整數，輸出它的位數。例如：12735的位數是5、0的位數是0。請不要使用任何數學函數，只使用算數運算和迴圈

#include<iostream>

using namespace std;

int main() 
{
	int n, counter=0;
	cin >> n;
	while (n != 0) 
	{
		n /= 10;
		counter++;
	}
	cout << counter;
}

/*學弟寫的

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string n;
	while (cin >> n) 
	{
		if (n == "0")
			cout << 0 << endl;
		else
			cout << n.length();
	}
} 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	while (cin >> n)
	{
		int total = 0;
		for (; n>0; total++)
			n /= 10;
		cout << total << endl;
	}
	return 0;
}

