//    main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡barchart�H�̧�(�ۤ��ƧC�ܰ�����)�L�X�U�դH�ƪ����ϡC�Фŧ��main�禡�C
//    
//    Write function barchart to calcute and display the histogram of the grade distribution. Please do not modify the main function.
//    
//    ��X�d�Ҧp�U�G
//    
//    ************
//    
//    ********
//    
//    ********
//    
//    ******
//    
//    *******
//    
//    ********
//    
//    ****************
//    
//    ************
//    
//    ***********
//    
//    *********
//    
//    **

#include <iostream>
#include <iomanip>
using namespace std;

void barchart(int a[], int n) 
{
	int b[11] = { 0 };
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
		for (int m = 1; m <= b[s]; m++) 
		{
			cout << "*";
		}
		cout << '\n';
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
	barchart(score, arraySize);
}
/*    �ǧ̼g��

#include <iostream>
#include <iomanip>
using namespace std;

void barchart(int s[], int as)
{
	int f[11] = { 0 };
	for (int i = 0; i < as; i++)
		f[s[i] / 10]++;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < f[i]; j++)
			cout << "*";
		cout << endl;
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
	barchart(score, arraySize);
}
 
