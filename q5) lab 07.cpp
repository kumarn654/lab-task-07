#include<stdio.h>
int main(){
	char strings[100];
	char ch;
	int i=0;
	
	printf("Enter the characters: ");
	
	while(scanf("%c", &ch)==1 && ch!='\n'){
		if(ch=='\t' || ch=='\n' || ch==' '){
			 strings[i] = ch;         
            i++;
		}
	}
	
	 strings[i] = '\0'; 

  
    for(int j = 0; strings[j] != '\0'; j++){
    if(strings[j] == ' ') {
	
	printf("[space]");
}
    else if(strings[j] == '\t'){
	
	printf("[tab]");
}
    else if(strings[j] == '\n') {
		printf("[newline]");
	}
	}
return 0;
}

