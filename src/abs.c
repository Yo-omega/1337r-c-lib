#include "main.h"

int  abs_(int n)
{
  if (n == -2147483648)
    return (-1);
	if (n < 0)
		return (-n);
	return (n);
}
