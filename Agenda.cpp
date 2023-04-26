#include "Agenda.h"

Agenda::Agenda()
{
	
}

Agenda& Agenda::operator+=(const Abonat_Skype_Extern& other)
{
	lista.push_back(new Abonat_Skype_Extern(other));
	nr_abonati++;
	return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype_Romania& other)
{
	lista.push_back(new Abonat_Skype_Romania(other));
	nr_abonati++;
	return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype& other)
{
	lista.push_back(new Abonat_Skype(other));
	nr_abonati++;
	return *this;
}

Agenda& Agenda::operator+=(const Abonat& other)
{
	lista.push_back(new Abonat(other));
	nr_abonati++;
	return *this;
}

void Agenda::operator[](const std::string nume)
{

	for (auto x : lista)
	{
		try
		{
			if (typeid(*x) == typeid(Abonat_Skype) && (dynamic_cast<Abonat_Skype*>(x)->get_Nume() == nume))
			{
				Persoana* temp;
				temp = dynamic_cast<Abonat_Skype*>(x);
				temp->Afis();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat_Skype_Romania) && (dynamic_cast<Abonat_Skype_Romania*>(x)->get_Nume() == nume))
			{
				Persoana* temp;
				temp = dynamic_cast<Abonat_Skype_Romania*>(x);
				temp->Afis();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat_Skype_Extern) && (dynamic_cast<Abonat_Skype_Extern*>(x)->get_Nume() == nume))
			{
				Persoana* temp;
				temp = dynamic_cast<Abonat_Skype_Extern*>(x);
				temp->Afis();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat) && (dynamic_cast<Abonat*>(x)->get_Nume() == nume))
			{
				Persoana* temp;
				temp = dynamic_cast<Abonat*>(x);
				temp->Afis();
				throw nume;
			}

		}
		catch (const std::string nume)
		{
			std::cout << "\n";
			std::cout << "Abonatul cu numele " << nume << " se afla in agenda noastra.";
			std::cout << "\n";
		}
	}
	
}

Agenda::~Agenda()
{
}

int Agenda::get_nr_abonati()
{
	return nr_abonati;
}

std::ostream& operator<<(std::ostream& os, const Agenda& data)
{
	os << " [ ";
	for (auto x : data.lista)
	{
		if (typeid(*x) == typeid(Abonat_Skype))
		{
			Abonat* temp;
			temp = dynamic_cast<Abonat_Skype*>(x);
			temp->Afis();

		}

		if (typeid(*x) == typeid(Abonat_Skype_Romania))
		{
			Abonat* temp;
			temp = dynamic_cast<Abonat_Skype_Romania*>(x);
			temp->Afis();
		}

		if (typeid(*x) == typeid(Abonat_Skype_Extern))
		{
			Abonat* temp;
			temp = dynamic_cast<Abonat_Skype_Extern*>(x);
			temp->Afis();
		}

		if (typeid(*x) == typeid(Abonat))
		{
			Abonat* temp;
			temp = dynamic_cast<Abonat*>(x);
			std::unique_ptr<Abonat> p(temp);
			(p)->Afis();
		}

		os << " | ";

	}

	os << "]";
	return os;
}