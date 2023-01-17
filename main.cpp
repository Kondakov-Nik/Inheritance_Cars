// @author Кондаков Н.С

// Реализация  наследования классов "Автомобили"
#include <iostream>
#include <exception>
#include "ClassCars.h"

int main() {
	try {
		Cars Cars0("YAZ", "White", 1999, "Mechanical", 190);

		Passenger passenger1("Sedan", 5);
		passenger1.set_BaseType("BMW", "Black", 2007, "Automatic", 200); 

		Cargo cargo1("", 7000);
		cargo1.set_closed_body(0);
		cargo1.set_BaseType("KAMAZ", "Yellow", 2012, "Mechanical", 150);


		cout << Cars0.toString() << endl;
		cout << passenger1.toString() << endl;
		cout << cargo1.toString() << endl;


		Cars Cars1;
		Passenger passenger2;
		Cars* Cars2 = &passenger2; ///Указатель на тип Cars
		Cars* Cars3 = new Cargo; //Создание динамического объекта

		cout << Cars2->toString() << endl;
		cout << Cars3->toString() << endl; //Программа сама распознает какой тип хранится в Cars2 и Cars3


	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}