#include<stdio.h>
#include<string.h>
void upperCase(char str[]){
	for(int i=0; i<strlen(str); i++){
		if (str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	printf("Upper Case: ");
	puts(str);
	}
int main(){
	char str[100];
	printf("Enter String: ");
	gets(str);
	upperCase(str);
}
