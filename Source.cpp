//#include "Persoana.h"
//#include "Abonat.h"
//#include "Abonat_Skype.h"
//#include "Abonat_Skype_Romania.h"
//#include "Abonat_Skype_Extern.h"
#include "Agenda.h"

int Agenda::nr_abonati = 0;

int main()
{
	Persoana test(15, "Marcel"), test_2, test_3=test, test_4;
	
	std::cout << "Afisare obiect de tip Persoana:";
	std::cout << "\n";
	std::cout << test;		//merge
	std::cout << "\n";
	std::cin >> test_2;		//merge
	std::cout << "Citire de la tastatura:";
	std::cout << "\n";
	std::cout << "test_2= " << test_2;		//merge
	std::cout << "\n";
	std::cout << "test_3 ia valoarea lui test:";
	std::cout << "\n";
	std::cout << test_3;		//merge
	std::cout << "\n";
	
	std::cout << "\n";
	std::cout << "---------------------------------------------------------------------------";
	std::cout << "\n";
	std::cout << "\n";
	
	/*
	std::unique_ptr<Persoana> p1(new Persoana(12, "Radu"));
	//p1->Afis();
	std::cout << "\n";

	std::unique_ptr<Persoana> p2;
	p2 = std::move(p1);

	p2->Afis();
	*/
	

	Abonat a("021323", test), a2, a3 = a, a4("31312", 14, "Ion"); 
	/*
	std::cout << "Afisare obiect de tip Abonat:";	
	std::cout << "\n";
	std::cout << a;		//merge
	std::cout << "\n";
	std::cin >> a2;		//merge 
	std::cout << "Citire de la tastatura:";
	std::cout << "\n";
	std::cout << a2;		//merge
	std::cout << "\n";
	std::cout << "a3 ia valoarea lui a:";
	std::cout << "\n";
	std::cout << a3;		//merge
	std::cout << "\n";
	std::cout << "Afisarea obiectului a4:";
	std::cout << "\n";
	std::cout << a4;		//merge
	std::cout << "\n";

	std::cout << "\n";
	std::cout << "---------------------------------------------------------------------------";
	std::cout << "\n";
	std::cout << "\n";
	*/

	Abonat_Skype s("123", "4124123", 12, "Mircea"), s2, s3("987", a4), s4("456", "23313312", test_2), s5=s;
	/*
	std::cout << "Afisare obiect de tip Abonat_Skype:";
	std::cout << "\n";
	std::cout << s;
	std::cout << "\n";
	std::cin >> s2;
	std::cout << "Citire de la tastatura:";
	std::cout << "\n";
	std::cout << s2;
	std::cout << "\n";
	std::cout << "Afisarea obiectului s3(in care se afla un obiect de tip <Abonat> (a4) ):";
	std::cout << "\n";
	std::cout << s3;
	std::cout << "\n";
	std::cout << "Afisarea obiectului s4(in care se afla un obiect de tip <Persoana> (test_2) ):";
	std::cout << "\n";
	std::cout << s4;
	std::cout << "\n";
	std::cout << "s5 ia valoarea lui s";
	std::cout << "\n";
	std::cout << s5;
	std::cout << "\n";

	std::cout << "\n";
	std::cout << "---------------------------------------------------------------------------";
	std::cout << "\n";
	std::cout << "\n";
	*/

	Abonat_Skype_Romania r("blabla@ceva.ro", "223", "424232342", 3, "Tudor"), r1("dasd@gmail.com", s3), r2("ytytrry@yahoo.ro", "434", a4), r3("nvbnv@sdad.com", "757", "5435364", test), r4, r5=r1;
	/*
	std::cout << "Afisare obiect de tip Abonat_Skype_Romania:";
	std::cout << "\n";
	std::cout << r;
	std::cout << "\n";
	std::cout << "Afisarea obiectului r1(in care se afla un obiect de tip <Abonat_Skype> (s3) ):";
	std::cout << "\n";
	std::cout << r1;
	std::cout << "\n";
	std::cout << "Afisarea obiectului r2(in care se afla un obiect de tip <Abonat> (a4) ):";
	std::cout << "\n";
	std::cout << r2;
	std::cout << "\n";
	std::cout << "Afisarea obiectului r3(in care se afla un obiect de tip <Persoana> (test) ):";
	std::cout << "\n";
	std::cout << r3;
	std::cout << "\n";
	std::cout << "r5 ia valoarea lui r1";
	std::cout << "\n";
	std::cout << r5;
	std::cout << "\n";
	std::cin >> r4;
	std::cout << "Citire de la tastatura:";
	std::cout << "\n";
	std::cout << r4;
	std::cout << "\n";

	std::cout << "\n";
	std::cout << "---------------------------------------------------------------------------";
	std::cout << "\n";
	std::cout << "\n";
	*/

	Abonat_Skype_Extern e("Romania", "345", "34534543", 5, "Costel");
	/*
	std::cout << "Afisare obiect de tip Abonat_Skype_Extern:";
	std::cout << "\n";
	std::cout << e;
	std::cout << "\n";

	std::cout << "\n";
	std::cout << "---------------------------------------------------------------------------";
	std::cout << "\n";
	std::cout << "\n";
	*/

	
	Agenda agenda1;
	agenda1 += e;
	agenda1 += r;
	agenda1 += s;
	agenda1 += a;
	std::cout << "Afisare obiect de tip Agenda:";
	std::cout << "\n";
	std::cout << agenda1;
	std::cout << "\n";
	std::cout << "\n";
	/*
	//agenda1["Costel"];			//merge
	std::cout << "\n";
	//agenda1["Tudor"];
	std::cout << "\n";
	//agenda1["Marcel"];
	std::cout << "\n";
	//agenda1["Mircea"];
	std::cout << "\n";
	std::cout << "\n";
	*/
	std::cout << "Numarul de abonati: " << agenda1.get_nr_abonati();			//merge
	
}