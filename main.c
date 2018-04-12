#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <TH/TH.h>
#include <malloc.h>
#include <stddef.h>

#define STR(x)   #x
#define SHOW_DEFINE(x) printf("%s=%s\n", #x, STR(x))
#define Real Int
#define real int

int main(){
    int size = 100;
    int *data = malloc(size*sizeof(real));
    for(int i=0; i<size; i++){
        *data = i;
        data++;
    }
    data = data - 100;
    for(int i=0; i<size; i++){
        printf("%d ", *data);
        data++;
    }
    data = data - 100;
    THStorage* storage;
    THStorage* t = THStorage_(newWithData)(data, 100);
    printf("Hello TH");
    ptrdiff_t a = 1;
}
