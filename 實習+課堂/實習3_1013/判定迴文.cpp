//    �j��O���Y�ӼƦr�Τ�r���y�A���ױq�Y�αq����Ū�_�A�����Ʀr�Τ�r�����ǳ��O�ۦP���C
//    �Ҧp�A�H�U����ƾ�Ƴ��O�j��G12321�B55555�B45554�M11611�C
//    ���g�@�ӥi�HŪ�J3�Ӥ���ƾ�ƪ����ε{���A�çP�w��Ū�J��3�Ӥ���ƾ�ƦU�O�_���j��A�Y�O�h�L�XYES�A�_�h�L�XNO�C
//    [���ܡG�Шϥΰ��k�M�ҼƹB��l�A�N�Ʀr���������ӧO�Ʀr�C]
//    ��J�G3�Ӥ���ƾ��
//    ��X�G3�ӥH�Ů�۶���YES��NO�C
//    �d�ҡG
//    ��J�G12321 55565 45554
//    ��X�GYES NO YES

#include <iostream>

using namespace std;

int main() 
{
	int n, counter = 1;
	while (counter <= 3) 
	{
		cin >> n;
		counter = counter + 1;
		int a, b, c, d, e;
		e = n % 10;
		d = n / 10 % 10;
		c = n / 10 / 10 % 10;
		b = n / 10 / 10 / 10 % 10;
		a = n / 10 / 10 / 10 / 10 % 10;
		if (a == e&&b == d) 
		{
			cout << "YES" << " ";
		}
		else 
		{
			cout << "NO" << " ";
		}
	}
}

/*�ǧ̼g��

#include <iostream>

using namespace std;

int main() 
{
	int counter = 0;
	int number;
	while (counter<3) 
	{
		cin >> number;
		if (number % 10 == number / 10000 % 10 && number / 10 % 10 == number / 1000 % 10) 
		{
			cout << "YES";
		}
		else cout << "NO";
		counter++;
	}
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[3];
    while(cin>>s[0]>>s[1]>>s[2])
	{
        for(int i = 0 ;i < 3 ; i++)
            if(equal(s[i].begin(), s[i].begin() + s[i].length() /2, s[i].rbegin()))
                cout<<"YES ";
            else
                cout<<"NO ";
            cout<<endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string s;
	while (cin >> s) 
	{
		bool c = true;
		for (int i = 0; i<s.length() / 2; i++)
			if (s[i] != s[s.length() - i - 1]) 
			{
				c = false;
				break;
			}
		if (c)
			cout << "YES ";
		else
			cout << "NO ";
	}

	return 0;
}

