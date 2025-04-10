#include <stdio.h>
char first_uppercase(const char *ptr){
	if(*ptr=='\0'){
		return '\0';
	}
	if(*ptr>='A'&&*ptr<'Z'){
		return *ptr;
	}return first_uppercase(ptr+1);
}
int main(){
	int size=20;
	char text[size];
	printf("enter string(without spaces)");
	scanf("%s",text);
	char result=first_uppercase(text);
	if(result!=0){
		printf("first uppercase in the string: %c\n",result);
	}else{
		printf("No uppercase");
	}return 0;
}

