#include "main.h"

char *tostring(char str[], int num);
char * replace_with_int(char* s, int i, int num);
int _printf(const char *format, ...);
char *replace_with_per(char *s, int i);
char *replace_with_num_string(char *s, int i, char *str);
char *replace_with_char(char *s, int i,char c);

int main(void)
{
    int letter = 58;
    int c = 20;
    _printf("This is my work %d\n");
    _printf("This is my work %d\n");

    printf("THis is their code %i\n");
    printf("THis is their code %i\n");

    return 0;
}

 int _printf(const char *format, ...)
  {
          char *str;
          int i, len = 0;
          va_list ap;
  
          str = malloc(sizeof(char) * (strlen(format) + 1));
          strcpy(str, format);
          va_start(ap, format);
          for (i = 0; format[i] != '\0'; i++)
          {
                  if (format[i] == '%' && format[i + 1])
                  {
                          switch (format[i + 1])
                          {
                                //   case 'c':
                                //           str = replace_with_char(str, i, (char) va_arg(ap, int));
                                //           break;
                                //   case 's':
                                //           str = replace_with_string(ap, (char*) va_arg(ap, char*));
                                //           break;
                                    case 'd':
                                            str = replace_with_int(str, i, (int) va_arg(ap, int));
                                            break;
                                    case 'i':
                                            str = replace_with_int(str, i, (int) va_arg(ap, int));
                                            break;
                                  case '%':
                                          str = replace_with_per(str, i);
                                          break;
                                  default:
                                          break;
                          }
                  }
          }
  
          va_end(ap);
  
          len = strlen(str);
  
          write(1, str, len);
  
          free(str);
         return (i);
  }

  
char *replace_with_per(char *s, int i)
  {
          char *new_s;
          int j, done = 0;
  
          new_s = malloc(sizeof(char) * (strlen(s) - 1));
  
          for (i = 0, j = 0; s[i] != '\0'; i++, j++)
          {
                  if (s[i] == '%' && s[i + 1] == '%' && !done)
                  {
                          new_s[j] = '%';
                          i = 1 + i;
                          done = 1;
                          continue;
                  }
  
                  new_s[j] = s[i];
          }
  
          new_s[j] = '\0';
  
          return (new_s);
  }


  char *tostring(char* str, int num)
{
    int i, rem, len = 0, n;
    int isN = 0;

    if (num < 0)
    {
           isN = 1;
           num *= -1;
    }
     
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    if(isN)

        len++;

    str = (char *)malloc(sizeof(char ) * (len + 1));

    
    for (i = 0; i < len; i++)
    {
        if (isN && (len - (i + 1)) == 0)
        {
            str[0] = '-';
            continue; 
        }
      
        
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

    return str;
}

char * replace_with_int(char *s, int i, int num)
{
    char *str = tostring(str, num);


    str = replace_with_num_string(s, i, str);
    


    return str;
}

char *replace_with_num_string(char *s, int i, char *str)
  {
         char *new_s;
        int j, k, done = 0;
 
         if (str == NULL)
         {
                 str = "(null)";
         }
         else
         {
                 k = (int) str[0];
                 if (k < 0 || k > 127)
                         str = "(null)";
         }
 
         new_s = malloc(sizeof(char) * (strlen(s) + strlen(str) - 1));
 
         for (i = 0, j = 0; s[i] != '\0'; i++, j++)
         {
                 if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i') && !done)
                 {
                         for (k = 0; str[k] != '\0'; k++, j++)
                         {
                                 new_s[j] = str[k];
                         }
                         i = 1 + i;
                         j--;
                         done = 1;
                         continue;
                 }
 
                 new_s[j] = s[i];
         }
 
         new_s[j] = '\0';
         strcpy(s, new_s);
         free(new_s);
 
         return (s);
 }
