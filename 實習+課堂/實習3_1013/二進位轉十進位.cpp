//    �п�J�@�ӥu�]�t0�M1����� (�]�N�O�u�G�i��v���)�A�æL�X���ҥN���Q�i���ơC  
//    �d�ҡG
//    ��J�G110100100
//    ��X�G420

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

/*    �ǧ̼g��

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

