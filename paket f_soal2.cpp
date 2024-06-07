#include <stdio.h>

void bubble_sort(int a[],int size){
	int switched =1;
	int hold = 0;
    int i = 0;
	int j = 0;
	
	size -=1;
	
	for(i= 0;i<size&&switched;i++){
		switched=0;
		for(j=0;j<size-i;j++){
			if(a[j]>a[j+1]){
				switched=1;
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				for(int x=0;x<10;x++){
	            }
			}
		}
	}	
}
int main(void){
	int arr[6]={1000,5000,2000,20000,100000,50000};
	int i=0;
	
	printf("before:\n");
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	
	bubble_sort(arr, 6);
	
	printf("after:\n");
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
