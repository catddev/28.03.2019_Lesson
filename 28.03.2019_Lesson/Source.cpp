#include"function.h"

//using namespace std;

//template<typename T>
//void add(T*&cc, T c) {
//	if (buffer_size == 0)
//	{
//		buffer_size = 4;
//		cc = new T[buffer_size];
//	}
//	else
//	{
//		if (current_size == buffer_size)
//		{
//			buffer_size *= 2;
//			T*tmp = new T[buffer_size];
//			for (int i = 0; i < current_size; i++)
//				tmp[i] = cc[i];
//			delete[] cc;
//			cc = tmp;
//		}
//	}
//	cc[current_size++] = c;
//}
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

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn; cin.get();

		switch (tn)
		{
		case 1:
		{
			ifstream in_file("in.txt");

			int tmp; //вспомогательная переменная для битовых полей
			car tmp_car;
			car *cs = 0;
		/*	while (in_file >> tmp_car.car_engine.volume >> tmp,
				tmp_car.car_engine.horse_power = tmp,
				in_file >> tmp,
				tmp_car.car_body.width = tmp,
				in_file >> tmp,
				tmp_car.car_body.height = tmp,
				in_file.ignore(),
				getline(in_file, tmp_car.car_body.color, '#'),
				in_file.getline(tmp_car.model, 30, '#'))
			{
				add(cs, tmp_car);
			}*/
			while (!in_file.eof())
			{
			if(!tmp_car.model) break;

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

			for (int i = 0; i < cur_size; i++)
			{
				cs[i].print();
			}
		}
		break;
		case 2:
		{

		}
		break;
		case 3:
		{

		}
		break;
		case 4:
		{

		}
		break;
		case 5:
		{

		}
		break;
		case 6:
		{

		}
		break;
		case 7:
		{

		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}