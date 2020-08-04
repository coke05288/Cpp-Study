#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {

	string question;
	stack<char> s;

	string answer("False");

	cin >> question;

	// �־��� ���� ���ڿ����� ��ȣ�� �ߴ����ִ����� ���� True/False�� ��ȯ���ִ� �˰���. ****���� ���� ����****
	for (int i = 0; i < question.length(); i++) {
		if (question.at(i) == '(' || question.at(i) == '{' || question.at(i) == '[') { // �� ��ȣ �߰� �� ���ÿ� push().
			s.push(question.at(i));
		}
		else if (question.at(i) == ')' || question.at(i) == '}' || question.at(i) == ']') { // �� ��ȣ �߰� �� ��ȣ ��翡 ���� ���ð� ��.
			if (!s.empty()) { // ���� ���� üũ
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