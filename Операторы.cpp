
#include <stdio.h>
#include <stdbool.h>

/*int main (){
	int x,y;//x= 14  y=5
	scanf("%d,%d",&x, &y);
	if((x<14||y==5)&&(x==1||y==1)){
	
		printf("eees");
}
	  else if(x>16)
	 {
	   printf("ha");}
	  
	  else if (x==14||y>5)
	  	printf("that is needed!");
	  
	  
	 else
		printf("No");
	
	
	return 0;
}*/
#include <iostream>
int main(){
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int x;
	scanf("%i", &x);
	
	while (x!=33)
	{
	
	switch(x)
	     {
		case 10: 
		printf("десять\n");
		break;
		
		case 15:
		printf("oyyyeccc\n");
		break;
		
		case 0:
		printf("по статье 228\n");
		break;
		
		default:
			printf("Жопа\n");
		}
	scanf("%i", &x);
	}
	
	return 0;
}






/*int main (){
	int n;
	bool girldead;
	scanf("%i", &n);
	girldead=n;
	if (girldead==true){
		printf("witch dead");
	}
	else{
	printf ("not witch, not dead");}
	return 0;
}*/
