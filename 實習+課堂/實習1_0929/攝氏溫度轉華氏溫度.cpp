//    �Q�� std::fixed , std::setpricision() ��y�ާ@�l�i�H��ܯB�I��(���)���p�Ʀ��(�ninclude ���Y�� iomanip)�C 
// 
//    ����floating.cpp���ϥΦ��k��ܯB�I�ƪ��Ҥl�C
//
//    ���D�G�м��g�@�{��main.cpp�A�ӵ{����J��ƪ����ūסA��X�ؤ�ū� (��: �إ·ū� = 32 + 9*��·ū�/5) �C
//
//    ��J�G������ū� ��X�G�۹������ؤ�ū�(��ܦܤp���I��2��)

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int number;
	float F;
	cout << "Please enter the Celsius: " << '\n' << "Example: 100�X" << endl;
	cin >> number;
	F = (number * 9) / 5. + 32;
	cout << fixed << setprecision(2) << F << endl;
}

/*    �ǧ̥���

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a;
	while (cin >> a)
	{
		cout << fixed << setprecision(2) << 32 + 9 * a / 5 << endl;
	}
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	float f;
	int d;
	while (1) 
	{
		cout << "Please enter the number: ";
		cin >> f;
		cout << "Please enter the digit: ";
		cin >> d;
		cout << '\n' << fixed << setprecision(d) << f << '\n';
	}
}



 
