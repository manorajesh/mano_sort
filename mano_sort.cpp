#include <iostream>
#include <vector>

using namespace std;

void mano_sort(vector<int>& arr);

int main() {
	vector<int> v;
	for (auto i=0; i<100000; i++) {
        v.push_back(rand());
    }

	mano_sort(v);
	
	// for(auto x : v) {
	// 	cout << x << ", ";
	// }
	// cout << "\n";
	return 0;
}

void mano_sort(vector<int>& arr) {
	vector<int> buffer;

	for(auto elem : arr) {
		auto i = 0;
		while(i<buffer.size()) {
			if (buffer[i] > elem) {
				break;
			}
			++i;
		}
		buffer.insert(buffer.begin()+i, elem);
	}
	arr = buffer;
}