#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define STR "#include <stdio.h>%1$c#define STR %2$c%3$s%2$c%1$c%1$c/*%1$c    One comment%1$c*/%1$c#define PROG int main() {printf(STR, 10, 34, STR);return 0;}%1$cPROG"
#define PRINT() printf(STR, 10, 34, STR)
#define PROG int main() {PRINT();return 0;} 
/*
    One comment
*/
PROG