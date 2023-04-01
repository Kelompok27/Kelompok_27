#include <stdio.h> 
int main(){
int var[] = {0,1,2,3,4,5,6,7,8,9};
int* varPtr = var;

printf("%d", *varPtr); 
for (int i=1 ; i <=10 ; i++)
	{
printf("%d",*varPtr);
		*varPtr++;
	}

}

