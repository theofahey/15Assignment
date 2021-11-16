//
//  argumentative.c
//  Systems
//
//  Created by Theodore Fahey on 11/14/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char ** parse_args(char * line){
    char * token;
    char ** args = malloc(strlen(line));
    int counter = 0;
    while (1){
        token = strsep(&line," ");
        if (token == NULL){
            break;
        }
        args[counter] = token;
        counter++;
    }
    return args;
}
int main(){
    char line[100] = "ls -a -l";
    char ** args = parse_args(line);
    execvp(args[0], args);
}
