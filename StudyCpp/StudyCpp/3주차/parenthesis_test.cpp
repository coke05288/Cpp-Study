#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {

	string question;
	stack<char> s;

	string answer("False");

	cin >> question;

	for (int i = 0; i < question.length(); i++) {
		if (question.at(i) == '(' || question.at(i) == '{' || question.at(i) == '[') {
			s.push(question.at(i));
		}
		else if (question.at(i) == ')' || question.at(i) == '}' || question.at(i) == ']') {
			if (!s.empty()) {
				switch (question.at(i)) {
				case ')':
					if (s.top() == '(') answer = "True";
					break;

				case '}':
					if (s.top() == '{') answer = "True";
					break;

				case ']':
					if (s.top() == '[') answer = "True";
					break;

				default:
					break;
				}
			}
		}
		else {
			continue;
		}
	}

	cout << answer << endl;

	return 0;
}