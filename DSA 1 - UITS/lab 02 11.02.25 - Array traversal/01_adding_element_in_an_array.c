#include <stdio.h>
//using namespace std;

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i = 0; i <n;i++){
    scanf("%d",&a[i]);
}
printf("\n");
for(int i = 0; i <n;i++){
    printf("%d ",a[i]);
}
return 0;
}
