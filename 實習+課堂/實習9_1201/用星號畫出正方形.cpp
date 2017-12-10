(用星號畫出正方形) 請寫出一個函式void square( int side )，該函式在螢幕的左邊用星號畫出一個實心正方形，其邊長是由整數參數side指定。
並撰寫適當主函式讓使用者輸入邊長。例如，如果使用者輸入4，呼叫函式後會顯示以下圖形：

****

****

****

****

#include <iostream>

using namespace std;

void square(int side);

int main()
{
    int n;
    cin>>n;
    square(n);
}

void square(int side)
{
    for(int i=1;i<=side;i++)
	{
        for(int j=1;j<=side;j++)
		{
            cout<<"*";
        }
        cout<<'\n';
    }
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

void square( int side )
{
    for(int i =0; i< side; i++)
	{
        for(int j = 0; j < side; j++)
            cout<<'*';
        cout<<endl;
    }
}
int main()
{
    int sild;
    cin >> sild;
    square(sild);
} 


