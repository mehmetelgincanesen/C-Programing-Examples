#include<stdio.h>
#define max 50
void insertionsort(int arr[],int size){
	int i,j;
	int element;
	for(i=1;i<size;i++){  // 5 4 2 3 olsun say�lar
		element=arr[i];   // burda 1 inci eleman� al�yor 
		j=i-1;
		while(j>=0 && arr[j]>element){  // 5 b�y�k 4 ten oldugu i�in
			arr[j+1]=arr[j]; // burda 1 inci eleman� 2 inci ile e�itliyo 5 5 2 3
			j--;
		}
		arr[j+1]=element;    // burda da element ald�g�"4"� 1 inci yere koyuyor 4 5 2 3 
	}  						// d�ng�  bunu her eleman i�in tekrar tekrar yap�yor 
}
int main(){
	int array[max],size;
	int i;
	printf("How many number that you want to ?");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	insertionsort(array,size);
	for(i=0;i<size;i++){
		printf("%d  ",array[i]);
	}

}
