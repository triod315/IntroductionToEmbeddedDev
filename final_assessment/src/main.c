/**
 * @file main.c 
 * @brief This file is the main file for the final assessment of course1.
 *
 * @author Oleksandr Hryshchuk
 * @date June 30th, 2022
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "memory.h"
#include "stats.h"
#include "data.h"
#include "course1.h"


int main(){
    #ifdef COURSE1
        printf("calling course1()\n");
        course1();  
    #endif

    return 0;
}

