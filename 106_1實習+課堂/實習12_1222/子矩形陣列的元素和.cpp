//    �@�ӤG���}�C���l�x�ΰ}�C���w�q���G���}�C���j�p��1*1�H�W���l�}�C�A�]�Y�O�b�G���}�C�W���N�e�X�@�ӯx�ΰϰ�ҥ]�򪺤l�}�C�^�C
//    
//    A submatrix of an m��n matrix is a matrix formed by taking a block of the entries from the original matrix.
//    
//    1 3 5 7
//    
//    9 2 3 4
//    
//    5 6 7 8
//    
//    -1 -2 -3 -4
//    
//    �Ҧp�H�U�}�C�Y���W���}�C���l�x�ΰ}�C(�ۥ��W����[0][2]�ܥk�U����[2][3]���x��)�C
//    
//    For example, the matrix below is a submatrix of the above one.
//    
//    5 7
//    
//    3 4
//    
//    7 8
//    
//    
//    
//    ���D�G�����@��4*4���G���}�C�H�Τl�x�ΰ}�C�����W�I(�C�B��)�Υk�U�I(�C�B��)�A�м��g�禡sumOfElements�p��öǦ^�Ӥl�x�ΰ}�C�������M�C
//    
//    Given a 4*4 matrix with integer element value from -128 to 127 and a submatrix, 
//	write a function sumOfElements to compute and return the sum of all elements in the submatrix.
//    
//    
//    
//    �{����J:
//    
//    20�ӥH�ťչj�}����ơA�e16�ӥN��4*4���G���}�C�A�H�C���D�C�}�C�������Ȧb-128��127�����]�]�t���I�^�C
//    ��4�ӥN���l�x�ΰ}�C�����W�I(�C�B��)�Υk�U�I(�C�B��)�A�Ҧp0 0 1 3 ��ܥѥ��W����[0][0]�ܥk�U����[1][3]�����l�x�ΰ}�C�C
//    
//    
//    
//    Input: 16 integers between -128 and 172 followed by four integers between 0 and 3. 
//    The first 16 integers represent elements of the 4*4 matrix, 
//	and the last four represent the indexes of the submatrix in the order of the row index of the top-left element, 
//    the column index of the top-left element, the row index of the bottom-right element, the column index of the bottom-right element.
//    
//    
//    
//    �p��J0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3
//    
//    If inputs are 0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3, the correspondent matrix and submatrix are shown below.
//    
//    
//    
//    �N��}�C
//    
//    0 -2 -7 0
//    
//    9 2 -6 2
//    
//    -4 1 -4 1
//    
//    -1 8 0 -2
//    
//    �Ψ�l�}�C
//    
//    0 -2 -7 0
//    
//    9 2 -6 2
//    
//    
//    
//    �{����X:
//    
//    �Ӥl�x�ΰ}�C�������M�C
//    
//    Output: the sum of all elements of the submatrix
//    
//    
//    
//    �d��:
//    
//    ��J
//    
//    0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3
//    
//    ��X
//    
//    -2
//    
//    
//    
//    Ex:
//    
//    input:
//    
//    0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3
//    
//    output
//    
//    -2

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
	int tl_row, tl_column, dr_row, dr_column;

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			cin >> array[i][j];
		}
	}
	cin >> tl_row >> tl_column >> dr_row >> dr_column;
	cout << sumOfElements(array, tl_row, tl_column, dr_row, dr_column);
}

