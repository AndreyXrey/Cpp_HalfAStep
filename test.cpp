#include<iostream>
void put_rec(FILE *fp, int rec[6])
int main(){


{
int size, num;
size = sizeof(int) * 6;
num = fwrite(rec, size, 1, fp) ;
if(num!=1) printf("ошибка записис");

}return 0;
}
