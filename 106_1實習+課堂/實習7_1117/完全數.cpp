//    (������) ���g�禡isPerfect�w�q�P�禡�쫬
//    �Y�Y�Ӿ�ƪ��Ҧ��]�� (�]�A1�A�����]�t�ӼƦr����) �ۥ[�_�Ӫ��`�M�A��n����Ӿ�ơA�h�٬������� (perfect number)�C
//    �Ҧp6�N�O�@�ӧ����ơA�]��6 = 1 + 2 + 3�C���g�@�Ө禡isPerfect�A�P�w���ưѼ�number�O�_�������ơC
//    ���w���D�{���N���o�ϥΪ̿�J��start�Pend���ơA�Q�θӨ禡�P�_�æL�Xstart��end�����Ҧ��������ơC
//    �`�N�G�{����main�禡�Фŭק�A�ȥ[�W�禡�w�q�P�禡�쫬�A�ФŨϥμƾǨ禡�w�C

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

/*    �ǧ̼g��
 
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
