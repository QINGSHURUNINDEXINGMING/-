//    (��ƪ�������) �г]�p�@�Өϥ�for�ԭz���{���A�p��æL�X�X�Ӿ�ƪ������ȡC���]�̫�@��Ū�J���Oĵ�ܭ�9999�C�嫬������J�ǦC�i��O�G
//
//    ��ܵ{�����ӭp��b9999���e�Ҧ��ƭȪ������ȡC(�п�X�ܤp���I����)
//
//    �ҡG
//
//    ��J 10 8 11 7 9 9999
//
//    ��X 9.00

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	float n = 0, counter = 0, total = 0;
	cin >> n;
	for (; n != 9999;) 
	{
		total += n;
		counter++;
		cin >> n;
	}
	cout << fixed << setprecision(2) << total / counter;
}

/*    �ǧ̼g��
 
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int num;
	int i;
	int sum = 0;
	cin >> num;
	for(i = 0; num != 9999; i++)
	{
	    sum += num;
	    cin >> num;
	}
	cout << setprecision(2) << fixed << 1.0 * sum / i;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, sum = 0, c = 0;
    for(;cin>>n&& n != 9999;c++)
        sum+=n;
    cout<<fixed<<setprecision(2)<<sum/c<<endl;
    return 0;
}
 
 

