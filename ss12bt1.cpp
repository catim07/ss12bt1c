#include<stdio.h>
int tinhtong(int a,int b){
	return a+b;
}
int main(){
	int num1,num2;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("moi ban nhap so thu hai: ");
	scanf("%d",&num2);
	printf("tong hai so la: %d",tinhtong(num1,num2));
	return 0;
}
