// if we use auto before any int function, it fills the memory with any garbage(random) integer
#include<stdio.h>
int main(){
    auto int var;
    printf("%d",var);
    return 0;
}