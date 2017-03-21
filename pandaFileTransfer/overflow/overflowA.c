#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    int x = 0;
    char buff[15];
    int pass = 0;
    strcpy(buff,argv[1]);

    if(strcmp(buff,"password")){
        //printf("Wong pw\n");
    }
    else{
        //printf("Correct pw\n);
	pass = 1;
    }
    if(pass){
	// printf("You are now a root user \n");
	x=2;
    }
    return 2;
}
