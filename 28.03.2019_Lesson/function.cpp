#include"function.h"

void engine::print() {// :: ����� ��������� ����� ����������� �������
	cout << volume << " " << horse_power << " ";
}
void body::print() {
	cout << width << " " << height << " " << color << " ";
}
void car::print() {
	cout << model << " ";
	car_engine.print();
	car_body.print();
	cout << endl;
}
