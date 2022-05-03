#include<stdio.h>
int abs(int a, int b) {
	if(a>=b) {
		return a-b;
	}
	else {
		return b-a;
	}
}
struct Rectangle() {
	int UR[2];
	int LL[2];
};
int getLength(Rectangle *rect) {
	return abs(rect.UR[0]-rect.LL[0]);
}
int getWidth(Rectangle *rect) {
	return abs(rect.UR[1]-rect.LL[1]);
}
int main() {
	int ur_x, ur_y, ll_x, ll_y;
	printf("UR's X: ");
	scanf("%d", &ur_x);
	printf("UR's Y: ");
	scanf("%d", &ur_y);
	printf("LL's X: ");
	scanf("%d", &ll_x);
	printf("LL's Y: ");
	scanf("%d", &ll_y);
	struct Rectangle rect;
	rect.UR[]={ur_x,ur_y};
	rect.LL[]={ll_x,ll_y};
	printf("%d", getLength(rect));
	printf("%d", getWidth(rect));
	return 0;
}