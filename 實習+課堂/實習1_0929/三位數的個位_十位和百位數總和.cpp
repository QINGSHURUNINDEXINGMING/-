//    ���Ϫ̿�J�@�ӤT��ƪ���ơA�{���N�b�ù��W��ܦ��T��ƪ��Ӧ�B�Q��M�ʦ���`�M�C�Ҧp�G�ϥΪ̿�J487�A�h��X��19�C

#include <iostream>

using namespace std;

int main()
{
	int n, A;
	cout << "Please enter three digit integers: " << '\n' << "Example: 487" << '\n';
	cin >> n;
	A = (n % 10) + (n / 10 % 10) + (n / 10 / 10 % 10);
	cout << '\n' << A << '\n';
}

/*    �ǧ̥��� 
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int n;
     while(cin>>n)
	 {
         int m = 0;
         while(n>0)
		 {
             m += n%10;
             n /= 10;
         }
         cout<<m<<endl;
     }
}
