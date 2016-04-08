#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min_mas(int *mas, int n);

int main()
{
	int mas[15], i;
	
	srand(time(0));
	
	for(i = 0; i < 15; i++) {
		mas[i] = -30 + (rand() % 130);
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	i = min_mas(mas, 15);
	
	printf("\n\tMin = %d v mas[%d].", mas[i], i);
	return 0;
}

int min_mas(int *mas, int n)
{
	int i, min;
	
	min = 0;
	
	for(i = 0; i < n; i++)
	if(mas[i] < min)
		min = i;
		
	return min;	
