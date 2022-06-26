#include <iostream>



int main(){
      
	/*	bool noalko=true;
		int x=0;
	while(noalko){
		printf("Type number:");

		scanf("%d", &x);

		if(x==1)
		   noalko=false;
	}	
	int i=1024;
	while(i>=0.5){
		printf("%d\n", i);
		i/=2;
	}
	bool k=false;
	//float x=0;
	//scanf("%f\n", &x);
	//x=x*22;
	do 
	{
	
	printf("fuckem");
		
	}while(k);/
	
	
	for(int x=0; x<=15;x++){
		if(x==4)
		break;
		if(x%2==0)
		continue;
		printf("%d\n", x);
	}
	*/
	int arr[]={5,67,0,15,-35,7, 28};
	for(int i=0; i<7; i++)
		printf("%d\n", arr[i]);
	 printf("\n");
	 
	
	int mi=arr[0];
	int ma=arr[0];

	for(int i=0; i<7;i++){
		if(arr[i]<mi)
		   mi=arr[i];
		   
		   if(arr[i]>ma)
		   ma=arr[i];
	}
			printf("Minimum:%d\n", mi);
			printf("Maximum:%d\n", ma);
	
	return 0;
}
