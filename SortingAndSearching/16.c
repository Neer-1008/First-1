#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[100];
    int success = 0, tests = 0;
    float averageTests = 0, percentage = 0;

    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 200 + 1;
    }

    for (int i = 0; i < 100; i++)
    {
        int temp = rand() % 200 + 1;

        for (int j = 0; j < 100; j++)
        {
            tests++;
            if (a[j] == temp)
            {
                success++;
                break;
            }
        }
    }
    averageTests = (float)tests / 100;
    percentage = (float)success;
    printf("Average tests: %f\n", averageTests);
    printf("Percentage: %f%%\n", percentage);
    return 0;
}