#include"function.h"

void engine::print() {// :: ����� ��������� ����� ����������� �������
	cout << volume << " " << horse_power << " ";
}
void body::print() {
	cout << width << " " << height << " " << color << " ";
}
void car::print() {
	cout << model << endl;
	car_engine.print();
	cout << endl;
	car_body.print();
	cout << endl;
}
