#pragma once
#include <string>
#include "Abonat.h"

class Abonat_Skype : public Abonat {
protected:
	std::string id_skype;

public:
	Abonat_Skype();
	Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume);
	Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const Persoana& data);
	Abonat_Skype(const std::string& other_id_skype, const Abonat& data);
	Abonat_Skype(const Abonat_Skype& other);
	Abonat_Skype(Abonat_Skype&& other);
	Abonat_Skype& operator=(const Abonat_Skype& other);
	virtual void Afis() override;
	virtual std::string get_Nume() override;
	virtual ~Abonat_Skype();

	friend std::ostream& operator<<(std::ostream& os, const Abonat_Skype& data);
	friend std::istream& operator>>(std::istream& is, Abonat_Skype& data);
};