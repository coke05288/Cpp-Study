#include<iostream>
using namespace std;


class Car {
private :
	int mCarNum;
	int mCarFuel;

public:
	Car(int carNum, int carFuel) {
		mCarNum = carNum;
		mCarFuel = carFuel;
	}

	void showInfo() {
		cout << "\n";
		cout << "�ڵ��� Test�� ���� ��ȣ : " << this->getCarNum() << endl;
		cout << "�ڵ��� Test�� ���ᷮ : " << this->getCarFuel() << endl;
	}

	int getCarNum() {
		return mCarNum;
	}

	void setCarNum(int carNum) {
		mCarNum = carNum;
	}

	int getCarFuel() {
		return mCarFuel;
	}

	void setCarFuel(int carFuel) {
		mCarFuel = carFuel;
	}

};

class RacingCar : public Car {
private:
	int mCourseNum;
public:
	RacingCar(int carNum, int carFuel, int courseNum) :Car(carNum, carFuel) {
		mCourseNum = courseNum;
	}

	void showInfo() {
		Car::showInfo(); 
		cout << "�ڵ��� Test2�� �ڽ� ��ȣ : " << this->getCourseNum() << endl;
	}

	int getCourseNum() {
		return mCourseNum;
	}

	void setCourseNuml(int courseNum) {
		mCourseNum = courseNum;
	}
};

int main(void) {

	Car test = Car(9483, 20);

	test.showInfo();

	RacingCar test2 = RacingCar(1111, 10, 1);

	test2.showInfo();

	return 0;
}
