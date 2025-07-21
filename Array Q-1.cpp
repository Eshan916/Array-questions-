// Program to input elemts into array
#include<stdio.h>
int main () {
	 int arr[10];
	 int i;
	 printf("Enter 10 numbers:\n");
	 for(i=0;i<10;i++){
	 		 scanf("%d",& arr[i]);

	 }
	 printf("the numbers you entered are :\n");
	 for(i=0;i<10;i++){
	 	printf("%d \n", arr[i]);
	 	
	 }

	return 0 ;
}

