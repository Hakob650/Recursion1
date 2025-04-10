#include <stdio.h>
void f(int num){
		if(num<0){
			return;
		}
		if(num>0){
			f(num-1);
		}printf("%d",num);
}
int main(){
		int num=0;
		printf("enter num");
		scanf("%d",&num);
		f(num);
		printf("\n");
		return 0;
}
