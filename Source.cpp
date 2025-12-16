#include<iostream>
#include <Windows.h>
#include<type_traits>
using namespace std;



void PrintCol(int a[], int b)
{

}




















int main()
{
	setlocale(LC_ALL, "ru");

	//shop
	const int SIZE = 9;
	int basket[SIZE]{};
	bool prog = true, ch = true, mem = true;
	int choice = 0;
	double itog = 0;
	double sum = 0;
	double price[SIZE] = { 100,120,150,130,110,90,80,70,60 };
	int a = 0;
	//Фруктовые соки
	double apple = 0;
	double orange = 0;
	double apricot = 0;
	double pear = 0;
	//Овощные соки
	double tomato = 0;
	double onion = 0;
	double cucumber = 0;
	//Чаи
	double garlic = 0;
	double parsley = 0;

	
	cout << "\t\t\tАссортимент\n\n";
	while (prog)
	{
		while (mem)
		{
			for (int i = 0; i < SIZE; i++)
			{
				basket[i] = 0;
			}
			cout << "Фруктовые соки:\n1.Яблочный сок - 100р\n2.Апельсиновый сок - 120р\n3.Абрикосовый сок - 150р\n4.Грушевый сок - 130р\n\n";
			cout << "Овощные соки:\n5.Томатный сок - 110р\n6.Луковый сок - 90р\n7.Огуречный сок - 80р\n\n";
			cout << "Чаи:\n8.Чесночный чай - 70р\n9.Петрушевый чай - 60р\n\n";
			while (ch)
			{
				int b = 0;
				cout << "Выберите номер товара, который хотите добавить в корзину (0 - выход): ";
				cin >> choice;

				switch (choice)
				{
				case 0:
					ch = false;
					break;
				case 1:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						apple += b;
						break;
					}
					basket[choice - 1] = apple;
					break;
				case 2:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						orange += b;
						break;
					}
					basket[choice - 1] = orange;
					break;
				case 3:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						apricot += b;
						break;
					}
					basket[choice - 1] = apricot;
					break;
				case 4:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						pear += b;
						break;
					}
					basket[choice - 1] = pear;
					break;
				case 5:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						tomato += b;
						break;
					}
					basket[choice - 1] = tomato;
					break;
				case 6:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						onion += b;
						break;
					}
					basket[choice - 1] = onion;
					break;
				case 7:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						cucumber += b;
						break;
					}
					basket[choice - 1] = cucumber;
					break;
				case 8:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						garlic += b;
						break;
					}
					basket[choice - 1] = garlic;
					break;
				case 9:
					while (1)
					{
						cout << "Введите количество(л): ";
						cin >> b;
						if (b <= 0)
						{
							cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
							break;
						}
						parsley += b;
						break;
					}
					basket[choice - 1] = parsley;
					break;
				default:
					cout << "Ошибка! Такой позиции не существует! Попробуйте ещё раз\n";
					break;
				}
				while (1)
				{
					int var = 0;
					cout << "Продолжить покупки?\n1.Да 2.Нет\n ";
					cin >> var;
					if (var == 1)
						break;
					else if (var == 2)
					{
						ch = false;
						break;
					}
					else
						cout << "Ошибка! Попробуйте ещё раз\n";
				}
			}
			cout << "\nВаша корзина:\n";
			if (basket[0] > 0)
			{
				cout << "Яблочный сок - " << basket[0] << " шт\n";
				cout << "Стоимость: " << basket[0] * price[0] << "р\n";
				itog += basket[0] * price[0];
				sum += itog;
				itog = 0;
			}

			if (basket[1] > 0)
			{
				cout << "Апельсиновый сок - " << basket[1] << " шт\n";
				cout << "Стоимость: " << basket[1] * price[1] << "р\n";
				itog += basket[1] * price[1];
				sum += itog;
				itog = 0;
			}

			if (basket[2] > 0)
			{
				cout << "Абрикосовый сок - " << basket[2] << " шт\n";
				cout << "Стоимость: " << basket[2] * price[2] << "р\n";
				itog += basket[2] * price[2];
				sum += itog;
				itog = 0;
			}
			if (basket[3] > 0)
			{
				cout << "Грушевый сок - " << basket[3] << " шт\n";
				cout << "Стоимость: " << basket[3] * price[3] << "р\n";
				itog += basket[3] * price[3];
				sum += itog;
				itog = 0;
			}

			if (basket[4] > 0)
			{
				cout << "Томатный сок - " << basket[4] << " шт\n";
				cout << "Стоимость: " << basket[4] * price[4] << "р\n";
				itog += basket[4] * price[4];
				sum += itog;
				itog = 0;
			}

			if (basket[5] > 0)
			{
				cout << "Луковый сок - " << basket[5] << " шт\n";
				cout << "Стоимость: " << basket[5] * price[5] << "р\n";
				if (basket[5] % 4 == 0)
				{
					basket[5] = basket[5] - basket[5] / 4;
				}
				itog += basket[5] * price[5];
				sum += itog;
				itog = 0;
			}

			if (basket[6] > 0)
			{
				cout << "Огуречный сок - " << basket[6] << " шт\n";
				cout << "Стоимость: " << basket[6] * price[6] << "р\n";
				itog += basket[6] * price[6];
				sum += itog;
				itog = 0;
			}

			if (basket[7] > 0)
			{
				cout << "Чесночный чай - " << basket[7] << " шт\n";
				cout << "Стоимость: " << basket[7] * price[7] << "р\n";
				itog += basket[7] * price[7];
				sum += itog;
				itog = 0;
			}

			if (basket[8] > 0)
			{
				cout << "Петрушевый чай - " << basket[8] << " шт\n";
				cout << "Стоимость: " << basket[8] * price[8] << "р\n";
				itog += basket[8] * price[8];
				if (basket[8] == 3)
				{
					itog -= itog / 100 * 5;
				}
				sum += itog;
				itog = 0;
			}

			while (1)
			{
				int var = 0;
				cout << "Хотите что то исправить?\n1.Да 2.Нет\n";
				cin >> var;
				if (var == 1)
				{
					itog = 0;
					sum = 0;
					ch = true;
					break;
				}
				else if (var == 2)
				{
					mem = false;
					break;
				}
				else
				{
					cout << "Ошибка! Некорректный ответ! Попробуйте ещё раз\n";
				}
			}

		}



		cout << "\nВсе скидки: \n";
		if (basket[8] >= 3)
		{
			cout << "Скидка на петрушевый чай за покупку 3шт: 5%\n";
			sum = sum - sum / 100 * 5;
		}
		if (sum > 777)
		{
			cout << "Скидка 13% за сумму больше 777 р.\n";
			sum -= sum / 100 * 13;
		}
		if (basket[5] >= 4)
		{
			cout << "В подарок " << basket[5] / 4 << " банки!\n";
		}
		if (sum < 777 && basket[5] < 4 && basket[8] < 3)
			cout << "Скидок нет\n";

		cout << "Итоговая стоимость со всеми скидками: " << sum << "р\n";
		system("pause");
		system("cls");
		while (1)
		{
			int var = 0;
			std::cout << "\nПовторить?\n1.Да 2.Нет\n";
			std::cin >> var;
			switch (var)
			{
			case 1:
			{
				ch = true;
				mem = true;
				break;
			}
			case 2:
			{
				prog = false;
				break;
			}
			default:
			{
				std::cout << "Некорректный ответ! Попробуйте ещё раз\n";
				continue;
			}
			}
			break;
		}
	}



























































	return 0;
}




















































