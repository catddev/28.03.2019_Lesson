#include"function.h"

int buf_size = 0;
int cur_size = 0;

void add(car*&cs, car el) {
	if (buf_size == 0)
	{
		buf_size = 3; //любое произвольное число ячеек
		cs = new car[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			car *tmp;
			buf_size *= 3; //увеличение памяти в 3 раза
			tmp = new car[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = cs[i];
			}
			delete[] cs;
			cs = tmp;
		}
	}
	cs[cur_size] = el;
	cur_size++;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

			ifstream in_file("in.txt");

			int tmp; //вспомогательная переменная для битовых полей
			car tmp_car;
			car *cs = 0;
			while (!in_file.eof())
			{

				in_file >> tmp_car.car_engine.volume >> tmp; //все битовые поля считывамем в tmp
				tmp_car.car_engine.horse_power = tmp; //потом переприсваиваем
				in_file >> tmp;
				tmp_car.car_body.width = tmp;
				in_file >> tmp;
				tmp_car.car_body.height = tmp;
				in_file.ignore();
				getline(in_file, tmp_car.car_body.color, '#'); //формат считывания для string 
				//in_file.ignore();
				in_file.getline(tmp_car.model, 30, '#');


				add(cs, tmp_car);
			}

			// << cur_size << endl;
			for (int i = 0; i < cur_size-1; i++) //в функции add постдекремент сur_size++, поэтому здесь надо его уменьшить на 1
				cs[i].print();
			cout << endl << endl;

	system("pause");
	return 0;
}