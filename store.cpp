// 22125085_ex3.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int t;// the number of trips to the ice cream parlor
int n;// the size of the array cost
// process right at the inputing unordered_map 
void whatFlavors(vector<int> cost, int money) {
	unordered_map<int, int> cost_flavor;
	int sz = cost.size();

	for (int i = 0; i < sz; ++i) {
		if (cost_flavor.count(money - cost[i]) == 1) {
			cout << cost_flavor[money - cost[i]] + 1 << " " << i + 1;
		}
		cost_flavor.insert({ cost[i],i });
	}
	cout << endl;
}
void inputCostVector(vector<int>& cost) {
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		cost.push_back(tmp);
	}
}
int main()
{
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int money;
		cin >> money;
		cin >> n;
		vector<int> cost;
		inputCostVector(cost);
		whatFlavors(cost, money);
	}
}