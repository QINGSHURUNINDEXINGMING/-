//    (去掉極端值後平均)寫一個函式，該函式接收五個成績(0-100的整數)，然後忽略最大和最小的成績，取中間3個成績平均後傳回。
//
//    注意：若最大或最小成績有兩個以上，只忽略一個成績不計入平均。 
//    函式原形： double average(int, int, int, int, int)
//
//   Write a function that takes five integer values between 0 and 100
//
//   and returns the average of the remaining three values after discarding The top one value and the bottom one.
//
//   function prototype: double average(int, int, int, int, int)
//
//   撰寫下列函式並配合所給主程式執行，請自行含括所需之標頭檔。

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

/*    學弟寫的

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
 

