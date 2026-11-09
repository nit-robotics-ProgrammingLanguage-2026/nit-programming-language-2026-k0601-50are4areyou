#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    if ( n< 0){
        printf("NG");
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("%d", sum);
    }
    return 0;
}
