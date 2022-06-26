#include <stdio.h>

int main(){
	int massiv[]={4,8,15,16.32,55,64};
	massiv[2]=225;
	printf("%d\n",massiv[2]);
	
	float dvadva8[3];
	dvadva8[0]=5.3f;
	dvadva8[1]=7.8f;
	dvadva8[2]=8.4f;
	dvadva8[3]=9.357f;
	
	char word[]={'h','o','e'};
	char words[]="artist";
	words[1]='u';
	printf("%s\n",words);
	printf("%c%c%c \n",word[1],words[1],words[2]);
	
	int matrix[3][4]{
	{1,2,3,4},
	{15,228,35,37},
	{16,18,17,19}
	};
	printf(/*"%d\n",*/matrix[1][0]);
	return 0;
}
