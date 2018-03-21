//    (消除重複) 運用一維陣列解決以下問題：讀取20個數字，其值在10到100之間 (包括10和100)。
//    每次讀入時，檢查其值是否在10到100之間，再檢查該值是否已經出現過；若沒出現過才存入陣列。
//    讀入所有數字後，印出使用者輸入過的合法且不重複數值(依輸入的順序)。
//    假設在「最壞狀況」下，所有20個數字都不相同。請用最小的陣列來解決這個問題。

#include <iostream>

using namespace std;

int main() 
{
	int n, v[20] = {}, counter = 0;
	bool elimination = 0;

	for (int i = 1; i <= 20; i++) 
	{
		cin >> n;
		elimination = 0;

		if (n >= 10 && n <= 100)
		{
			for (int j = 0; j<counter; j++)
			{
				if (v[j] == n) 
				{
					elimination = 1;
					break;
				}
			}
			if (elimination == 0)
			{
				v[counter] = n;
				counter++;
			}
		}
	}
	for (int k = 0; k<counter; k++) 
	{
		cout << v[k];
	}
}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    set<int> a;
    for(int i = 0; i< 20 ;i++)
	{
        int n;
        cin>>n;
        if(n < 10 || n > 100 || a.find(n) != a.end())
            co ntinue;
        a.insert(n);
        cout<<n<<" ";
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int v[20]={0};
    int n1;
    for(int i=0;i<20;i++)
	{
    	cin>>n1;
    	if(n1>=10&&n1<=100)
		{
    		v[i]=n1;
    	}
    }
    
    
    
    for(int j=0;j<20;j++)
	{
    	if(v[j]==0)
    		continue;
    	
    	bool willCout=1;
        for(int k=0;k<j;k++)
		{
        	if(v[j]==v[k])
			{
        		willCout = 0;
        	}
    	}
    	if(willCout)
        	cout<<v[j];
       }
    }
 
