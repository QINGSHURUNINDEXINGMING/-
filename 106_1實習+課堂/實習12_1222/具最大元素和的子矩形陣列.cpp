//    一個二維陣列的子矩形陣列之定義為二維陣列的大小為1*1以上的子陣列，（即是在二維陣列上任意畫出一個矩形區域所包圍的子陣列）。
//    請撰寫程式輸入陣列、計算並輸出此陣列的所有子矩形陣列中具有最大元素和之子矩形陣列，以及該子矩形陣列的元素和。
//    
//    Given a 4*4 matrix with integer element value from -128 to 127, 
//    output the sum of elements of the submatrix which has the largest sum of elements.
//    
//    
//    
//    程式輸入:
//    
//    16個以空白隔開的整數，代表此4*4的二維陣列，以列為主。陣列元素的值在-128至127之間（包含端點）。
//    
//    Input: 16 integer numbers (between -128 to 127) which represent elements of a 4*4 metrix in row major.
//    
//    
//    
//    如輸入0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 代表陣列
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
//    輸出:
//    
//    
//    
//    
//    1.	具有最大元素和的子矩形陣列(以子陣列的左上元素位置及右下元素位置表示)
//    
//    
//    2.	該子矩形陣列之元素和
//    
//    
//    Output:
//    
//    The element sum of the matrix with the largest element sum.
//    
//    
//    
//    範例:
//    
//    輸入
//    
//    0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2
//    
//    輸出
//    
//    15
//    
//    (因上例中具最大元素和的子矩形陣列如下，其元素和為15)
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

