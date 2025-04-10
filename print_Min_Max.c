#include <stdio.h>
void func(int size,int arr[],int min,int max){
	if(size>=0){
	    if(arr[size]<min){	
			min = arr[size];
	    }
		if(arr[size]>max){
			max = arr[size];
	    }
			return func(--size,arr,min,max);
  		 }
			printf("%d %d\n",min,max);
}
 
int main(){
    int size = 0;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;++i) {
        scanf("%d",&arr[i]);
    }
	int min = arr[0];
	int max = arr[0];
	func(--size,arr,min,max);
}

	
