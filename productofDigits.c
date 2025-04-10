#include <stdio.h>
int product(int num){
	if(num<10){
		return num;
	}else{
		return (num%10)*product(num/10);
	}
}
int main(){
	int num=0;
	printf("enter num");
	scanf("%d",&num);
	printf("%d",product(num));
	return 0;
}
