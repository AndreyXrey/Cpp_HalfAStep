#include <stdio.h>
#include <iostream>

//void ifo();
void ifo(){
	setlocale (LC_ALL, "Russian");

	printf("Пивеееет\n");
	printf("Дилдо конский----\n");
	printf("Сюзана давалка----\n");
	printf("Киборг Арминоид----\n");
}

void sum(int a, int b){
	scanf ("%d",&a);
	scanf ("%d",&b);
	int R = a+b;
	printf("Сумма= %d\n", R);
}
void string(char arr[]){
	printf("%s\n", arr);
}
float mu(float a, float b){
	float res = a*b;
	printf("результат= %d\n", res);
	
	return res;
}
/*
void ufo(){
	int x;
	scanf ("%d",&x);
	printf("%d\n",x);
	//std::cout<<x<<endl;
	//return 0;
}
*/
