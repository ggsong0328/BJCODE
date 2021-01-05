//첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

//둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다.점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

#include <iostream>
#include <string>
using namespace std;
int grade[1000];

int main() {
	int C = 0;
	cin >> C;
	for (int i = 0; i < C; i++) {
		int N = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> grade[j];
		}
		float sum = 0;
		for (int j = 0; j < N; j++) {
			sum = sum + grade[j];
		}
		float avg = sum / N;
		float count = 0;
		for (int k = 0; k < N; k++) {
			if (avg < grade[k])
				count++;
		}
		float result = (count / N) * 100;
		cout.precision(3);
		cout << fixed;
		cout << result << "%" << endl;
	}
}