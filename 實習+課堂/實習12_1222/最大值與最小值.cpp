//    �м��g�@�Ө禡maxmin(int a, int b, int c, int*maxPtr, int*minPtr)�A�Ө禡�N�p��a, b, c�����̤j�ȻP�̤p�ȡA�çQ�ΰѼ�maxPtr�PminPtr�Ǧ^�C
//    �аt�X�U���D�{������C

#include<iostream>
#include<cstdlib>
using namespace std;

void maxmin(int a, int b, int c, int *maxPtr, int *minPtr)
{
	int v[3] = { a, b ,c };
	*maxPtr = v[0];
	*minPtr = v[0];
	for (int i = 0; i<3; i++)
	{
		if (*maxPtr<v[i]) 
		{
			*maxPtr = v[i];
		}
		if (*minPtr>v[i]) 
		{
			*minPtr = v[i];
		}
	}
}

int main()
{
	int max, min;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	maxmin(n1, n2, n3, &max, &min);
	cout << max << " " << min << endl;
	system("PAUSE");
}

