//���� ���
#include<iostream>
using namespace std;
int main() {
	int N, m, mod, result;
	cin >> N;
	m = N / 5; //m:5kg ������ ��� �ִ� ����
	while (m >= 0) {
		mod = 0;
		result = 0;
		if (m > 0)
		{
			mod = N - 5 * m; //5kg ���� ����ϰ� ���� ����
			result = m;
		}
		else
			mod = N;
		result += mod / 3; //3kg ���� ��� ���� ���ϱ�
		mod = mod % 3; //3kg ���� ����ϰ� ���� ����

		if (mod == 0)
		{
			cout << result;
			break;
		}
		m--; // 0���� ������ �������� �����Ƿ� 5kg ���� ���� ���̰� �ٽ� �ݺ�
	}
	if (mod != 0)
		cout << -1;
}