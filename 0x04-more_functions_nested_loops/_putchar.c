#include <unistd.h>
/* tests functions*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
