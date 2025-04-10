#include <stdio.h>
void f(int num){
		if(num<0){
			return;
		}printf("%d",num);
		f(num-1);
}
int main(){
		int num=0;
		printf("enter num");
		scanf("%d",&num);
		f(num);
		printf("\n");

		
}
