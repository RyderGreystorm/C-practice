#include <stdio.h>

char *cap_string(char *str);

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return 0;
}

// char *cap_string(char *s1){
// int i = 0;
// while (s1[i])
// {
//  while (!(s1[i] >= 'a' && s1[i] <= 'z'))
// 			i++;
   
//     if (s1[i - 1] == ' ' || s1[i - 1] == '\t' || s1[i - 1] == '\n' || s1[i - 1] == ',' || s1[i - 1] == ';' || s1[i - 1] == '.' || s1[i - 1] == '!' || s1[i - 1] == '?' || s1[i - 1] == '"' || s1[i - 1] == '(' || s1[i - 1] == ')' || s1[i - 1] == '{' || s1[i - 1] == '}' || i == 0)
//             s1 -=32;
//     i++;
// }
// return s1;
// }

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}
