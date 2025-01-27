#include <stdio.h>
#include <string.h>

int main()
{
    int i = 5;
    char filename_to_check[50];
    sprintf(filename_to_check, "Sully%d_.c", i);

    if(!strcmp(filename_to_check, __FILE__))
        i--;
    
    if (i < 0)
        return (0);

    char new_filename[10];
    new_filename[9] = '\0';
    sprintf(new_filename, "Sully_%d.c", i);
    FILE *file = fopen(new_filename, "w");
    if (file == NULL)
        return (1);
    
    char *str = "#include <stdio.h>%1$c#include <string.h>%1$c%1$cint main()%1$c{%1$c    int i = %3$d;%1$c    char filename_to_check[50];%1$c    sprintf(filename_to_check, %2$cSully%3$d_.c%2$c, i);%1$c%1$c    if(!strcmp(filename_to_check, __FILE__))}%1$c        i--;%1$c%1$cif (i < 0)%1$c        return (0);%1$c%1$c    char new_filename[10];%1$c    new_filename[9] = '\0';%1$c    sprintf(new_filename, %2$cSully%3$d_.c%2$c, i);%1$c    FILE *file = fopen(new_filename, %2$cw%2$c);%1$c    if (file == NULL)%1$c        return(1);%1$c%1$c char *str = %2$c%4$s%2$c;%1$c    fprintf(file, str, 10, 34, i, str);%1$c    if (fclose(file) != 0)%1$c        return(1);%1$c    char compileCmd[500];%1$c    sprintf(compileCmd, %2$cclang -Wall -Wextra -Werror Sully_%3$d.c -o Sully_%3$d ; ./Sully_%3$d%2$c, i);%1$c    system(compileCmd);%1$c    return(0);%1$c}";
    fprintf(file, str, 10, 34, i, str);
    if (fclose(file) != 0)
        return (1);
    char compileCmd[500]; 
    sprintf(compileCmd, "clang -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
    system(compileCmd);
    return (0);
}