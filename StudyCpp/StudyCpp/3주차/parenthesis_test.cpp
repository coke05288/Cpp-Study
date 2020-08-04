#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {

	string question;
	stack<char> s;

	string answer("False");

	cin >> question;

	// 주어진 문제 문자열에서 괄호가 잘닫혀있는지에 대해 True/False로 반환해주는 알고리즘. ****현재 오류 있음****
	for (int i = 0; i < question.length(); i++) {
		if (question.at(i) == '(' || question.at(i) == '{' || question.at(i) == '[') { // 앞 괄호 발견 시 스택에 push().
			s.push(question.at(i));
		}
		else if (question.at(i) == ')' || question.at(i) == '}' || question.at(i) == ']') { // 뒷 괄호 발견 시 괄호 모양에 따라 스택과 비교.
			if (!s.empty()) { // 스택 공백 체크
				switch (question.at(i)) { 
				case ')': 
					if (s.top() == '(') answer = "True";
					s.pop();
					break;

				case '}':
					if (s.top() == '{') answer = "True";
					s.pop();
					break;

				case ']':
					if (s.top() == '[') answer = "True";
					s.pop();
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