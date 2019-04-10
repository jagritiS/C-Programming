#include<stdio.h>
void callName(); //function with  no return type
int sum(); //function with return type 
int addition(int , int ); //function with argument
int main()	{
int s,a,b,s1;
	printf("I am calling a function to display my name\n");
	callName();	
	s = sum();
	printf("sum is %d\t",s);
	printf("enter two number\t ");
	scanf("%d %d",&a,&b);
	s1 = addition(a,b);
	printf("\nfrom addtion is %d \n ",s1);
	return 0;
}
int addition(int tx, int ty){
	int sum = tx + ty;
	return sum;
}
void callName(){
	printf("my name is jagriti\n\n");	
}
int sum(){
	int a, b, sum = 0;
	printf("enter two number\t ");
	scanf("%d %d",&a,&b);
	sum = a+b;
	//printf("sum is %d\t",sum); option 1 
	return sum;
}


