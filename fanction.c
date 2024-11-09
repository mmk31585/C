#include <stdio.h>
void sayhello(char firstname[],char lastname[] , int age);

int main(){
    char firstname[20];
    char lastname[20];
    int age ;
    printf("please type your first name : ");
    scanf("%s" ,firstname);
    printf("please type your last name : ");
    scanf("%s" ,lastname);
    printf("please type your age : ");
    scanf("%d" ,&age);
    sayhello(firstname , lastname ,age);
    return 0;

}

void sayhello(char firstname[],char lastname[],int age){
    printf("Hello %s %s, welcome to my code . \n" , firstname , lastname);
    printf("you are %d years old.",age);

}
