#include <iostream>

using namespace std;

int d(int n);

int d(int n) {
	int result = n;
	while(n != 0) {
		result = result + (n % 10);
		n = n / 10;
	}
	return result;
}

bool num[10001];

int main() {
    for (int i = 1; i <= 10000; i++) {
        int x = d(i);
        if (x <= 10001) {
            num[x] = true;
        }
     }

    for (int i = 1; i <= 10000; i++) {
            if (!num[i])
                cout << i << endl;
     }
}