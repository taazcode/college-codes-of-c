#include<stdio.h>
//among the variable which is greater
int main(){
    int a, b, c;
    printf("enter the values of a b c: ");
    scanf("%d %d %d", &a, &b, &c);
     
    if(a>b || b<c ){
        if (a<c)
        {
            printf("c is greater");
            /* code */
        }
        if(c<a){
          printf("a is greater");
        }
    }
    else {
        printf("b is greater1");
    }

    return 0;
}
