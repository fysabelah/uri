#include <stdio.h>

int main(){
    int vel, horas, dis;

    scanf("%d",&vel);
    scanf("%d",&horas);

    dis = vel * horas;

    printf ("%.3f\n",dis/12.0);

    return(0);
}