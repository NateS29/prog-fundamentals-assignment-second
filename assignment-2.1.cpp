//for second area of rectangle, with user input

#include <stdio.h>

int main(){
	
	int width;
	int lenght;
	
	printf("Input width : ");
	scanf("%d", &width);
	printf("Input lenght : ");
	scanf("%d", &lenght);
	
	int area = width * lenght;
	
	printf("Area of rectangle = %d", area);
	
	return 0;
		
}
