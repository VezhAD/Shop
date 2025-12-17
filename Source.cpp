#include<iostream>
#include <Windows.h>
#include<type_traits>
using namespace std;

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

	string names[SIZE]{ "Яблочный сок" ,"Апельсиновый сок", "Абрикосовый сок"," Грушевый сок", " Томатный сок", "Луковый сок", "Огуречный сок", "Чесночный чай", "Петрушевый чай" };

	while (prog)
	{
		ch = true;
		mem = true;
		system("cls");
		while (mem)
		{
			for (int i = 0; i < SIZE; i++)
			{
				basket[i] = 0;
			}
			cout << "\t\t\tАссортимент\n\n";
			cout << "Фруктовые соки:\n1.Яблочный сок - 100р\n2.Апельсиновый сок - 120р\n3.Абрикосовый сок - 150р\n4.Грушевый сок - 130р\n\n";
			cout << "Овощные соки:\n5.Томатный сок - 110р\n6.Луковый сок - 90р\n7.Огуречный сок - 80р\n\n";
			cout << "Чаи:\n8.Чесночный чай - 70р\n9.Петрушевый чай - 60р\n\n";
			while (ch)
			{
				cout << "Выберите номер товара, который хотите добавить в корзину (0 - выход): ";
				cin >> choice;

				if (choice == 0)
				{
					cout << "Всего хорошего!";
					return 0;
				}

				while (1)
				{
					int b = 0;
					cout << "Введите количество(л): ";
					cin >> b;
					if (b <= 0)
					{
						cout << "Ошибка! Недопустимое значение! Попробуйте ещё раз\n";
					}
					basket[choice - 1] += b;
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

			for (int i = 0; i < SIZE; i++)
			{
				if (basket[i] > 0)
				{
					cout << names[i];
					cout << " - " << basket[i] << " шт.\n";
					cout << "Стоимость: " << basket[i] * price[i] << "p.\n";
				}
				itog = basket[i] * price[i];
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
		cout << "\nВсе скидки и акции: \n";
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
			cout << "В подарок " << basket[5] / 4 << " банки лукового сока!\n";
			sum -= (basket[5] / 4) * price[5];
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




















































