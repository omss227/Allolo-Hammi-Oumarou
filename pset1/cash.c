#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int i=0;
    int somme;
    do
    {
        somme=get_int("type somme");
    }
    while(somme<0);

    while(somme>=a)
    {
        somme=somme-a;
        i++;
    }
    while(somme>=b)
    {
        somme=somme-b;
        i++;
    }
    while(somme>=c)
    {
        somme=somme-c;
        i++;
    }
    while(somme>=d)
    {
     somme=somme-d;
     i++;
    }
    while(somme>=e)
    {
        somme=somme-e;
        i++;
    }
    while(somme>=f)
    {
        somme=somme-f;
        i++;
    }
    while(somme>=g)
    {
        somme=somme-g;
        i++;
    }
    while(somme>=h)
    {
        somme=somme-h;
        i++;
    }
    while(somme>=i)
    {
        somme=somme-i;
        i++;
    }
    printf("la somme totale est %i:",i);
}

