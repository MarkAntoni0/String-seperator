//
//  main.c
//  hacker rank tests
//
//  Created by Mark Antonio on 4/18/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char _original[1024];
    gets(_original);
    
    char* temp = _original;
    for (int i=0; i<strlen(_original); i++) {
        printf("%c",*temp);
        if (*temp == ' ') {
            printf("\n");
        }
        temp++;
    }
    
    
    return 0;
}
