//    (��������) �B�Τ@���}�C�ѨM�H�U���D�GŪ��20�ӼƦr�A��Ȧb10��100���� (�]�A10�M100)�C
//    �C��Ū�J�ɡA�ˬd��ȬO�_�b10��100�����A�A�ˬd�ӭȬO�_�w�g�X�{�L�F�Y�S�X�{�L�~�s�J�}�C�C
//    Ū�J�Ҧ��Ʀr��A�L�X�ϥΪ̿�J�L���X�k�B�����Ƽƭ�(�̿�J������)�C
//    ���]�b�u���a���p�v�U�A�Ҧ�20�ӼƦr�����ۦP�C�Хγ̤p���}�C�ӸѨM�o�Ӱ��D�C

#include <iostream>

using namespace std;

int main() 
{
	int n, v[20] = {}, counter = 0;
	bool elimination = 0;

	for (int i = 1; i <= 20; i++) 
	{
		cin >> n;
		elimination = 0;

		if (n >= 10 && n <= 100)
		{
			for (int j = 0; j<counter; j++)
			{
				if (v[j] == n) 
				{
					elimination = 1;
					break;
				}
			}
			if (elimination == 0)
			{
				v[counter] = n;
				counter++;
			}
		}
	}
	for (int k = 0; k<counter; k++) 
	{
		cout << v[k];
	}
}

/*    �ǧ̼g��

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    set<int> a;
    for(int i = 0; i< 20 ;i++)
	{
        int n;
        cin>>n;
        if(n < 10 || n > 100 || a.find(n) != a.end())
            co ntinue;
        a.insert(n);
        cout<<n<<" ";
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int v[20]={0};
    int n1;
    for(int i=0;i<20;i++)
	{
    	cin>>n1;
    	if(n1>=10&&n1<=100)
		{
    		v[i]=n1;
    	}
    }
    
    
    
    for(int j=0;j<20;j++)
	{
    	if(v[j]==0)
    		continue;
    	
    	bool willCout=1;
        for(int k=0;k<j;k++)
		{
        	if(v[j]==v[k])
			{
        		willCout = 0;
        	}
    	}
    	if(willCout)
        	cout<<v[j];
       }
    }
 
