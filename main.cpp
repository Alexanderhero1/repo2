
//1.Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
#include <iostream>
using namespace std;

short int a = 1000;
int b = 10'000u;
long long c = 10'000'000'000;
char d = 55;
bool e = 1;
float f = 10.234f;
double g = 10'000'000.22;

//2.Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
enum feelds
{
	cross,zero,empty
	};

//3.Создать массив, способный содержать значения такого перечисления и инициализировать его.
char array[3][3];

//4. * Создать структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами (подумайте что может понадобиться).
struct cross_zero
{
	char player1 [20];//имя игрока1
	char player2 [20];//имя игрока2
	char game_field[3][3];// само поле
	char player1_choice;//чем играет игрок1
	char plfyer2_choie;//чем играет игрок2
	bool win;//победа
	bool loose;//проигрыш
	bool tie;//ничья
	bool game_over;//конец


};

//5. Создать структуру...zZzZ....zZz...слишком мудрёно 
struct MyStruct
{
	union myData
	{
		int salary;
		float bonus;
		char ID[20];
			};
};

int main()
{


		return 0;
}


