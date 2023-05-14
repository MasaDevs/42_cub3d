#ifndef CUB_H
# define CUB_H

# include <limits.h>
# include <math.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_map t_map;
struct s_map
{
    size_t x;
    size_t y;
    char obj;
    t_map *next;
    t_map *prev;
};

#endif
