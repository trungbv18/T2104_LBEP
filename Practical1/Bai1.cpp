#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap vao canh thu nhat cua tam giac = ");
	scanf("%f", &a);
	printf("Nhap vao canh thu hai cua tam giac = ");
	scanf("%f", &b);
	printf("Nhap vao canh thu ba cua tam giac = ");
	scanf("%f", &c);
	float s,p;
	if (a+b>c && a+c>b &&  b+c>a){
		p= (a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich cua tam giac = %f",s);
	}
	else{
		printf("Ba canh ban vua nhap khong phai la ba canh cua tam giac!");
	}
}
