#include "Persoana.h"

Persoana::Persoana()
{
}

Persoana::Persoana(const int other_id, const std::string& other_nume)
	:id(other_id),
	nume(other_nume)
{
}

Persoana::Persoana(const Persoana& other)
	:id(other.id),
	nume(other.nume)
{
}

Persoana::Persoana(Persoana&& other)
	:id(0),nume("")
{
	id = other.id;
	nume = std::move(other.nume);

	other.id = 0;
	other.nume = "";
}

Persoana& Persoana::operator=(const Persoana& other)
{
	id = other.id;
	nume = other.nume;
	return *this;
}

void Persoana::Afis()
{
	std::cout << id << ", " << nume;
}

Persoana::~Persoana()
{
}

std::ostream& operator<<(std::ostream& os, const Persoana& data)
{
	os << data.id << " ";
	os << data.nume;
	return os;
}

std::istream& operator>>(std::istream& is, Persoana& data)
{
	std::cout << "Dati valori (Model: id, nume): ";
	is >> data.id;
	is >> data.nume;
	return is;
}