// @author �������� �.�

// ����������  ������������ ������� "����������"


#pragma once
#include <iostream>

using namespace std;


class Cars	// ����� ������
{
protected:

	string brand;       // �����
	string color;     // ����
	double year_release;    // ��� �������
	string transmission;     // ���
	double hourse_power; //��

public:

	Cars(); //����������� ��� ����������

	Cars(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); // ����������� � �����������

	~Cars(); //����������

	virtual string toString(); //����� � ���� ������ ����������� 

	void set_brand(const string& brand1); //���������� �����

	string get_brand() const;			//������� �����

	void set_color(const string& color1); //���������� ����

	string get_color()const;			//������� ����

	void set_year_release(double year_release1); //���������� ��� �������

	double get_year_release()const;     //������� ��� �������

	void set_transmission(const string& transmission1); //���������� ��� ���

	string get_transmission()const;			//������� ��� ���

	void set_hourse_power(double hourse_power1); //���������� ���������� ��������� ���

	double get_hourse_power()const; //������� ���������� ��������� ���

};


// ����� ������������ ����
class Passenger : public Cars {
private:

	string type_auto; // ����� ����������( �����,����,�����)
	double places; // ���������� ������������ ����

public:
	Passenger();//����������� ��� ����������

	Passenger(const string& type_auto1, double places1);// ����������� � �����������
	~Passenger(); //����������

	void set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); //������� �������� ���� �� ��������� ������

	string toString() override;   //����� � ���� ������ ����������� (� �������������)

	void set_type_auto(const string& type_auto1); //���������� ����� ����������

	string get_type_auto()const; //������� ����� ����������

	void set_places(double places1); //���������� ���������� ������������ ����

	double get_places()const;//������� ���������� ������������ ����
};

// ����� �������� ����
class Cargo : public Cars
{
protected:

	bool closed_body; //������ ����� (��/���)
	double load_capacity; //���������������� 

public:

	Cargo();     //����������� ��� ����������

	Cargo(bool closed_body1, double load_capacity1);    //����������� � �����������
	~Cargo();    //����������

	void set_BaseType(const string& brand1, const string& color1, double year_release1, const string& transmission1, double hourse_power1); /// ������� �������� ���� �� ��������� ������

	string toString() override; //����� � ���� ������ ����������� (� �������������)

	void set_closed_body(bool closed_body1); //���������� ������ ����� 

	bool get_closed_body()const;//������� ������ ����� 

	void set_load_capacity(double load_capacity1); //���������� ����������������

	double get_load_capacity()const; //������� ����������������


};