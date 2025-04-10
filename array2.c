#include <stdio.h>
void f(int arr[],int index){
		if(index<0){
			return;
		}printf("%d",arr[index]);
		f(arr,index-1);
}
int main(){
		int size=0;
		printf("enter size");
		scanf("%d",&size);
		int arr[size];
		for(int i=0;i<size;++i){
			printf("arr[%d]=",i);
			scanf("%d",&arr[i]);
		}
			f(arr,size-1);
			printf("\n");
			return 0;
}
