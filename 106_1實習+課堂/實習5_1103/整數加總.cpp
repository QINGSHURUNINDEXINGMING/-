//    (��ƥ[�`) �g�ӵ{���A�ϥ�for�ԭz�[�`�@�s���ơC���]��J���Ĥ@�Ӿ�ơA�N�����Y�N��J���ƭȭӼơC�z���{�����Ӧb�C�ӿ�J�ԭz���A�C���uŪ���@�ӼƭȡC�嫬������J�ǦC�i��O
//
//    �䤤��5�N���U�Ӧ�5�ӼƭȻݭn�i��ۥ[�C
//
//    �ҡG
//
//    ��J 5 100 200 300 400 500
//
//    ��X 1500

#include <iostream>

using namespace std;

int main() 
{
	int counter , number, total = 0;
	cin >> counter;
	for (int i = 1; i <= counter; i++) 
	{
		cin >> number;
		total += number;
	}
	cout << total;
}

/*�ǧ̼g��

#include <iostream> 
using namespace std;
int main()
{
	int count;
	int num;
	int sum = 0;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum;
}
 
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		long long int sum = 0, c;
		for (int i = 0; i < n; i++) 
		{
			cin >> c;
			sum += c;
		}
		cout << sum << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		int total = 0, s;
		for (int i = 0; i < n; i++) 
		{
			cin >> s;
			total += s;
		}
		cout << total << endl;
	}
	return 0;
}
