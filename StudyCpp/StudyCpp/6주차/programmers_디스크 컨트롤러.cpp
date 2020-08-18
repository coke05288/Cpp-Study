#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int solution(vector<vector<int>> jobs) {
	int answer = 0;
	int start = 0;
	int time = 0;

	vector<pair<int, int>> disk_controller;

	cout << "jobs size : " << jobs.size() << endl;

	for (int i = 0; i < jobs.size(); i++) {
		disk_controller.push_back(make_pair(jobs[i][0], jobs[i][1]));
	}

	sort(disk_controller.begin(), disk_controller.end(), compare);

	cout << "disk_controller size : " << disk_controller.size() << endl;

	while (!disk_controller.empty()) {
		for (int i = 0; i < disk_controller.size(); i++) {
			if (disk_controller[i].first <= start) {
				start += disk_controller[i].second;
				time += start - disk_controller[i].first;
				disk_controller.erase(disk_controller.begin() + i);
				break;
			}
			if (i == disk_controller.size() - 1) {
				start++;
			}
		}
		cout << start << endl;
		cout << time << endl;
	}

	answer = time / jobs.size();
	

	return answer;
}

int main() {

	vector<vector<int>> jobs = { {0,3}, {1,5}, {4,4} };

	int answer;

	answer = solution(jobs);

	cout << answer << endl;

	return 0;
}