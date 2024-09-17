#include <stdio.h> // for compile
#include <stdint.h> // define all data types

// INIT --- call fucntions
int32_t f(int32_t x);
int scan_int(int32_t* x);
void execute_print(int32_t x, int32_t count);
void print_fx(int32_t x, int32_t y);

int main()
{
    // Input
    int32_t x, count;
    int r0 = scan_int(&x);
    int r1 = scan_int(&count);
    if(r0 == 1 && r1 == 1 && count > 0)
    {
        execute_print(x, count);
    }
    else if (r0 == EOF || r1 == EOF)
    {
        printf("IO Error!");
    }
    else if(r1 == 1 && count <= 0)
    {
        printf("The count (second value) needs to be bigger than 0!");
    }
    else
    {
        printf("The inputs must be a number!");
    }
}

int32_t f(int32_t x)
{
    //return x * x + 5 * x + 5;
    return (x * x);
}

int scan_int(int32_t* x)
{
    printf("Enter an integer value: ");
    return scanf_s("%i", x);
}

void execute_print(int32_t x, int32_t count)
{
    //int32_t i = 0;
    //while (i < count)
    //{
    //    int32_t y = f(i * x);
    //    print_fx(i * x, y);
    //    i++;
    //}
    
    for (int32_t i = 1; i <= count; i++)
    {
        int32_t y = f(i * x);
        print_fx(i * x, y);
    } 
}


void print_fx(int32_t x, int32_t y)
{
    printf("f(%i) = %i, ", x, y);
}

  