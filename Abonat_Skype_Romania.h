#pragma once
#include <string>
#include "Abonat_Skype.h"

class Abonat_Skype_Romania : public Abonat_Skype {
protected:
	std::string adresa_mail;

public:
	Abonat_Skype_Romania();
	Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume);
	Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const std::string& other_nr_telefon, const Persoana& data);
	Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const Abonat& data);
	Abonat_Skype_Romania(const std::string& other_adresa_mail, const Abonat_Skype& data);
	Abonat_Skype_Romania(const Abonat_Skype_Romania& other);
	Abonat_Skype_Romania(Abonat_Skype_Romania&& other);
	Abonat_Skype_Romania& operator=(const Abonat_Skype_Romania& other);
	void Afis() override;
	std::string get_Nume() override;
	virtual ~Abonat_Skype_Romania();

	friend std::ostream& operator<<(std::ostream& os, const Abonat_Skype_Romania& data);
	friend std::istream& operator>>(std::istream& is, Abonat_Skype_Romania& data);
};