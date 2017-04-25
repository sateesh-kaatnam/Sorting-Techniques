/*
 Problem:	Bubble Sort Algorithm (Ascending Order)
 Author	:	Sateesh-Kaatnam
 
 Notes:
 
 --> Bubble sort is a simplest sorting algorithm which works on exchanging of
 adjacent elements if they are out of order and it is repeated until array is sorted.
 
 --> Time Complexity : O(n^2)	 
 
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 void swap(int *,int *);								//swap two integer values
 void display(int [] ,int);								//displays the elements in the array
 void bubblesort(int [],int); 								//performs bubble sort
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
	bubblesort(arr,n);
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

void bubblesort(int arr[],int n){

	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
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
