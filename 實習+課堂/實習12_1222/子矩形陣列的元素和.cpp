//    一個二維陣列的子矩形陣列之定義為二維陣列的大小為1*1以上的子陣列，（即是在二維陣列上任意畫出一個矩形區域所包圍的子陣列）。
//    
//    A submatrix of an m×n matrix is a matrix formed by taking a block of the entries from the original matrix.
//    
//    1 3 5 7
//    
//    9 2 3 4
//    
//    5 6 7 8
//    
//    -1 -2 -3 -4
//    
//    例如以下陣列即為上面陣列的子矩形陣列(自左上元素[0][2]至右下元素[2][3]的矩形)。
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
//    問題：今給一個4*4的二維陣列以及子矩形陣列的左上點(列、行)及右下點(列、行)，請撰寫函式sumOfElements計算並傳回該子矩形陣列的元素和。
//    
//    Given a 4*4 matrix with integer element value from -128 to 127 and a submatrix, 
//	write a function sumOfElements to compute and return the sum of all elements in the submatrix.
//    
//    
//    
//    程式輸入:
//    
//    20個以空白隔開的整數，前16個代表此4*4的二維陣列，以列為主。陣列元素的值在-128至127之間（包含端點）。
//    後4個代表此子矩形陣列的左上點(列、行)及右下點(列、行)，例如0 0 1 3 表示由左上元素[0][0]至右下元素[1][3]間的子矩形陣列。
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
//    如輸入0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3
//    
//    If inputs are 0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3, the correspondent matrix and submatrix are shown below.
//    
//    
//    
//    代表陣列
//    
//    0 -2 -7 0
//    
//    9 2 -6 2
//    
//    -4 1 -4 1
//    
//    -1 8 0 -2
//    
//    及其子陣列
//    
//    0 -2 -7 0
//    
//    9 2 -6 2
//    
//    
//    
//    程式輸出:
//    
//    該子矩形陣列的元素和。
//    
//    Output: the sum of all elements of the submatrix
//    
//    
//    
//    範例:
//    
//    輸入
//    
//    0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3
//    
//    輸出
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

