#include <stdio.h>
int fib(int num){
     if(num>=0&&num<2){
			return num;
	}return fib(num-1)+fib(num-2);
}
int main(){
	int n=0;
	printf("enter n");
	scanf("%d",&n);
	printf("%d",fib(n));
	return 0;
}
