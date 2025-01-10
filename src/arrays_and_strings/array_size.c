#include "../main.h"

//size of array:
int	size_of_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
