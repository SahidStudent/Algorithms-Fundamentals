#include <stdio.h>
#include "/mnt/d/Mega/Tareas Cuarentena/Universidad/Cuatrimestre 1/Algorithms Fundamentals/unit1/libraries/utils.h"


int main(){

    int i = 1, j = 10;
    for(;; i++ , j = j+1){
        printf("i: %d, j: %d\n", i,j);
        sleep(1000);
    };
}