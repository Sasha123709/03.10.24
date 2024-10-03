//#include <iostream>
//using namespace std;
//
//typedef struct {
//	int d;
//	int m;
//	int year;
//	int yd;
//	char name[25];
//} date;
//
//int main()
//{
//	date bday = { 03,04,2024,4, "Жовтень" };
//	//cout << bday.d << ' ' << bday.m << ' ' << bday.year << ' ' << bday.yd << ' ' << bday.name << endl;
//	date* ptr = &bday;
//	cout << ptr->d << ' ' << ptr->m << ' ' << ptr->year << ' ' << ptr->yd << ' ' << ptr->name << ' ';
//	/*date bday2;
//	cout << "" << endl;
//	cin >> bday2.d >> bday2.m >> bday2.year >> bday2.yd >> bday2.name;
//	cout << bday2.d << ' ' << bday2.m << ' ' << bday2.year << ' ' << bday2.yd << ' ' << bday2.name << endl;*/
//
//
//
//}


#include <iostream>
#include <Windows.h>
using namespace std;
struct site {
	float advertise;
	float click;
	float middle;
};

void inputInfo(site& web) {
	cout << "Кількість оголошень/Відсоток натискань/середнє натискання"<<endl;
	cin >> web.advertise >> web.click >> web.middle;
}
void res(site& web) {
	float many;
	many = web.advertise * (web.click / 100) * web.middle;
	cout << "Прибуток сайту за день: " << many << endl;
	cout << "Кількість оголошень/Відсоток натискань/середнє натискання" << endl;
	cout << web.advertise << ' ' << web.click << ' ' << web.middle << endl;

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	site web;
	inputInfo(web);
	res(web);
	return 0;

}