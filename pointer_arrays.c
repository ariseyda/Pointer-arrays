#include<stdio.h>

//Pointer arrays
//The number is taken from the user and if the number is equal to the day of the week, it is printed on that day.

int main(){
	
	
	char *days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	int n;
	printf("Please enter a number(1-7):");
	scanf("%d",&n);
	
	if(n>7){
		printf("Please enter another number:");
		scanf("%d",&n);
		days_print(days,n);
	}
	else
	    days_print(days,n);
	
	return 0;
}

void days_print(char *p[],int which){
	
	int i;
	
	if(which>=0 && which<=7){
		printf("Day:%s",p[which-1]);
	}
	
}

