//    (各位數的和)寫一個函式int sumOfDigits(int n)，該函式接收一正整數n，計算並傳回此整數之各位數字和。
//
//    Write a function that takes a integer value n and returns the digit sum of n.
//
//    (e.g. the digit sum of 84001 is calculated as 8+4+0+0+1 = 13)
//
//    撰寫下列函式並配合所給主程式執行，請自行含括所需之標頭檔

#include <iostream>

using namespace std;

int sumOfDigits(int n);

int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}

int sumOfDigits(int n)
{
    int total=0;
    while(n!=0)
	{
        total+=n%10;
        n/=10;
    }
    return total;
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int);
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;
}

int sumOfDigits(int n)
{
    int total = 0;
    while(n>0)
	{
        total += n%10;
        n /= 10;
    }
    return total;
} 

