//    ��J�~���A�P�_�O�_���|�~�C�p�G�O�A�h��X�uYES�v�A�_�h��X�uNO�v�C���ܡG²��a�P�_���H4���l�ƬO������

#include <iostream>

using namespace std;

int main() 
{
	int y;
	cout << "Please enter the year: \n";
	cin >> y;
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
	{
		cout << "Yes" << '\n';
	}
	else 
	{
		cout << "No" << '\n';
	}
}

