#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
     
    int sum = a + b;
    int diff = a-b;
    float sum1 = c + d;
    float diff1 = c - d;
    
    printf("%d", sum);
    printf(" %d\n",diff);
    printf("%.1f ", sum1);
    printf("%.1f", diff1);
    
    
    return 0;
}
