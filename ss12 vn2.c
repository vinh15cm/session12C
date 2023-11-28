#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap lan luot 3 so a,b,c :\n" );
	scanf("%d %d %d", &a ,&b ,&c);
	int tichab = a*b;
	int tichbc = b*c;
	int tichac = a*c;
	int thuongab = (b>a&&b%a==0) ? a/b : b/a;
	int thuongbc = (c>b&&b%c==0) ? c\b  : b/c;
	int thuongac = (a>c&&a%c==0) ? c/a  :a/c;
	
	printf("tich va thuong cua a va b : %d, %d\n", tichab,thuongab);
	printf("tich va thuong cua b va c : %d,%d\n", tichbc,thuongbc);
	printf("tich va thuong cua a va c : %d,%d\n", tichac , thuongac);
}
