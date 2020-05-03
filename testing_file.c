#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
	(void)argc;
//	(void)argv;
//	char lie[] = "aaaf";
//	char iot[] = "aaad";
    printf("strdup: %s\n", strdup(argv[1]));
    printf("ft_strdup: %s\n", ft_strdup(argv[1]));

    return (0);
}