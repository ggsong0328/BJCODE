//ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

//��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����.������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

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