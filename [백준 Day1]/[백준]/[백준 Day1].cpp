/*
10818��
#include <stdio.h>

long long arr[1000000];

int main(void) {
int n = 0;
long long max = 0;
long long min = 0;
long long num = 0;

scanf("%d", &n);

for (int i = 0; i < n; i++) {
scanf("%lld", &num);
arr[i] = num;
}

min = arr[0];
max = arr[0];
for (int i = 1; i < n; i++) {
if (min > arr[i]) {
min = arr[i];
}
if (max < arr[i]) {
max = arr[i];
}
}

printf("%lld %lld\n", min, max);

return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

int a, b = 0;

while (scanf("%d %d", &a, &b) == 2) {
printf("%d\n", a + b);
}

return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

int n = 0;
int res = 0;

scanf("%d", &n);

res = 1;
for (int i = 0; i < n; i++) {
printf("%d\n", res);
res = res + 1;
}
}
*/

/*
2558��
#include <stdio.h>

int main(void) {
int a, b = 0;

scanf("%d %d", &a, &b);
if (a > 10 || b > 10) {
return 0;
}
printf("%d\n", a + b);
return 0;
}
*/

/*
1924��
������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�?
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����.
����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

#include <stdio.h>

int main(void) {
	int x = 1, y = 1;
	int last[15] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = 1;
	int num = 12;
	int sum = 0;

	scanf("%d %d", &x, &y);

	for (int i = 0; i < x - 1; i++) {
		sum = sum + last[i];
		//printf("%d ", last[i]);
	}

	day = (sum + y) % 7;

	switch (day) {
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}

	return 0;
}
*/