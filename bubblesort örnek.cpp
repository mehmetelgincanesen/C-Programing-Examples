#include<stdio.h>
#define max 50
void bubblesort(int arr[],int size){
	int i,j;
	for(i=0;i<size;i++){  // buras� ad�m ad�m ilerlemeyi yapar j ise kar��la�t�rmay�!
		for(j=1;j<size-i;j++){  //j=1 in nedeni bir sonraki ile kar��la�t�rmak i�indir.
			if(arr[j-1]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
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
	bubblesort(array,size);
	for(i=0;i<size;i++){
		printf("%d  ",array[i]);
	}

}
