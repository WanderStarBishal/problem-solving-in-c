#include <stdio.h>
int main(){
    int counter,temp=0;
        printf("Enter the number: ");
        scanf("%d",&counter);
        while(counter>=1){
            temp++;
            counter/=10;
    }
    printf("it contains %d digits\n",temp);
    return 0;
}