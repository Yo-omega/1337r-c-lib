
#ifndef MAIN_H

# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/*structures here*/

/**functions here:**/

/*arrays and strings:*/

//calculate the size of a terminated array of strings
int	size_of_array(char **array);

/*integers & math:*/

//return absolute value of an int, if n = MIN_INT returns (-1) for error
//function is protected
int    abs_(int n);

#endif
