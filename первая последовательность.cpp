#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	double sum=0;
	cin>> n;
	for (int i=1; i<=n; i*2){
		sum +=1./(i*(i+1));}
	cout<<fixed << setprecision(6)<<sum;
	return 0;}

