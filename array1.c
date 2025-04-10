#include <stdio.h>
void f(int arr[],int size,int index){
		if(index>=size){
				return;
		}printf("%d",arr[index]);
		f(arr,size,index+1);
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
			printf("elements of array");
			f(arr,0,size);
			printf("\n");
			return 0;
}

