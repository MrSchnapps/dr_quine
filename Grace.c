#include <stdio.h>
#define STR "#include <stdio.h>%1$c#define STR %2$c%3$s%2$c%1$c%1$c#define PRINT(file) fprintf(file, STR, 10, 34, STR)%1$c#define FT(x)int main(){FILE *fd = fopen(x, %2$cw%2$c); if(fd == NULL) { return(1); } PRINT(fd); close(fd); return 0;}%1$c/*%1$c    One comment%1$c*/%1$cFT(%2$cGrace_kid.c%2$c)"
#define PRINT(file) fprintf(file, STR, 10, 34, STR)
#define FT(x)int main(){FILE *fd = fopen(x, "w"); if(fd == NULL) { return(1); } PRINT(fd); close(fd); return 0;} 
/*
    One comment
*/
FT("Grace_kid.c")