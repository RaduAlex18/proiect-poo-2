#pragma once
#include <vector>
#include <string>
#include <typeinfo>
#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"

class Agenda : public Abonat_Skype_Romania, public Abonat_Skype_Extern {
private:
	std::vector <Abonat*> lista;
	static int nr_abonati;

public:
	Agenda();
	Agenda& operator+=(const Abonat_Skype_Extern& other);
	Agenda& operator+=(const Abonat_Skype_Romania& other);
	Agenda& operator+=(const Abonat_Skype& other);
	Agenda& operator+=(const Abonat& other);
	void operator[](const std::string);
	static int get_nr_abonati();
	~Agenda();

	friend std::ostream& operator<<(std::ostream& os, const Agenda& data);
};