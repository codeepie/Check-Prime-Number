//
//  main.c
//  Check Prime Number
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int n, flag;
    printf("Enter a a number to check Prime Number\n");
    scanf(" %d",&n);
    
    
    if (n==1) {
        printf(" %d is neither prime nor composite number\n",n);
        exit(0);
    }
    flag = 1;
    for (int i=2; i<=n/2; i++) {
        
        if (n%i==0) {
            flag=0;
            break;
        }
    }
    if (flag==1) {
        printf(" %d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
    
    
    return 0;
}
