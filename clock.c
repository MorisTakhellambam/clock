#include <stdio.h>
#include <windows.h>

int main(){
    int h, m, s;

    printf("Set time: ");
    scanf("%d %d %d", &h, &m, &s);

    if(h>24 || m>60 || s>60){
        printf("Error! Entered Invalid Time.");
        exit(0);
    }

    while(1){
        s++;
        if (s>59){
            m++;
            s = 0;
        }
        if (m>59){
            h++;
            m = 0;
        }
        if (h>24){
            h = 1;
        }

        system("cls");
        printf("\n Time: %d:%d:%d", h, m, s);
        Sleep(1000);
    }
}