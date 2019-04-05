#include<stdio.h>
int main(){
	int ar[2][2],ar1[2][2],c[2][2],i,j;int min ;
	for(i=0;i<2;i++){
		for(j = 0;j<2;j++){
			printf("enter numbers for array1\t : ");
			scanf("%d",&ar[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j = 0;j<2;j++){
			printf("enter numbers for array 2\t : ");
			scanf("%d",&ar1[i][j]);
		}
	}
	int ch;
	printf("Press 1 for display array one \n press 2 for display array two \n press 3 for display sum of array");
	printf("Press 4 for diagonal elements \n press 5 for minimum number\n");
	scanf("%d",&ch);
	switch(ch){
		case 1 : 
				printf("array1  is \n");
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
						printf("%d \t",ar[i][j]);			
					}
					printf("\n");
				}
				break;
		case 2 : 
				printf("array2  is \n");
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
						printf("%d \t",ar[i][j]);
						//printf("*\t");
					}
					printf("\n");
				}
				break; 
		case 3 : 
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
						c[i][j] = ar[i][j] + ar1[i][j];
					}		
				}
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
							printf("%d \t",c[i][j]);
					}	
					printf("\n");	
				}
				break;
		case 4 : 
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
						if(i == j){
							printf("diagonal elements are %d",c[i][j]);
						}
					}		
				}
				break;
		case 5 : 
				min= ar[0][0];
				for(i=0;i<2;i++){
					for(j = 0;j<2;j++){		
						if(min>ar[i][j]){
							min = ar[i][j];
						}
					}		
				}
				printf("min val is %d ",min);
				break;
		default : printf("invalid");
		break;
	}
	
	

	
	
	
	
	
	
return 0;	
}

	

