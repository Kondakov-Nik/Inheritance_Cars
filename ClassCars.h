// @author Кондаков Н.С

// Реализация  наследования классов "Автомобили"


#pragma once
#include <iostream>

using namespace std;


class Cars	// Класс машины
{
protected:

	string brand;       // Марка
	string color;     // Цвет
	double year_release;    // Год выпуска
	string transmission;     // КПП
	double hourse_power; //ЛС

public:

	Cars(); //Конструктор без параметров

	Cars(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); // Конструктор с параметрами

	~Cars(); //Деструктор

	virtual string toString(); //Вывод в одну строку виртуальный 

	void set_brand(const string& brand1); //Установить бренд

	string get_brand() const;			//Вернуть бренд

	void set_color(const string& color1); //Установить цвет

	string get_color()const;			//Вернуть цвет

	void set_year_release(double year_release1); //Установить год выпуска

	double get_year_release()const;     //Вернуть год выпуска

	void set_transmission(const string& transmission1); //Установить тип кпп

	string get_transmission()const;			//Вернуть тип кпп

	void set_hourse_power(double hourse_power1); //Установить количество лошадиных сил

	double get_hourse_power()const; //Вернуть количество лошадиных сил

};


// Класс пассажирский авто
class Passenger : public Cars {
private:

	string type_auto; // Класс автомобиля( Седан,Купе,Пикап)
	double places; // Количество Пассажирских мест

public:
	Passenger();//Конструктор без параметров

	Passenger(const string& type_auto1, double places1);// Конструктор с параметрами
	~Passenger(); //Деструктор

	void set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); //Задание базового типа из основного класса

	string toString() override;   //Вывод в одну строку виртуальный (с перезагрузкой)

	void set_type_auto(const string& type_auto1); //Установить Класс автомобиля

	string get_type_auto()const; //Вернуть Класс автомобиля

	void set_places(double places1); //Установить Количество Пассажирских мест

	double get_places()const;//Вернуть Количество Пассажирских мест
};

// Класс грузовые авто
class Cargo : public Cars
{
protected:

	bool closed_body; //Крытый кузов (да/нет)
	double load_capacity; //Грузоподъемность 

public:

	Cargo();     //Конструктор без параметров

	Cargo(bool closed_body1, double load_capacity1);    //Конструктор с параметрами
	~Cargo();    //Деструктор

	void set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); /// Задание базового типа из основного класса

	string toString() override; //Вывод в одну строку виртуальный (с перезагрузкой)

	void set_closed_body(bool closed_body1); //Установить Крытый кузов 

	bool get_closed_body()const;//Вернуть Крытый кузов 

	void set_load_capacity(double load_capacity1); //Установить Грузоподъемность

	double get_load_capacity()const; //Вернуть Грузоподъемность


};