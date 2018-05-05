/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"



/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    printf("VALUE: %i \nN: %i\nARR: ", value, n);
        for(int i =0; i < n; i++){
            printf(" %i", values[i]);
            if(values[i] == value){
                return true;
            }
        }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}