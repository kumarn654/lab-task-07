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

