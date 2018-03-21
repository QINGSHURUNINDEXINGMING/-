//    (�h�����ݭȫᥭ��)�g�@�Ө禡�A�Ө禡�������Ӧ��Z(0-100�����)�A�M�᩿���̤j�M�̤p�����Z�A������3�Ӧ��Z������Ǧ^�C
//
//    �`�N�G�Y�̤j�γ̤p���Z����ӥH�W�A�u�����@�Ӧ��Z���p�J�����C 
//    �禡��ΡG double average(int, int, int, int, int)
//
//   Write a function that takes five integer values between 0 and 100
//
//   and returns the average of the remaining three values after discarding The top one value and the bottom one.
//
//   function prototype: double average(int, int, int, int, int)
//
//   ���g�U�C�禡�ðt�X�ҵ��D�{������A�Цۦ�t�A�һݤ����Y�ɡC

#include <iostream>
#include <iomanip>

using namespace std;

double average(int a, int b, int c, int d, int e);
int main()
{
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout << setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}
double average(int a, int b, int c, int d, int e)
{
    int v[5]={a,b,c,d,e};
    int max =v[0],min =v[0] ,total=0;
    for(int i=0;i<5;i++)
	{
        if(v[i]>max)
		{
            max=v[i];
        }
        if(v[i]<min)
		{
            min=v[i];
        }
        total+=v[i];
    }
    return (total-max-min)/3.;
}

/*    �ǧ̼g��

#include <bits/stdc++.h>

using namespace std;

double average(int, int, int, int, int);
int main()
{
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout << setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}

double average(int a, int b, int c, int d, int e)
{
    double _max = a, _min = a;
    _max = max(_max,(double)b);
    _max = max(_max,(double)c);
    _max = max(_max,(double)d);
    _max = max(_max,(double)e);
    _min = min(_min,(double)b);
    _min = min(_min,(double)c);
    _min = min(_min,(double)d);
    _min = min(_min,(double)e);
    return (a+b+c+d+e - _max - _min)/3.0;
}


#include <bits/stdc++.h>
using namespace std;
double average();
int main()
{
    cout << setprecision(2)<<fixed<<average()<<endl;
    
}

double average()
{
    double input, _max, _min, total =0;
    cin>>input;
    total+=input;
    _max = input;
    _min = input;
    for(int i = 1; i < 5; i++)
	{
        cin>>input;
        total += input;
        _max = max(input, _max);
        _min = min(input, _min);
    }
    return (total - _max - _min) /3;
}
 

