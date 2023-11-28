#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap lan luot 3 so a,b,c :\n" );
	scanf("%d %d %d", &a ,&b ,&c);
	int sumab = a+b;
	int sumbc = b+c;
	int sumac = a+c;
	int diffab = (a>b) ? a -b : b-a;
	int diffbc = (b>c) ? b-c : c-b;
	int diffac = (a>c) ? a-c : c-a;
	printf("tong va hieu cua a va b: %d, %d\n", sumab,diffab);
	printf("tong va hieu cua b va c: %d,%d\n", sumbc,diffbc);
	printf("tong va hieu cua a va c: %d,%d\n",sumac,diffac);
	return 0;
}
