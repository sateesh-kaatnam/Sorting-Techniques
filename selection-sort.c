/*
 Problem:	selecction Sort (Ascending Order)
 Author	:	Sateesh-Kaatnam
 
 Notes:
 
 --> slection sort is a simplest sorting algorithm which is not efficient for larger inputs.
	 
	 The algorithm maintains two subarrays in a given array.

		1) The subarray which is already sorted.
		2) Remaining subarray which is unsorted.

	In every iteration of selection sort, the minimum element (considering ascending order)
	from the unsorted subarray is picked and moved to the sorted subarray. 
 
 --> Time Complexity : O(n^2) (for alll best,average,worst cases)	 
 
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 void swap(int *,int *);								//swap two integer values
 void display(int [] ,int);								//displays the elements in the array
 void selectionsort(int [],int); 						//performs selection sort
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
	selectionsort(arr,n);
	printf("\nElements after sorting are: ");
	display(arr,n);
	return 0;

}

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

void selectionsort(int arr[],int n){

	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
				swap(&arr[i],&arr[j]);
		}
	}		
}


/*
 Sample Output:
 
Enter size of array:5

Enter elements into array:30 20 50 40 10

Elements before sorting are: 30 20 50 40 10 

Elements after sorting are: 10 20 30 40 50 

 
 */
