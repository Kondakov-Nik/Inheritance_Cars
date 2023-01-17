// @author �������� �.�.

// ����������  ������������ ������� "����������"
#include "ClassCars.h"
#include <iostream>
#include <exception>
#include <string>

using namespace std;

// ������� �� double � string
string dobleToString(double number) {
	string numStr = to_string(number);
	if (numStr[numStr.size() - 1] == '0')
		for (size_t i = numStr.size() - 1; numStr[i] == '0'; i--)
			numStr.erase(i, 1);

	if (numStr[numStr.size() - 1] == '.')
		numStr.erase(numStr.size() - 1, 1);
	return numStr;
}
// ����������� ��� ����������
Cars::Cars() {

	brand = "Audi";
	color = "Red";
	year_release = 1995;
	transmission = "Automatic";
	hourse_power = 190;
}

// ����������� � ����������� 
Cars::Cars(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1) {
	set_brand(brand1);
	set_color(color1);
	set_year_release(year_release1);
	set_transmission(transmission1);
	set_hourse_power(hourse_power1);
}

// ����������
Cars::~Cars() {}

//������� � ������ ���������� � ����������
string Cars::toString() {
	return "brand: " + brand + "; " + " color: " + color + "; " + " year release: " + dobleToString(year_release) + "; " + " transmission: " + transmission + "; " + " hourse_power: " + dobleToString(hourse_power) + "H.P." + "; ";
}
// ���������� �����
void Cars::set_brand(const string& brand1) {
	if (brand1 == "") throw invalid_argument("Error: field brand is empty");
	brand = brand1;
}
// ������� �����
string Cars::get_brand()const {
	return brand;
}
// ���������� ����
void Cars::set_color(const string& color1) {
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	color = color1;
}
// ������� ����
string Cars::get_color() const {
	return color;
}
// ���������� ��� �������
void Cars::set_year_release(double year_release1) {
	if (year_release1 != (double)year_release1) throw invalid_argument("Error: field year_release is empty");
	if (year_release1 <= 0) throw invalid_argument("Error: field year_release <= 0");
	year_release = year_release1;
}
// ������� ��� �������
double Cars::get_year_release()const {
	return year_release;
}
// ���������� ��� �����������
void Cars::set_transmission(const string& transmission1) {
	if (transmission1 == "") throw invalid_argument("Error: field transmission is empty");
	transmission = transmission1;
}
// ������� ��� �����������
string Cars::get_transmission()const {
	return transmission;
}

// ���������� ���������� ��������� ���
void Cars::set_hourse_power(double hourse_power1) {
	if (hourse_power1 != (double)hourse_power1) throw invalid_argument("Error: field hourse_power is empty");
	if (hourse_power1 <= 0) throw invalid_argument("Error: field hourse_power <= 0");
	hourse_power = hourse_power1;
}
// ������� ���������� ��������� ���
double Cars::get_hourse_power()const {
	return hourse_power;
}

// ����������� ��� ����������
Passenger::Passenger() {
	type_auto = "Pickup";
	places = 5;
};
//�����������
Passenger::Passenger(const string& type_auto1, double places1) {
	if (type_auto1 == "") throw invalid_argument("Error: field type_auto is empty");
	if (places1 <= 0 ) throw invalid_argument("Error: field places is empty");
	type_auto = type_auto1;
	places = places1;
}
//����������
Passenger::~Passenger() {};

// ������� �������� ���� �� ��������� ������
void Passenger::set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1) {
	set_brand(brand1);
	set_color(color1);
	set_year_release(year_release1);
	set_transmission(transmission1);
	set_hourse_power(hourse_power1);
};
// ������� � ������ ���������� � �������� ����������
string Passenger::toString() {
	return Cars::toString() + " Type auto: " + type_auto + ";" + " Places: " + dobleToString(places) + "; ";
};
// ���������� ��� ��������� ����
void Passenger::set_type_auto(const string& type_auto1) {
	if (type_auto1 == "") throw invalid_argument("Error: field type_auto is empty");
	type_auto = type_auto1;
}
// ������� ��� ��������� ����
string Passenger::get_type_auto()const {
	return type_auto;
};

// ���������� ���������� ������������ ����
void Passenger::set_places(double places1) {
	if (places1 <= 0) throw invalid_argument("Error: field places is empty");
	places = places1;
};
// ������� ���������� ������������ ����
double Passenger::get_places() const {
	return places;
};

// ����������� ��� ����������
Cargo::Cargo() {

	closed_body = 1;
	load_capacity = 8000;
};

// ����������� � �����������
Cargo::Cargo(bool closed_body1, double load_capacity1) {
	if (closed_body1 != 1 && closed_body1 != 0) throw invalid_argument("Error: field closed_body is empty");
	if (load_capacity1 <= 0) throw invalid_argument("Error: field load_capacity is empty");
	closed_body = closed_body1;
	load_capacity = load_capacity1;
};

// ����������
Cargo::~Cargo() {};

// ������� �������� ���� �� ��������� ������
void Cargo::set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1) {
	set_brand(brand1);
	set_color(color1);
	set_year_release(year_release1);
	set_transmission(transmission1);
	set_hourse_power(hourse_power1);
};
// ������� � ������ ���������� � �������� ����
string Cargo::toString() {
	return Cars::toString() + "Closed body of car: " + (closed_body == 1 ? "yes" : "no") + "; " + "load capacity: " + dobleToString(load_capacity) + "kg" + ";";
};
// ���������� ������ ����� ��� ���
void Cargo::set_closed_body(bool closed_body1) {
	if (closed_body1 != 1 && closed_body1 != 0) throw invalid_argument("Error: field closed_body is empty");
	closed_body = closed_body1;
};
// ������� ������ ����� ��� ���
bool Cargo::get_closed_body() const {
	return closed_body;
};
// ���������� ����������������
void Cargo::set_load_capacity(double load_capacity1) {
	if (load_capacity1 <= 0 ) throw invalid_argument("Error: field load_capacity is empty");
	load_capacity = load_capacity1;
};
// ������� ����������������
double Cargo::get_load_capacity()const {
	return load_capacity;
};


