/*
 Problem:	Insertion Sort (Ascending Order)
 
 Notes:
 
 --> insertion sort is a simplest sorting algorithm builds the final sorted array one item at a time.
 --> The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array).
	 This algorithm is not suitable for large data sets.
 --> Time Complexity : 
		Worst case:O(n^2)
		Best case: O(n)   (if the input array is already a sorted array) 
			 
 
 */

#include<stdio.h>
 #include<stdlib.h>
 void display(int [] ,int);								//displays the elements in the array
 void insertionsort(int [],int); 						//performs insertion sort
 int main(){
	 int n,i;
	 printf("Enter size of array:");
	 scanf("%d",&n);									//size of input
	 printf("\nEnter elements into array:");
	 int *arr=(int *)malloc(n*sizeof(int));
	 for(i=0;i<n;i++)
		scanf("%d",arr+i);								//reading elements into array
	printf("\nElements before sorting are: ");
	display(arr,n);
	insertionsort(arr,n);
	printf("\nElements after sorting are: ");
	display(arr,n);
	return 0;

}

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

void insertionsort(int arr[],int n){

	int i,j,hole;
	for(i=1;i<n;i++){
		hole=arr[i];		
		j=i-1;
		while(j>=0 && arr[j]>hole){ //moving elements of array to one position of current position that are gretaer than hole.
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=hole;
	}
		
}

/*
 sample output:

	Enter size of array:5

	Enter elements into array:55 35 15 25 5

	Elements before sorting are: 55 35 15 25 5 

	Elements after sorting are: 5 15 25 35 55 
*/
