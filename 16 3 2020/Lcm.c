#include<stdio.h>

int main()
{
    int num1, num2, max, temp, LCM, GCD;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        max = num1;
    }
    else{
        max = num2;
    }

    for(max ; max >= 1; max--){

        if(num1 % max == 0 && num2 % max == 0){
            printf("GCD is : %d ", max);
            temp = max;
            break;
        }
    }

    LCM = (num1 * num2) / temp;

    printf("LCM = %d ", LCM);

}

