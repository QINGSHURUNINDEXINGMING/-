//    (�~�ȭ������p��{��) �Y�a�j���q�O���Ӧ������覡�p��~�ȭ����~��C
//    �~�ȭ������~�O�C�P��$200�����A�[�W�Ӷg�P����B���ʤ���9�C
//    �Ҧp�A�@�g�P��$5000�����ī~���~�ȭ��N��$200�����[$5000�������ʤ���9�A�]�N�O$650�����C
//    �}�o�@��C++�{���A�ϥ�while�ԭz��J�Ʀ�~�ȭ��W�g���P����B�A��J-1(ĵ�ܭ�)�ᵲ���íp��B��ܦU�~�ȭ����~��C
//    �@���B�z�@��~�ȭ����~��C
//
//    �ҡG��J 5000.00 6000.00 7000.00 -1
//
//    ��X $650.00 $740.00 $830.00

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	float money;
	cin >> money;
	while (money != -1) 
	{
		cout << fixed << setprecision(2) << 200+money*0.09;
		cin >> money;
	}
}

/*    �ǧ̼g��

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	double num;
	cin >> num;
	while (num != -1) 
	{
		cout << setprecision(2) << fixed << 200 + num * 0.09;
		cin >> num;
	}
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    while(cin>>n)
	{
        if(n == -1)
            break;
        cout<<fixed<<setprecision(2)<<200+n*0.09<<" ";
    }
}
