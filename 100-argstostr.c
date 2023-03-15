#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *argstostr(int ac, char **av);
int main(int ac, char * av[])
{

    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return 0;
}

// char *argstostr(int ac, char **av)
// {
//     int i, j, len;
//     char *ptr;

//     if (ac == 0 || av == NULL)
//         return NULL;
    
//     /** calculate lengh so we 
//      * can know how much space
//      *  we need to reserve in memory*/

//     for (i = 0; i < ac; i++)
//     {
//         for (j = 0; av[i][j] != '\0'; j++)
//         {
//             len++;
//         }
//         len++;
//     }


//     /*allocate space in memory*/

//     ptr = (char *) malloc(sizeof(char) * (len +1));

//     if (ptr == NULL)
//         return NULL;

//     /*declare a variable to serve as counter
//     to send data into the memory allocated*/
//     int n = 0;

//     /**make nested for loop to read value and send 
//      * int memory
//     */
//    for (i = 0; i < ac; i++)
//    {
//     for (j = 0; av[i][j] != '\0'; j++)
//     {
//         ptr[n] = av[i][j];
//         n++;
//     }
//     ptr[n] = '\n';
//     n++;
//    }
//    return ptr;
// }

char *argstostr(int ac, char **av)
{
        int i, j, k, len;
        char *str;

        if (ac == 0 || av == NULL)
                return (NULL);

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j] != '\0'; j++)
                        len++;
        }
        

        str = (char *) malloc(sizeof(char) * (len + 1));

        if (str == NULL)
                return (NULL);

        k = 0;

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j] != '\0'; j++)
                {
                        str[k] = av[i][j];
                        k++;
                }
                str[k] = '\n';
                k++;
        }

        return (str);
}
