/*
1463번
1로 만들기

#include <stdio.h>

int d[1000001];

int go(int n) {
	if (n == 1) return 0;
	if (d[n] > 0) return d[n];
	d[n] = go(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = go(n / 2) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = go(n / 3) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	return d[n];
}

int main(void) {
	int n;

	scanf("%d", &n);
	printf("%d\n", go(n));

	return 0;
}
*/



/*
1463번(2)
1로 만들기


#include <stdio.h>

int d[1000001];

int main(void) {
	int n;
	scanf("%d", &n);
	d[1] = 0;

	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
			d[i] = d[i / 2] + 1;
		}
		if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
			d[i] = d[i / 3] + 1;
		}
	}
	printf("%d\n", d[n]);
	return 0;
}

*/

/*
11726번
2XN 타일링

#include <stdio.h>

int d[1001];

int main(void) {

	d[0] = 1;
	d[1] = 1;
	d[2] = 2;

	int n = 0;
	scanf("%d", &n);

	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] = d[i] % 10007;
	}

	printf("%d\n", d[n]);
	
	return 0;
}

*/

/*
11727
2×n 타일링 2

#include <stdio.h>

int d[1001];
int main(void) {

	d[0] = 1;
	d[1] = 1;
	d[2] = 3;

	int n = 0;
	scanf("%d", &n);

	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2] + d[i-2];
		d[i] %= 10007;
	}

	printf("%d\n", d[n]);
	return 0;
}
*/

/*

*/