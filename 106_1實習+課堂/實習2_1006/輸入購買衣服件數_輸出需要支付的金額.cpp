//    �@���A95���A�Y���O��300���A�i���K����C��J�ʶR��A��ơA��X�ݭn��I�����B�]���G���^�A�C�L�ܨ��p�ơC

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int n;
	float t;
	cin >> n;
	t = 95. * n;
	if (t >= 300) 
	{
		t = 95 * n*0.85;
	}
	cout << fixed << setprecision(2) << t << '\n';
}

