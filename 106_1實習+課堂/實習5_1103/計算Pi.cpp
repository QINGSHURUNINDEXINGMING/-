//    (�p��Pi) �q�H�U���L�a�żƭp��XPi��
//
//    Pi=4-4/3+4/5-4/7+4/9-4/11+�K
//
//    ��Jn�A��ܭp��ܦ��żƲ�n�����k������ȡC(�п�X�ܤp���I��K��)
//
//    �ҡG
//
//    ��J 1
//
//    ��X 4.00000000
//
//    ��J 10
//
//    ��X 3.04183962
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int counter = 1, number, a = 1;
	double Pi = 0;
	cin >> number;
	for (counter = 1; counter <= number; counter++) 
	{
		Pi = Pi + a*4. / (counter * 2 - 1);
		a *= -1;
	}
	cout << fixed << setprecision(8) << Pi;
}

/*�ǧ̼g��

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int count;
	double pi = 0.0;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		if (i % 2 == 0)
			pi -= 4.0 / (1 + (i - 1) * 2);
		else
			pi += 4.0 / (1 + (i - 1) * 2);
	}
	cout << setprecision(8) << fixed << pi;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
	{
        double pi = 0;
        for(int i = 0; i < n; i++)
            pi += (double)4/ (i*2+1) * (i%2 ? -1 : 1);
        cout<<fixed<<setprecision(8)<<pi;
    }
}

 
 
