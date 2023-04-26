#include "Abonat_Skype.h"

Abonat_Skype::Abonat_Skype()
{
}

Abonat_Skype::Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:id_skype(other_id_skype),
	Abonat(other_nr_telefon,other_id,other_nume)
{
}

Abonat_Skype::Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const Persoana& data)
	:id_skype(other_id_skype),
	Abonat(other_nr_telefon,Persoana(data))
{
}

Abonat_Skype::Abonat_Skype(const std::string& other_id_skype, const Abonat& data)
	:id_skype(other_id_skype),
	Abonat(data)
{
}

Abonat_Skype::Abonat_Skype(const Abonat_Skype& other)
	:id_skype(other.id_skype),
	Abonat(other)
{
}

Abonat_Skype::Abonat_Skype(Abonat_Skype&& other)
	:id_skype(other.id_skype), Abonat("",0,"")
{
	other.id_skype = "";
	other.nr_telefon = "";
	other.id = 0;
	other.nume = "";
}

Abonat_Skype& Abonat_Skype::operator=(const Abonat_Skype& other)
{
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

void Abonat_Skype::Afis()
{
	std::cout << id_skype << ", ";
	Abonat::Afis();
}

std::string Abonat_Skype::get_Nume()
{
	return std::string(nume);
}

Abonat_Skype::~Abonat_Skype()
{
}

std::ostream& operator<<(std::ostream& os, const Abonat_Skype& data)
{
	os << data.id_skype << " ";
	os << data.nr_telefon << " ";
	os << data.id << " ";
	os << data.nume;
	return os;
}

std::istream& operator>>(std::istream& is, Abonat_Skype& data)
{
	std::cout << "Dati valori (Model: id skype, nr de telefon, id, nume): ";
	is >> data.id_skype;
	is >> data.nr_telefon;
	is >> data.id;
	is >> data.nume;
	return is;
}