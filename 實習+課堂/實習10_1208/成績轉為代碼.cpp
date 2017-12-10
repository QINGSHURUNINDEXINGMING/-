//    運用一維陣列解決以下問題：輸入任意個介於0至100的數字以代表分數，依序輸出得到各等第 A(90-100) B(80-89) C(70-79) D(60-69) F(60以下) 的人數。請以警示值控制迴圈撰寫，並設警示值為-1。
//
//    Use a one-dimensional array to solve the following problem. 
//    Read in any number of integers as scores, each of which is between 0 and 100, inclusive. As each number is read, determines how many of the students there are in each of the grades.
//
//    例：
//
//    輸入
//
//    55 100 80 14 23 64 88 -1
//
//   輸出
//
//   1 2 0 1 3

#include <iostream>

using namespace std;

int main()
{
    int n;
    int var[5]={0};
    cin>>n;
    while(n!=-1)
	{
        if(90<=n&&n<=100)
		{
            var[0]++;
        }
		else if(80<=n&&n<=89)
		{
            var[1]++;
        }
		else if(70<=n&&n<=79)
		{
            var[2]++;
        }
		else if(60<=n&&n<=69)
		{
            var[3]++;
        }
		else
		{
            var[4]++;
        }
        cin>>n;
    }
    for(int i=0; i<5; i++)
	{
        cout<<var[i];
    }
}

/*   學弟寫的

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {0},n;
    while(cin>>n&&n!=-1)
        a[n/10-6 < 0 ? 0 : n==100 ? 4 : n/10-5]++;
    for(int i = 4; i>-1; i--)cout<<a[i]<<" ";
    return 0;
} 

