#include <stdio.h>
#include <stdbool.h>
 

bool checkDoiXung(int n, int A[]){
    int i;

    for(i = 0;i<n/2;i++){

        if(A[i] != A[n-i-1]) return false; 
    }
     
    return true; 
}
int main()
{
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d,",&n);
    int A[n];
     
    int i;
    for(i = 0; i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
     
    printf("\n\nMang vua nhap:\n");
     
    for(i = 0; i<n;i++){
        printf("%d  ", A[i]);
    }
     
    if(checkDoiXung(n, A)) printf("\n\n =>Mang vua nhap doi xung nhau");
    else printf("\n\n =>Mang vua nhap khong doi xung nhau");
}
