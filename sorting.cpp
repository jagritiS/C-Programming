//Sorting array in ascending and descending order 
#include<stdio.h>
int main(){
	int arr[5];
	int i,j,temp,temp1;
	printf("Enter array elements \n");
	for( i = 0; i<5; i++){
		//printf("Enter arr[%d] element :\t ",i);
		scanf("%d",arr[i]);
	}
	printf("\n The array of 5 element before sorting is  \n");
	for( i = 0; i<5; i++){
		printf("%d\t ",arr[i]);		
	}
	//sorting array in ascending order 
	for( i = 0; i<5; i++){
		for( j = 0; j<5; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;	
			}
		}		
	}
	printf("\n The array of 5 element after sorting in ascending is  \n");
	for( i = 0; i<5; i++){
		printf("%d\t ",arr[i]);		
	}
	//sorting array in descending order 
	for( i = 0; i<5; i++){
		for( j = 0; j<5; j++){
			if(arr[i]<arr[j]){
				temp1 = arr[i];
				arr[i] = arr[j];
				arr[j] = temp1;	
			}
		}		
	}
	printf("\n The array of 5 element after sorting in descending is  \n");
	for( i = 0; i<5; i++){
		printf("%d\t ",arr[i]);		
	}	
return 0;	
}
