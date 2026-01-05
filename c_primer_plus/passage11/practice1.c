#include <stdio.h>
#include <math.h>
#include <string.h>
long my_atoi(char []);
int main(void)
{
    char num[50];
    long i;
    puts("Please input a number");
    fgets(num, 50, stdin);
    i = my_atoi(num);
    printf("number is %ld\n", i);
    return 0;
}
long my_atoi(char str[])
{
    int i = 0, k;
    long value = 0L;
    for (i; i < strlen(str); i++)
    {
        if (str[i] == '0')
        {
            value += pow(10.0, ((str[i] - '0') - i));
            continue;
        }
        value += (str[i] * pow (10.0, (strlen(str) - '0') - i));
    }
    return value;
}
