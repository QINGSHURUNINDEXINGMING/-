//    (用任意字元畫出正方形) 修改習題6.22所建立的函式為void square( int side, char fillCharacter )，將正方形以字元參數fillCharacter所規定的字元繪出。
//    並撰寫適當主函式讓使用者輸入邊長與字元。例如，如果使用者輸入邊長5，而字元為’#’，則會印出以下圖形：
//
//
//
//    #####
//
//    #####
//
//    #####
//
//    #####
//
//    #####

#include <iostream>

using namespace std;

void square(int side, char fillCharacter);

int main()
{
    int n;
    char c;
    cin>>n>>c;
    square(n, c);
}

void square(int side, char fillCharacter)
{
    for(int i=1;i<=side;i++)
	{
        for(int j=1;j<=side;j++)
		{
            cout<< fillCharacter;
        }
        cout<<'\n';
    }
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

void square( int side, char fillCharacter )
{
    for(int i =0; i< side; i++)
	{
        for(int j = 0; j < side; j++)
            cout<<fillCharacter;
        cout<<endl;
    }
}
int main()
{
    int sild;
    char c;
    cin >> sild >> c;
    square(sild,c);
} 

