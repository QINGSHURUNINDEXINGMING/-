//    (Ч计) 级糶ㄧΑisPerfect﹚竡籔ㄧΑ
//    璝琘俱计┮Τ计 (珹1ぃ赣计セō) 癬ㄓ羆㎝单赣俱计玥嘿Ч计 (perfect number)
//    ㄒ6碞琌Ч计6 = 1 + 2 + 3级糶ㄧΑisPerfect﹚ㄤ俱计把计number琌Ч计
//    倒﹚祘Α盢眔ㄏノ块start籔endㄢ俱计ノ赣ㄧΑ耞startendぇ丁┮ΤЧ计
//    猔種祘ΑいmainㄧΑ叫づэ度ㄧΑ﹚竡籔ㄧΑ叫づㄏノ计厩ㄧΑ畐

#include <iostream>

using namespace std;

bool isPerfect(int a);

int main()
{
	int start, end;
	cin >> start >> end;

	for (int j = start; j <= end; j++)
	{
		if (isPerfect(j))
			cout << j << " ";
	}

	cout << endl;
}

bool isPerfect(int a) 
{
	int sum = 0;
	if (a % 2 == 0) 
	{
		for (int i = 1; i<a; i++) 
		{
			if (a%i == 0) 
			{
				sum += i;
			}
		}
	}
	else 
	{
		sum = 0;
	}

	if (sum == a) 
	{
		return true;
	}
	else 
	{
		return false;
	}

}

/*    厩糶
 
#include <iostream>
using namespace std;

bool isPerfect(int);

int main()
{
   int start, end;
   cin >>start >>end;
   
   for ( int j = start; j <= end; j++ )
   {
      if ( isPerfect( j ) ) 
         cout << j<<" "; 
   } 

   cout << endl;
}

bool isPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n ;i++)
        if(n % i == 0)
            sum += i;
    return sum == n;
}
