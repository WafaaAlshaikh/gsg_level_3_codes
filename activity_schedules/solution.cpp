#include <iostream>
#include <vector>
using namespace std;

int n;
int counter = 0;

void recur(int x, vector<string>cur) {
	if (x == n) {
		counter++;
		for (string s : cur) {
			cout << s << ' ';
		}
		cout << endl;
		return;
	}

	vector <string> A = cur;
	A.push_back("Running");
	vector <string> B = cur;
	B.push_back("Swimming");
	vector <string> C = cur;
	C.push_back("Football");
	if (cur.empty()) {
		recur(x + 1, A);
		recur(x + 1, B);
		recur(x + 1, C);
	}
	else if (cur.back() == "Running") {
		recur(x + 1, B);
		recur(x + 1, C);
	}
	else if (cur.back() == "Swimming") {
		recur(x + 1, A);
		recur(x + 1, C);
	}
	else if (cur.back() == "Football") {
		recur(x + 1, A);
		recur(x + 1, B);
	}

}
int main() {
	cin >> n;
    recur(0, {});
	cout << "COUNT: " << counter << endl;
	return 0;
}
