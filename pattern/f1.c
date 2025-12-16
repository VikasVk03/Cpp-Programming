//   *******  program to print 0 to 4 numbers using macros
// #include <stdio.h>
// // macro definition
// #define LIMIT 5

// int main()
// {
//     for (int i = 0; i < LIMIT; i++)
//     {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// find area of rectangle using macro with parameter

#include <stdio.h>
// macro with parameter
// #define Area(l, b) (l * b)

// int main()
// {
//     int l1 = 10, l2 = 5, area;
//     area = Area(l1, l2);

//     printf("The area of rectangle is: %d", area);
//     return 0;
// }

// int main()
// {
//     const float PI = 3.14;
//     int r = 10, Area;
//     Area = (PI * r * r);
//     printf("The area of circle is: %d", Area);
// }

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    return 0;
}
