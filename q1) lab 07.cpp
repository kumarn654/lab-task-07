


#include<stdio.h>
int main(){
	int n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int size[n];
	int sum=0;
//	printf("Enter the Number : ");
	for(int i=0;i<n;i++){
	scanf("%d",&size[i]);
	sum=sum+size[i];
	}	
	
	for(int i=0;i<n;i++){
		printf(" the user input is : %d \n",size[i]);
	}
	printf("the sum of arra is %d",sum);
	return 0;
}
