#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int obj, unm;
	double may[5] = {0, 0, 0, 0, 0};
	cin >> obj;
	while (obj != -1){
		cin >> num;
	    switch(obj){
	        case 1:
	        	may[0] += 2.98 * num; break;
	        case 2:
	        	may[1] += 4.50 * num; break;
	        case 3:
	        	may[2] += 9.98 * num; break;
	        case 4:
	        	may[3] += 4.49 * num; break;
	        case 5:
	        	may[4] += 6.87 * num; break;
	        case -1:
	       	    break;
	    }
	    cin >> obj;
	}
	cout << setprecision(2) << fixed;
	for(int i = 0; i <= 4; i++)
		cout << may[i] << endl;
	cout << may[0]+may[1]+may[2]+may[3]+may[4] << endl;
}
