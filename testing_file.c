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
    printf("strnstr: %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
    printf("ft_strnstr: %s\n", ft_strnstr(argv[1], argv[2],atoi(argv[3])));

    return (0);
}