//    輸入年份，判斷是否為閏年。如果是，則輸出「YES」，否則輸出「NO」。提示：簡單地判斷除以4的餘數是不夠的

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

