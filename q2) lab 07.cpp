//Write a program in C to read n number of values in an array and display it in reverse order
//Input: {1,2,3,4,5,6,7,8,9}
//Output: 9 8 7 6 5 4 3 2 1
#include<stdio.h>
int main(){

	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int size[n];
	
	
	printf("Enter the number : ");
	for(int i=0;i<n;i++){
		scanf("%d",&size[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",size[i]);
	}





	

	return 0;
}
