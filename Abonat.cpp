#include "Abonat.h"

Abonat::Abonat()
{
}

Abonat::Abonat(const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:nr_telefon(other_nr_telefon),
	Persoana(other_id,other_nume)
{
}

Abonat::Abonat(const std::string& other_nr_telefon, const Persoana& data)
	:nr_telefon(other_nr_telefon),
	Persoana(data)
{
}

Abonat::Abonat(const Abonat& other)
	:nr_telefon(other.nr_telefon),
	Persoana(other)
{
}

Abonat::Abonat(Abonat&& other)
	:nr_telefon(other.nr_telefon),Persoana(0,"")
{
	other.nr_telefon = "";
	other.id = 0;
	other.nume = "";
}

Abonat& Abonat::operator=(const Abonat& other)
{
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

void Abonat::Afis()
{
	std::cout << nr_telefon << ", ";
	Persoana::Afis();
}

std::string Abonat::get_Nume()
{
	return std::string(nume);
}

Abonat::~Abonat()
{
}

std::ostream& operator<<(std::ostream& os, const Abonat& data)
{
	os << data.nr_telefon << " ";
	os << data.id << " ";
	os << data.nume;
	return os;
}

std::istream& operator>>(std::istream& is, Abonat& data)
{
	std::cout << "Dati valori (Model: nr de telefon, id, nume): ";
	is >> data.nr_telefon;
	is >> data.id;
	is >> data.nume;
	return is;
}