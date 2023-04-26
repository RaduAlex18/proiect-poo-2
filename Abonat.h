#pragma once
#include <string>
#include "Persoana.h"

class Abonat : public Persoana {
protected:
	std::string nr_telefon;

public:
	Abonat();
	Abonat(const std::string& other_nr_telefon,const int other_id, const std::string& other_nume);
	Abonat(const std::string& other_nr_telefon, const Persoana& data);
	Abonat(const Abonat& other);
	Abonat(Abonat&& other);
	Abonat& operator=(const Abonat& other);
	virtual void Afis() override;
	virtual std::string get_Nume();
	virtual ~Abonat();

	friend std::ostream& operator<<(std::ostream& os, const Abonat& data);
	friend std::istream& operator>>(std::istream& is, Abonat& data);
};