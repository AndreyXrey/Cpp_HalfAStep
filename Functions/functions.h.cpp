#include <stdio.h>
#include <iostream>

//void ifo();
void ifo(){
	setlocale (LC_ALL, "Russian");

	printf("��������\n");
	printf("����� �������----\n");
	printf("������ �������----\n");
	printf("������ ��������----\n");
}

void sum(int a, int b){
	scanf ("%d",&a);
	scanf ("%d",&b);
	int R = a+b;
	printf("�����= %d\n", R);
}
void string(char arr[]){
	printf("%s\n", arr);
}
float mu(float a, float b){
	float res = a*b;
	printf("���������= %d\n", res);
	
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
