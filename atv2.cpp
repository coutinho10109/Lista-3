#include <stdio.h>

int main () {

	int num,i;

	printf ("Digite um numero da tabuada que voce deseja:");
	scanf ("%d",&num);

	for (i=1; i<=10; i++ ) {
		printf ("\n%d x %d = %d", num, i, num*i);
	}

}