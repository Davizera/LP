#include <stdio.h>

main(){
	int a=5;
	int *ptr;
	ptr=&a;
	printf("%d\n",*ptr);
	printf("\t %d \n",&a);
	printf("%d\n",a);
	*ptr=10;
	printf("%d\n",a);
	printf("%d\n",*ptr);
}
