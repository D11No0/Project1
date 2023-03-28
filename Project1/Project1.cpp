#include <iostream>
#include <string>

using namespace std;

int main()
{
    int odabir;
    string ime, prezime, naziv_dogadjaja;
    int broj_gostiju, broj_konobara;
    double trajanje_dogadjaja;
    double ukupna_cijena = 0.0;

rep:cout << "1-Informacije o cijenama hrane i konobara" << endl;
    cout << "2-Zakazi proslavu dogadjaja" << endl;
    cout << "3-Zatvori" << endl;
    cin >> odabir;
    if (odabir == 1)
    {
        system("CLS");
        cout << "Cijena konobara 15KM po satu" << endl;
        cout << "Cijena hrane 100KM" << endl;
    }
    else if (odabir == 2)
    {
        system("CLS");
        cout << "Ime i prezime:";
        cin >> ime >> prezime;
        cout << "Naziv dogadjaja:";
        cin >> naziv_dogadjaja;
        cout << "Broj gostiju:";
        cin >> broj_gostiju;
        cout << "Broj konobara:";
        cin >> broj_konobara;
        cout << "Trajanje dogadjaja:";
        cin >> trajanje_dogadjaja;

        system("CLS");

        cout << "Ime i prezime organizatora dogadjaja:" << ime << " " << prezime << endl;
        cout << "Naziv dogadjaja:" << naziv_dogadjaja << endl;
        cout << "Broj konobara na dogadjaju:" << broj_konobara << endl;
        cout << "Broj gostiju na dogadjaju:" << broj_gostiju << endl;
        cout << "Trajanje dogadjaja:" << trajanje_dogadjaja<< endl;

        cout << "\n";

        cout << "Vasi troskovi:\n";
        cout << "Cijena konobara:\n";
        if (broj_konobara > 1)
        {
            cout << "Cijena jednog konobara za vas dogadjaj:" << 15 * trajanje_dogadjaja << endl;
            cout << "Ukupna cijena konobara za vas dogadjaj:" << (broj_konobara * 15) * trajanje_dogadjaja << endl;
            cout << "\n";
            ukupna_cijena = ukupna_cijena + ((broj_konobara * 15) * trajanje_dogadjaja);
        }
        else
        {
            cout << "Ukupna cijena konobara za vas dogadjaj:" << 15 * trajanje_dogadjaja << endl; 
            cout << "\n";
            ukupna_cijena = ukupna_cijena + (15 * trajanje_dogadjaja);
        }

        cout << "Cijena hrane:\n";
        cout << "Cijena hrane za jednu osobu je 100KM:\n";
        cout << "Ukupna cijena hrane za vas dogadjaj:" << 100 * broj_gostiju << endl;
        ukupna_cijena = ukupna_cijena + (100 * broj_gostiju);
        cout << "\n";

        cout << "Ukupna cijena:\n";
        cout << ukupna_cijena << endl;
    }
    else if (odabir == 3)
    {
        return 0;
    }
    else
    {
        system("CLS");
        cout << "Netacan unos molim vas da odaberete jednu od 3 opcije" << endl;
        goto rep;
    }


    return 0;
}

