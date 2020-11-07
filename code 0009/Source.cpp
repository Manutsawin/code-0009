#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void prApla(int* min, int* middle, int* max);
char aplabet[4];
int main()
{
    int num[3], loop, max, min, middle;
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    getchar();
    scanf("%c %c %c", &aplabet[0], &aplabet[1], &aplabet[2]);
    min = num[0];
    max = num[2];
    for (loop = 0; loop < 3; loop++)
    {
        if (max < num[loop])
        {
            max = num[loop];
        }
        if (min > num[loop])
        {
            min = num[loop];
        }
    }
    for (loop = 0; loop < 3; loop++)
    {
        if (num[loop] != max && num[loop] != min)
        {
            middle = num[loop];
        }
    }
    prApla(&min, &middle, &max);
    return 0;
}
void prApla(int* min, int* middle, int* max)
{

    for (int loop = 0; loop < 3; loop++)
    {
        if (aplabet[loop] == 'A')
        {
            printf("%d ", *min);
        }
        else if (aplabet[loop] == 'B')
        {
            printf("%d ", *middle);
        }
        else if (aplabet[loop] == 'C')
        {
            printf("%d ", *max);
        }
    }

}
