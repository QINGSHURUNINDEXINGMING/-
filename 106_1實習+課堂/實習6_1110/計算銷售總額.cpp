//    (�p��P���`�B) �@�a�l�ʤ��q�P�⤭�ؤ��P�����~�A��s�������O�O�G
//    ���~1�w$2.98�A���~2�w$4.50�A���~3�w$9.98�A���~4�w$4.49�M���~5�w$6.87�C
//    �г]�p�@�ӵ{���A���Ū���@�s��Ʀr�t��G
//    1.	a) ���~�s��
//    2.	b) �P��q
//
//    �z���{�����Өϥ�switch�ԭz�A�H�P�w�U�Ӳ��~���s�����C 
//    �z���{�����p�����ܤW�@�g�Ҧ���X���~���`�s�����C
//    �ϥΤ@��ĵ�ܱ���j��A�M�w��ɸӲפ�{������̫᪺ܳ���G�C
//    �ҡG
//    ��J (�̧Ǭ����~1�P��q 5�B���~3�P��q 2�B���~4�P��q 2�B���~1�P��q 1)
//    1 5 3 2 4 2 1 1 -1
//    ��X (�e���ӼƦr���O�����~1�ܲ��~5���ӧO�`���A��6�ӼƦr���Ҧ����~���`���C)
//    17.88
//    0.00
//    19.96
//    8.98
//    0.00
//    46.82

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	int n1 = 0, n2 = 0;
	cin >> n1>> n2;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	while (n1!=-1) 
	{
		switch (n1) 
		{
		case 1:
			a+=n2;
			break;
		case 2:
			b+=n2;
			break;
		case 3:
			c+=n2;
			break;
		case 4:
			d+=n2;
			break;
		case 5:
			e+=n2;
			break;
		}
		cin>> n1;
		if(n1!=-1)
			cin >> n2;
	}
	cout << fixed << setprecision(2) << 2.98*a << '\n';
	cout << fixed << setprecision(2) << 4.5*b << '\n';
	cout << fixed << setprecision(2) << 9.98*c << '\n';
	cout << fixed << setprecision(2) << 4.49*d << '\n';
	cout << fixed << setprecision(2) << 6.87*e << '\n';
	cout << fixed << setprecision(2) << 2.98*a +4.5*b +9.98*c +4.49*d +6.87*e << '\n';
}

/*    �}�C 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price[]={2.98, 4.5, 9.98, 4.49, 6.87}; 
    double indiviual[5]={0};
	double total=0;
	int id, n;
    while(1)
	{
    	cin>>id;
    	if(id==-1)
		{
    		break;
		}
		cin>>n;
		total+=n*price[id-1];
		indiviual[id-1]+=n*price[id-1];
	}
	for(int j=0;j<5;j++){
		cout<<fixed<<setprecision(2)<<indiviual[j]<<'\n';
	}
	cout<<fixed<<setprecision(2)<<total;
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, item[5] = { 0 };
	double price[5] = { 2.98,4.50,9.98,4.49,6.87 };
	switch (n) {}
	while (cin >> n&&n != -1) 
	{
		int amount;
		cin >> amount;
		item[n - 1] += amount;
	}
	double sum = 0;
	cout << fixed << setprecision(2);
	for (int i = 0; i < 5; i++) 
	{
		cout << item[i] * price[i] << endl;
		sum += item[i] * price[i];
	}
	cout << sum << endl;
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	int obj, num;
	double may[5] = { 0 };
	cin >> obj;
	while (obj != -1) 
	{
		cin >> num;
		switch (obj) 
		{
		case 1:
			may[0] += 2.98 * num; break;
		case 2:
			may[1] += 4.50 * num; break;
		case 3:
			may[2] += 9.98 * num; break;
		case 4:
			may[3] += 4.49 * num; break;
		case 5:
			may[4] += 6.87 * num; break;
		case -1:
			break;
		}
		cin >> obj;
	}
	cout << setprecision(2) << fixed;
	for (int i = 0; i <= 4; i++)
		cout << may[i] << endl;
	cout << may[0] + may[1] + may[2] + may[3] + may[4] << endl;
}


