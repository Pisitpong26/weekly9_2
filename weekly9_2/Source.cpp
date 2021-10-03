#include<stdio.h>
void calculate(int a, int b,int c,int d,int e) {
	if (a > b && a > c && a > d && a > e) {
		printf("%d have value more than every number",a);
	}
	else if (b > a && b > c && b > d && b > e) {
		printf("%d have value more than every number", b);
	}
	else if (c > a && c > b && c > d && c > e) {
		printf("%d have value more than every number", c);
	}
	else if (d > a && d > b && d > c && d > e) {
		printf("%d have value more than every number", d);
	}
	else if (e > a && e > b && e > c && e > d) {
		printf("%d have value more than every number", e);
	}
	else printf("%d have value equal to every number", a);
}
int main() {
	int a, b, c, d, e;
	printf("Enter five number :");
	scanf_s("%d %d %d %d %d", &a, &b,&c,&d,&e);
	calculate(a, b, c, d, e);
	return 0;
}