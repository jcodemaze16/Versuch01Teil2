/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXIX
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{

	struct Person{

		string sNachname;
		string sVorname;

		int iGeburtsjahr;
		int iAlter;

	};

	Person nBenutzer;

	std::cout << "Bitte Nachname eingeben:";
	std::cin >> nBenutzer.sNachname;
	std::cout << "Bitte Vorname eingeben:";
	std::cin >> nBenutzer.sVorname;
	std::cout << "Bitte Geburtsjahr eingeben:";
	std::cin >> nBenutzer.iGeburtsjahr;
	std::cout << "Bitte Alter eingeben:";
	std::cin >> nBenutzer.iAlter;
	std::cout << "Ausgabe: " << std::endl;
	std::cout << "Nachname: ";
	std::cout << nBenutzer.sNachname <<  std::endl;
	std::cout << "Vorname: ";
	std::cout << nBenutzer.sVorname <<  std::endl;
	std::cout << "Geburtsjahr: ";
	std::cout << nBenutzer.iGeburtsjahr <<  std::endl;
	std::cout << "Alter: ";
	std::cout << nBenutzer.iAlter <<  std::endl;

	/*
	 * Teil 1:  Jedes Element einzeln in nKopieEinzeln kopieren
	 */

	Person nKopieEinzeln;

	nKopieEinzeln.sNachname 	= nBenutzer.sNachname;
	nKopieEinzeln.sVorname	    = nBenutzer.sVorname;
	nKopieEinzeln.iAlter 		= nBenutzer.iAlter;
	nKopieEinzeln.iGeburtsjahr  = nBenutzer.iGeburtsjahr;

	std::cout << "Ausgabe Einzeln: " << std::endl;
	std::cout << "Nachname: ";
	std::cout << nKopieEinzeln.sNachname <<  std::endl;
	std::cout << "Vorname: ";
	std::cout << nKopieEinzeln.sVorname <<  std::endl;
	std::cout << "Geburtsjahr: ";
	std::cout << nKopieEinzeln.iGeburtsjahr <<  std::endl;
	std::cout << "Alter: ";
	std::cout << nKopieEinzeln.iAlter <<  std::endl;

	/*
	 * Teil 2:  Die gesamte Struktur in nKopieGesamt kopieren
	 */

	Person nKopieGesamt;

	nKopieGesamt = nBenutzer;

	std::cout << "Ausgabe Gesamt: " << std::endl;
	std::cout << "Nachname: ";
	std::cout << nKopieGesamt.sNachname <<  std::endl;
	std::cout << "Vorname: ";
	std::cout << nKopieGesamt.sVorname <<  std::endl;
	std::cout << "Geburtsjahr: ";
	std::cout << nKopieGesamt.iGeburtsjahr <<  std::endl;
	std::cout << "Alter: ";
	std::cout << nKopieGesamt.iAlter <<  std::endl;

    return 0;
    
}
