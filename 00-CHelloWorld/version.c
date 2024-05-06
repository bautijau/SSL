#include <stdio.h>

int main(int argc, char** argv){
    
    switch(__STDC_VERSION__){
        case 199409L: 
            printf("__STDC_VERSION__ %l (C94)\n");
            break;
        case 199901L: 
            printf("__STDC_VERSION__ %l (C99)\n");
            break;
        case 201112L: 
            printf("__STDC_VERSION__ %l (C11)\n");
            break;
        case 201710L:
            printf("__STDC_VERSION__ %l (C17)\n");
            break;
        default:
            printf("__STDC_VERSION__ %l");
            __STDC_VERSION__ > 201710L  ? printf(" (std=c++2a)\n")
                                        : printf(" Unknown standard\n");
            
    }
    getch(); /*PAUSA*/
    return 0;
}
