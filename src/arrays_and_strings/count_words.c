#include "../main.h"

int	count_words(char *big)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 0;
	count = 0;
	while (big[i])
	{
		if (big[i] == ' ' || big[i] == '\t')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}
