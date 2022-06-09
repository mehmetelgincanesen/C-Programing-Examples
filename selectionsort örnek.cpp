#include<stdio.h>
#define max 50
void selectionsort(int arr[],int size){
	int i,j;
	int minindex;
	for(i=0;i<size;i++){  
		minindex=i;
		for(j=i;j<size;j++){ 
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
	
}
int main(){
	int array[max],size;
	int i;
	printf("How many number that you want to ?");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	selectionsort(array,size);
	for(i=0;i<size;i++){
		printf("%d  ",array[i]);
	}

}
