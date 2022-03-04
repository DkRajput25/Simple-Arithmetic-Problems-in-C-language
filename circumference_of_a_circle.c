#include <stdio.h>
#include <conio.h>

void main()
{
    float r, pie = 3.14, aoc, coc;
    printf("Enter the radius of circle\n"); 
    scanf("%f",&r);
    aoc = (pie*r*r);
    coc = (2*pie*r);
    printf("\n Area of circle=%f",aoc);
    printf("\n Circumference of circle=%f",coc);
    getch();
}