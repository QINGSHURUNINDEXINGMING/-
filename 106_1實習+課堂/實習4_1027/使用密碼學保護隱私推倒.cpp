//    (�ϥαK�X�ǫO�@���p) �Y�@�����q�Q�n�z�L���ں����ǰe��ơA�L�̩Ҧ�����Ƴ��O�H�|��ƪ���ƨӶǰe
//    �åH�U�C����k�[�K�G�N�C�@��Ƥ��O�[7�A�M��N���ư��H10�A�ұo�l�ƧY���s���ơA�H�����N��Ӫ���ơC
//    �M��N�Ĥ@�Ӧ�ƩM�ĤT�Ӧ�ƥ洫�A�ĤG�Ӧ�ƩM�ĥ|�Ӧ�ƥ洫�C
//    �̫�o��[�K�L����ơC�мg�@�ӵ{��Ū�J�[�K�L���|��ƾ�ơA�M��N���ѱK����Ӫ��Ʀr�C
//
//    �ҡG��J 189
//
//    ��X 1234

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int number;
	cin >> number;
	int a = (number % 10 + 3) % 10;
	int b = (number / 10 % 10 + 3) % 10;
	int c = (number / 10 / 10 % 10 + 3) % 10;
	int d = (number / 10 / 10 / 10 % 10 + 3) % 10;
	a = a^c;
	c = a^c;
	a = a^c;
	b = b^d;
	d = b^d;
	b = b^d;
	int total = d * 1000 + c * 100 + b * 10 + 1 * a;
	cout << total;
}

/*    �ǧ̼g��
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while (cin >> n) 
	{
		for (int i = 1; i <= 1000; i *= 10)
			n = n - (n % (i * 10) / i) *i + (((n % (i * 10) / i) + 3) % 10) * i;
		cout << (n % 100) * 100 + n / 100 << endl;
	}
}

#include <iostream>
using namespace std;

int main() 
{
	int num;
	int ans = 0;
	cin >> num;

	ans += (num / 100 % 10 - 7 + 10) % 10;
	ans += (num / 1000 % 10 - 7 + 10) % 10 * 10;
	ans += (num / 1 % 10 - 7 + 10) % 10 * 100;
	ans += (num / 10 % 10 - 7 + 10) % 10 * 1000;

	cout << ans;
}

 

