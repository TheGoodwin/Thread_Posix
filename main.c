/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: etude
 *
 * Created on 9 mars 2016, 14:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct thread_args
{
    int toto;
    float titi;
    char hello[256];
};

void* helloWorld();

/*
 * 
 */
int main(int argc, char** argv) 
{
/*
    struct thread_args a;
*/
    pthread_t a;
    pthread_create(&a, NULL, helloWorld, NULL);
    helloWorld();
    pthread_join(a,NULL);
    
    
    return (EXIT_SUCCESS);
}

void* helloWorld()
{
    printf("Hello\n");
}

