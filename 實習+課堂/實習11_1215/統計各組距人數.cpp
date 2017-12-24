//    main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡distribution�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA�ȩ̀�(�ۤ��ƧC�ܰ�����)�L�X�έp���G�C�Фŧ��main�禡�C
//    
//    Write function distribution to calcute and print the the grade distribution for marks of 100 students with categories (0-9, 10-19, �K,90-99, 100). Please do not modify the main function.
//    
//    
//    
//    ��X�d�Ҧp�U(�ƭȶ��Ť@��)�G
//    
//    12 8 8 6 7 8 16 12 11 9 2

#include <iostream>
#include <iomanip>
using namespace std;

void distribution(int a[], int n) 
{
	int b[11] = { 0 };
	for (int i = 0; i<n; i++) 
	{
		for (int j = i + 1; j<n; j++) 
		{
			if (a[i] >= a[j])
			{
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int k = 0; k<n; k++) 
	{
		switch (a[k] / 10) 
		{
		case 0: b[0]++; break;
		case 1: b[1]++; break;
		case 2: b[2]++; break;
		case 3: b[3]++; break;
		case 4: b[4]++; break;
		case 5: b[5]++; break;
		case 6: b[6]++; break;
		case 7: b[7]++; break;
		case 8: b[8]++; break;
		case 9: b[9]++; break;
		case 10: b[10]++; break;
		}
	}
	for (int s = 0; s<11; s++)
	{
		cout << b[s] << " ";
	}
}

int main()
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++)
	{
		cin >> score[i];
	}
	distribution(score, arraySize);
}


int main()
{
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++)
	{
		cin >> score[i];
	}
	distribution(score, arraySize);
}

/*    �ǧ̼g��

#include <iostream>
#include <iomanip>
using namespace std;

void distribution(int s[], int as) 
{
	int f[11] = { 0 };
	for (int i = 0; i < as; i++)
		f[s[i] / 10]++;
	for (int i = 0; i < 11; i++)
		cout << f[i] << " ";
}

int main() {
	const int arraySize = 100;
	int score[arraySize];
	for (int i = 0; i<arraySize; i++) 
	{
		cin >> score[i];
	}
	distribution(score, arraySize);
}
 

