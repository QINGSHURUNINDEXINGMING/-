//    (�̱��񪺧��������)�g�@�Ө禡int sqrfloor(int n)�A�Ө禡�����@�����n�A�p��öǦ^�p�󵥩�n�B�̱���n�����������k(��������ơG�}�ڸ�������Ƥ���)�C
//    �psqrfloor(5)�h�Ǧ^4�Fsqrfloor(9)�h�Ǧ^9�C

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

/*    �ǧ̼g��

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
 
