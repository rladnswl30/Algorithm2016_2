/*
1260번
DFS와 BFS

#include <stdio.h>
int queue[1001];
int arr[1001][1001];
bool check[1001];
int front, rear = 0;
int n = 0;

void enqueue(int x) {
	queue[rear++] = x;
}

int dequeue() {
	return queue[front++];
}

bool isempty() {
	if (front == rear) return true;
	else return false;
}

void dfs(int x) {
	check[x] = true;
	printf("%d ", x);

	for (int i = 1; i <= n; i++) {
		if (arr[x][i] == 1 && check[i] == false) {
			dfs(i);
		}
	}
}

void bfs(int x) {
	check[x] = true;
	enqueue(x);

	while (!isempty()) {
		x = dequeue();
		printf("%d ", x);
		//printf("%d ", dequeue());

		for (int i = 1; i <= n; i++) {
			if (arr[x][i] == 1 && check[i] == false) {
				check[i] = true;
				enqueue(i);
			}
		}
	}

}
int main(void) {
	int m = 0; 
	int start = 0;
	int a, b = 0;
	scanf("%d %d %d", &n, &m, &start);

	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		arr[a][b] = arr[b][a] = 1;
	}

	dfs(start);
	printf("\n");

	for (int i = 0; i <= n; i++) {
		check[i] = 0;
	}

	bfs(start);
	printf("\n");

	return 0;
}
*/

/*
11720번
숫자의 합

#include <stdio.h>
int main(void) {
	int n;
	int num;
	int sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%1d", &num);
		sum = sum + num;
	}

	printf("%d\n", sum);

	

	return 0;
}
*/

/*
10872번
팩토리얼

#include <stdio.h>

int main(void) {
	int n;
	int res = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		res = res * i;
	}

	printf("%d\n", res);

	return 0;
}
*/

/*
11724번
연결 요소의 개수
(싸이클 개수)
*/
//dfs?
#include <stdio.h>

int arr[1001][1001];
bool check[1001];
int n, m;

void dfs(int x) {
	check[x] = true;
	
	for (int i = 1; i <= n; i++) {
		if (arr[x][i] == 1 || check[x] == false) {
			dfs(i);
		}
	}
}

int main(void) {
	int n1, n2;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &n1, &n2);
	}



	return 0;
}