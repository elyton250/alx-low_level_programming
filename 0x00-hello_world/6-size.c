#include <stdio.h>
/**
  *main - Entry point
  *
  *Retutrn: 0 if success
  */
int main(void)
/*main - Entry point*/
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float:%lu byte(s)\n", sizeof(float));
	return (0);
}
