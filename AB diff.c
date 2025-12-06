#include<stdio.h>
#include<math.h>
int main()
{
    int A,B;
    int correctanswer,wronganswer,diff;
    scanf("%d %d", &A, &B);
    correctanswer=A+B;
    wronganswer=A*B;
    diff=abs(correctanswer-wronganswer);
    printf("%d",diff);
    return 0;
}
