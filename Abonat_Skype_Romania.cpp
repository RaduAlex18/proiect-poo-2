#include "Abonat_Skype_Romania.h"

Abonat_Skype_Romania::Abonat_Skype_Romania()
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:adresa_mail(other_adresa_mail),
	Abonat_Skype(other_id_skype,other_nr_telefon,other_id,other_nume)
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const std::string& other_nr_telefon, const Persoana& data)
	:adresa_mail(other_adresa_mail),
	Abonat_Skype(other_id_skype,other_nr_telefon,Persoana(data))
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const Abonat& data)
	:adresa_mail(other_adresa_mail),
	Abonat_Skype(other_id_skype,Abonat(data))
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const Abonat_Skype& data)
	:adresa_mail(other_adresa_mail),
	Abonat_Skype(data)
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania& other)
	:adresa_mail(other.adresa_mail),
	Abonat_Skype(other)
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(Abonat_Skype_Romania&& other)
	:adresa_mail(other.adresa_mail), Abonat_Skype("", "", 0, "")
{
	other.adresa_mail = "";
	other.id_skype = "";
	other.nr_telefon = "";
	other.id = 0;
	other.nume = "";
}

Abonat_Skype_Romania& Abonat_Skype_Romania::operator=(const Abonat_Skype_Romania& other)
{
	adresa_mail = other.adresa_mail;
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

void Abonat_Skype_Romania::Afis()
{
	std::cout << adresa_mail << ", ";
	Abonat_Skype::Afis();
}

std::string Abonat_Skype_Romania::get_Nume()
{
	return std::string(nume);
}

Abonat_Skype_Romania::~Abonat_Skype_Romania()
{
}

std::ostream& operator<<(std::ostream& os, const Abonat_Skype_Romania& data)
{
	os << data.adresa_mail << " ";
	os << data.id_skype << " ";
	os << data.nr_telefon << " ";
	os << data.id << " ";
	os << data.nume;
	return os;
}

std::istream& operator>>(std::istream& is, Abonat_Skype_Romania& data)
{
	std::cout << "Dati valori (Model: adresa de mail, id skype, nr de telefon, id, nume): ";
	is >> data.adresa_mail;
	is >> data.id_skype;
	is >> data.nr_telefon;
	is >> data.id;
	is >> data.nume;
	return is;
}