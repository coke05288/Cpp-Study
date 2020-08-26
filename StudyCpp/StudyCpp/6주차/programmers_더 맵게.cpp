#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;

	//< data type, <associative container>, comparsion function class >
	priority_queue< int, vector<int>, greater<int> > newcoville;

	for (int i = 0; i < scoville.size(); i++) newcoville.push(scoville[i]);

	while (newcoville.size() > 1 && newcoville.top() < K) {
		int first, second;

		first = newcoville.top();
		newcoville.pop();

		second = newcoville.top();
		newcoville.pop();

		newcoville.push(second * 2 + first);

		answer++;
	}

	if (newcoville.top() < K) return -1;
	
	return answer;
}

int main() {

	vector<int> scoville = { 1 };

	int K = 7;

	int answer =  solution(scoville, K);

	cout << answer << endl;

	return 0;
}