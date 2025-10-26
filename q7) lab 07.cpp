#include<stdio.h>
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int  check=0;     // check 0 means element is not present in array
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0;i<10;i++){
		if(arr[i]==n){
			check=1;   // chec 1 means element is present in array
			break;
		}
	}
	if(check==1){
		printf("The number %d  is present in array");
	}
	else{
		printf("-1");
	}
	return 0;
	
	
}
