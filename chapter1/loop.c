#include <stdio.h>

int main() {
    printf("\n");

    printf("compile error\n");

    //编译器警告
    printf("hello c language \c\n");

    int low = 0;

    while (low <= 300)
    {
        int result = 5 * (low - 32) / 9;
        low += 20;
        printf("%3d, %6d, %o\n", result, low, low);
    }
    

    printf("use float");
    float low_float, result_float;
    
    while (low_float < 300.0f)
    {
        result_float = (5.0 / 9.0) * (low_float - 32.0);
        printf("%3.1f\t%6.2f\n", low_float, result_float);
        printf("--%0.1f--\n", result_float);
        low_float += 20.0;

    }


    printf("==========");
    
    for (int i = 300; i >=0; i -=20) {
        printf("%d \t %6.2f\n", i, 5.0 / 9.0 * (i - 20));
    }
    

}