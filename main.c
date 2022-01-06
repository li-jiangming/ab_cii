/*
 * main.c
 *
 *  Created on: 2021年12月26日
 *      Author: ljm
 */

#include "ab_except.h"
#include "ab_mem.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    TRY
        void *p = ALLOC(0);
        FREE(p);
    EXCEPT(mem_failed)
        printf("456\n");
    ELSE
        printf("abc\n");
    FINALLY
        printf("efg\n");
    END_TRY;
    return EXIT_SUCCESS;
}
