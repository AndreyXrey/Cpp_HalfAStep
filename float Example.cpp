	#include <iostream>
#include <stdbool.h>

using namespace std;

int main (){
	//long double x=7.5644, y=44.56564, rez;
	float x, y, rez;
	scanf("%f",&x);
	scanf("%f",&y);
	rez= x/y;
	
	cout<<rez<<endl;
	printf("R=%.28f\n",rez);
	
	
	return 0;
}
