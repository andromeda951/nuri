#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    // int x;
    // scanf("%d", &x);  // x = 10

    // printf("X = %d\n", x);



    char name[100];
    int age;

    printf("masukan nama kamu: ");
    scanf("%s", name);

    printf("masukan umur kamu: ");
    scanf("%d", &age);
    
    printf("nama : %s\n", name);
    printf("umur : %d\n", age);


}