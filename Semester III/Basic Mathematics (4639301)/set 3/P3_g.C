#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
main()
{
    double value,floor_result,celi_result;
 
    printf("Enter a Value\n");
    scanf("%lf", &value);
 
    floor_result=floor(value); //returns largest integral value not greater than its argument
    celi_result=ceil(value); //returns smallest integral value not less than its argument
 
    printf("'floor' of \"%lf\": %lf\n", value, floor_result);
	printf("'Ceiling' of \"%lf\": %lf\n", value, celi_result); 
    return 0;
}
