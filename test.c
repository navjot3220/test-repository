#include<stdio.h>
#define pie 3.14 //more precise value 

float area (){
    double radius = 5;
    double area = pie*radius*radius;
 
    printf("area of circle of radius 5 is :.%2f\n",area);
}

int main (){                            // main function
    float area ();
    return 0;
}