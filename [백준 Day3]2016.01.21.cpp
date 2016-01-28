/*
11053번 : 가장 긴 증가하는 부분수열

#include <stdio.h>

int a[1001];
int d[1001];

int main(void) {
int n = 0;
scanf("%d", &n);

for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
}

for (int i = 0; i < n; i++) {
d[i] = 1;
for (int j = 0; j < i; j++) {
if (a[j] < a[i] && d[i] < d[j] + 1) {
d[i] = d[j] + 1;
}
}
}

int max = d[0];
for (int i = 0; i < n; i++) {
if (max < d[i]) {
max = d[i];
}
}

printf("%d\n", max);

return 0;
}
*/


/*
2156번 : 포도주 시식

#include <stdio.h>

int d[10001];
int a[10001];

int main(void) {
int n = 0;

scanf("%d", &n);

for (int i = 1; i <= n; i++) {
scanf("%d", &a[i]);
}

d[1] = a[1];
d[2] = a[1] + a[2];
for (int i = 3; i <= n; i++) {
d[i] = d[i - 1];
if (d[i] < d[i - 2] + a[i]) {
d[i] = d[i - 2] + a[i];
}
if (d[i] < d[i - 3] + a[i - 1] + a[i]) {
d[i] = d[i - 3] + a[i - 1] + a[i];
}
}

int max = d[1];
for (int i = 1; i <= n; i++) {
if (max < d[i]) {
max = d[i];
}
}
printf("%d\n", max);
return 0;
}
*/


/*
2579번 : 계단오르기

#include <stdio.h>
#define max(a,b) (a > b ? a : b)

int a[301];
int d[301][3];

int main(void) {

	int n = 0;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	d[1][1] = a[1];
	for (int i = 2; i <= n; i++) {
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + a[i];
		d[i][2] = d[i - 1][1] + a[i];
	}

	printf("%d\n", max(d[n][1], d[n][2]));

	return 0;
}
*/

