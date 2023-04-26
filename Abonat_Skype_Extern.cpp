#include "Abonat_Skype_Extern.h"

Abonat_Skype_Extern::Abonat_Skype_Extern()
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:tara(other_tara),
	Abonat_Skype(other_id_skype, other_nr_telefon, other_id, other_nume)
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const std::string& other_id_skype, const std::string& other_nr_telefon, const Persoana& data)
	:tara(other_tara),
	Abonat_Skype(other_id_skype, other_nr_telefon, Persoana(data))
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const std::string& other_id_skype, const Abonat& data)
	:tara(other_tara),
	Abonat_Skype(other_id_skype, Abonat(data))
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const Abonat_Skype& data)
	:tara(other_tara),
	Abonat_Skype(data)
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const Abonat_Skype_Extern& other)
	:tara(other.tara),
	Abonat_Skype(other)
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(Abonat_Skype_Extern&& other)
	:tara(other.tara), Abonat_Skype("", "", 0, "")
{
	other.tara = "";
	other.id_skype = "";
	other.nr_telefon = "";
	other.id = 0;
	other.nume = "";
}

Abonat_Skype_Extern& Abonat_Skype_Extern::operator=(const Abonat_Skype_Extern& other)
{
	tara = other.tara;
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

void Abonat_Skype_Extern::Afis()
{
	std::cout << tara << ", ";
	Abonat_Skype::Afis();
}

std::string Abonat_Skype_Extern::get_Nume()
{
	return std::string(nume);
}

Abonat_Skype_Extern::~Abonat_Skype_Extern()
{
}

std::ostream& operator<<(std::ostream& os, const Abonat_Skype_Extern& data)
{
	os << data.tara << " ";
	os << data.id_skype << " ";
	os << data.nr_telefon << " ";
	os << data.id << " ";
	os << data.nume;
	return os;
}

std::istream& operator>>(std::istream& is, Abonat_Skype_Extern& data)
{
	std::cout << "Dati valori (Model: tara, id skype, nr de telefon, id, nume): ";
	is >> data.tara;
	is >> data.id_skype;
	is >> data.nr_telefon;
	is >> data.id;
	is >> data.nume;
	return is;
}