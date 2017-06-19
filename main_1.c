#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
char *s;
s = strdup("Hi,bro");
if (s == NULL)
{
fprintf(stderr, "Can't allocate mem with malloc\n");
return (EXIT_FAILURE);
}
printf("%p\n", (void *)s);
return (EXIT_SUCCESS);
}
