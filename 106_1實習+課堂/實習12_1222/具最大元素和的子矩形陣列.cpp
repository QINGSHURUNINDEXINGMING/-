//    �@�ӤG���}�C���l�x�ΰ}�C���w�q���G���}�C���j�p��1*1�H�W���l�}�C�A�]�Y�O�b�G���}�C�W���N�e�X�@�ӯx�ΰϰ�ҥ]�򪺤l�}�C�^�C
//    �м��g�{����J�}�C�B�p��ÿ�X���}�C���Ҧ��l�x�ΰ}�C���㦳�̤j�����M���l�x�ΰ}�C�A�H�θӤl�x�ΰ}�C�������M�C
//    
//    Given a 4*4 matrix with integer element value from -128 to 127, 
//    output the sum of elements of the submatrix which has the largest sum of elements.
//    
//    
//    
//    �{����J:
//    
//    16�ӥH�ťչj�}����ơA�N��4*4���G���}�C�A�H�C���D�C�}�C�������Ȧb-128��127�����]�]�t���I�^�C
//    
//    Input: 16 integer numbers (between -128 to 127) which represent elements of a 4*4 metrix in row major.
//    
//    
//    
//    �p��J0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 �N��}�C
//    
//    If inputs are 0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2, the correspondent matrix is shown below.
//    
//    0 -2 -7 0
//    
//    9 2 -6 2
//    
//    -4 1 -4 1
//    
//    -1 8 0 -2
//    
//    
//    
//    ��X:
//    
//    
//    
//    
//    1.	�㦳�̤j�����M���l�x�ΰ}�C(�H�l�}�C�����W������m�Υk�U������m���)
//    
//    
//    2.	�Ӥl�x�ΰ}�C�������M
//    
//    
//    Output:
//    
//    The element sum of the matrix with the largest element sum.
//    
//    
//    
//    �d��:
//    
//    ��J
//    
//    0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2
//    
//    ��X
//    
//    15
//    
//    (�]�W�Ҥ���̤j�����M���l�x�ΰ}�C�p�U�A�䤸���M��15)
//    
//    9 2
//    
//    -4 1

#include <iostream>
#include <iomanip>

using namespace std;
const int rows = 4;
const int columns = 4;

int sumOfElements(int v[][columns], int tl_r, int tl_c, int dr_r, int dr_c) 
{
	int total = 0;
	for (int i = tl_r; i <= dr_r; i++)
	{
		for (int j = tl_c; j <= dr_c; j++)
		{
			total += v[i][j];
		}
	}
	return total;
}

int main()
{
	int array[rows][columns];
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++) 
		{
			cin >> array[i][j];
		}
	}

	int max = sumOfElements(array, 0, 0, 0, 0);

	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<4; j++)
		{
			for (int k = i; k<4; k++)
			{
				for (int m = j; m<4; m++)
				{
					int t = sumOfElements(array, i, j, k, m);
					if (t>max) 
					{
						max = t;
					}
				}
			}
		}
	}
	cout << max;
}

