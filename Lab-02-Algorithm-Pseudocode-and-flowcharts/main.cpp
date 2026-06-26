/*Power Factor Status Checker*/

#include <iostream>
using namespace std;

int main(){
	
	double pf;
	cout << "Enter power factor (0 to 1):";
	cin >> pf;
	
	if(pf < 0 || pf >1){
		cout << "Invalid power factor";
	}
	else if (pf <= 0.50) {
		cout <<"Poor power factor";
	}
	else if (pf <= 0.80) {
		cout << "Fair power factor";
	}
	else if (pf <= 0.95) {
		cout << "Good power factor";
	}
	else{
		cout <<"Excellent power factor";
	}
	
	
	return 0;
}
