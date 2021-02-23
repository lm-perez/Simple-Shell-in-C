/* 
 * File:   main.c
 * Author: Lianne Perez
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/*
 * 
 */
int main(int argc, char** argv) {

    while(1){
        
        printf("Your Command > \n");
        char command[100];
        fgets(command, 100, stdin);
        
        int last = strlen(command) - 1;
        char l_char = command[last - 1];
        
        // Process ID
        
        pid_t pid[10];
        int i;         
        for(i = 0; i<1; i++){
            pid_t pid2 = pid;
            pid[i] = pid2;
            
            if(pid2 == 0){
                system(command);
                printf("%d\n", 1);
                exit(0);
            } else
                continue;
        }
        
        if(l_char != '&'){
            for(i = 0; i < 1; i++){
                pid_t pid2 = pid[i];
                wait(pid2);
            }
            printf("Child Complete \n");
            } else
                printf("Waiting: Child need to complete enter command again\n");
        }
    }
   


