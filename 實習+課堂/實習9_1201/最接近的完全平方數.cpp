//    (最接近的完全平方數)寫一個函式int sqrfloor(int n)，該函式接收一正整數n，計算並傳回小於等於n且最接近n的完全平方數k(完全平方數：開根號為正整數之數)。
//    如sqrfloor(5)則傳回4；sqrfloor(9)則傳回9。

#include <iostream>

using namespace std;

int sqrfloor(int n)
{
	for (int i = n; i>0; i--) 
	{
		for (int j = 0; j < i; j++) 
		{
			if (j*j == i) 
			{
				return i;
			}
		}
	}
}

int main()
{
	int num;
	cin >> num;
	cout << sqrfloor(num) << endl;

}

/*    學弟寫的

#include <bits/stdc++.h>
using namespace std;

int sqrfloor(int num)
{
    return (int)sqrt(num)*(int)sqrt(num);
}
int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;

}

#include<iostream>
using namespace std;

int sqrfloor(int num)
{
    for (int i = 1; ;i++)
	{
        if(i*i<=num && (i+1)*(i+1)>num)
            return i*i;
    }
}

int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
    
}


#include <iostream>
using namespace std;
int main()
{
	int temp;
    int array[5] = {5,4,8,6,7};
	for(int i=0; i < 5; i++)
	{
		for(int j=0; j < 5; j++)
		{
			if(array[i] > array[i+1])
			{
			    temp = array[i];
			    array[i] = array[i+1];
			    array[i+1] = temp;
			}
		}
	}  
	for(int i=0; i < 5; i++)
	{
    	cout << array[i] << " ";
    } 
}
 
