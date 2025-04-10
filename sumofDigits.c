#include <stdio.h>
int f(int num){
	if(num>=0&&num<10){
		return num;
	}return (num%10)+f(num/10);
}
int main(){
	int num=0;
	printf("enter num");
	scanf("%d",&num);
	printf("%d",f(num));
	return 0;
}
