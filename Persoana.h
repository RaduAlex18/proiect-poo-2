#pragma once
#include<string>
#include<iostream>

class Persoana {
protected:
	int id;
	std::string nume;

public:
	Persoana();
	Persoana(const int other_id, const std::string& other_nume);
	Persoana(const Persoana& other);
	Persoana(Persoana&& other);
	Persoana& operator=(const Persoana& other);
	virtual void Afis();
	virtual ~Persoana();

	friend std::ostream& operator<<(std::ostream& os, const Persoana& data);
	friend std::istream& operator>>(std::istream& is, Persoana& data);
};