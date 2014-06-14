#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	int x = 0;
	vector<int> temp(10);

	for (int i = 0; i < 10; i++)
	{
		random_shuffle(v.begin(), v.end());
	}
	for (int i = 0; i < 10; i++)
			cout << "Element " << x+i << " = " << v[i] << endl;
}





int main() {
	int x=0;
	vector<int> intVector(10);

	cout << "Please enter ten integers: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		intVector.push_back(x);
	}
	shuffle(intVector);

	return 0;
}