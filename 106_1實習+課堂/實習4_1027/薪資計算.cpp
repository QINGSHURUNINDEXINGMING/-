//    (�~��p��{��) �г]�p�@�Өϥ�while�ԭz��C++�{���A���X�C��¾�����~���`�B�C
//    �Ӥ��q��I�C��¾���~�ꪺ�覡�A�N�O�e40�Ӥp�ɡA�O�H�u���~��v�ӭp��A�W�L40�p�ɪ������h���ӡu����~�ꪺ�@���b�v�O�Ψӥ[�H�p��C
//    ���]�z�w�g���Ӥ��q�Ҧ�¾�����W��A�C��¾���W�@�g���u�@�ɼƩM�C��¾�������~�C
//    �{������J�C����u���u�ɻP�~��A�èM�w�M��ܳo�ǭ��u���`���J�C
//
//    �ҡG��J 39 10.00 40 10.00 41 10.00 -1
//
//    ��X $390.00 $400.00 $415.00

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	float time, money, total;
	cin >> time;
	while (time != -1) 
	{
		cin >> money;
		total = money*time;
		if (time>40) 
		{
			total = 40 * money + (time - 40)*1.5*money;
		}
		cout << fixed << setprecision(2) << total;
		cin >> time;
	}
}


/*�ǧ̼g��

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int num;
	double may;
	cin >> num;
	while (num != -1) 
	{
		cin >> may;
		if (num < 40)
			cout << setprecision(2) << fixed << num * may << " ";
		else
			cout << setprecision(2) << fixed << (40 * may) + (num - 40) * may * 1.5 << " ";
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
        double race;
        cin>>race;
        if(n>40)
            cout<<fixed<<setprecision(2)<<40*race + (n-40)*race*1.5 <<" ";
        else
            cout<<fixed<<setprecision(2)<<n*race<<" ";
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	double race;
	while (cin >> n&&n != -1) 
	{
		cin >> race;
		cout << fixed << setprecision(2) << ((n > 40) ? (40 * race + (n - 40)* race * 1.5) : (n*race)) << " ";
	}
	return 0;
}
