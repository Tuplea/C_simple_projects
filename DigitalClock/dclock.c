#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int main()
{
    int h, m, s; //h = hour, m = minutes, s = seconds
    int d = 1; //d is delay of 1000ms

    printf("Set the time : \n");
    printf("Follow this format 00 - 00 - 00 \n");
    scanf("%d %d %d", &h, &m, &s);
    if(h > 12 || m > 60 || s > 60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while(1) //infinite loop
    {
        s++;
        if(s > 59)
        {
            m++;
            s = 0;
        }
        if(m > 59)
        {
            h++;
            m = 0;
        }
        if(h > 12)
        {
            h = 1;
        }
        //We will write time in this format 00:00:00
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d", h, m, s);
        
        //To slow down while loop, we use function 'Sleep'
        sleep(d);

        //To clear the screen, we use function system cls
        system("clear");
    }
}