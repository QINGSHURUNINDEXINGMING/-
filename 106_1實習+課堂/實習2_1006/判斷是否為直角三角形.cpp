//    ��J�T���ΤT����׭ȡ]��������ơ^�A�P�_���O�_�ର�����T���Ϊ��T������C
//    �p�G�i�H�A�h��X�uYES�v�A�p�G����A�h��X�uNO�v�C�p�G�ڥ��L�k�c���T���ΡA�h��X�uNOT A TRIANGLE�v�C

#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a)) 
	{
		cout << "Not a triangle" << '\n';
	}
	else 
	{
		if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) 
		{
			cout << "Yes" << '\n';
		}
		else 
		{
			cout << "No" << '\n';
		}
	}
}

 
