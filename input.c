/* fgets, sscanfの例 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 9
#define BUF 32

int main(void){
	int i,n;
	char str[BUF];

	fgets(str, sizeof(str), stdin);
	sscanf(str, "%d", &n);

	if( n < 1 || 100 < n)
		return EXIT_FAILURE;

	for(i=1; i<=MAX; i++){
		if(i != 9)
			printf("%d ", i * n);
		else
			printf("%d\n", i * n);
	}

	return EXIT_SUCCESS;
}
