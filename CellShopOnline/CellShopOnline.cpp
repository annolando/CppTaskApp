// CellShopOnline.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include<iostream> 
#include<conio.h> 
#include<istream> 

using namespace std;
int main()
{
    string phonecode, username, usersurname, email, anw, samebrand,top3screens;
    string a[1] = { "CellPhone" };
    string b[3] = { "Apple","Samsung", "Nokia" };
    int price[8] = { 7000, 6500, 2600, 4500,5000, 6000, 3800, 2000};
    double year[8] = { 2020,2021,2220,2021,2020,2019,2022,2000};
    double ssize[8] = {6.6,7.7,4.4,3.3,6.6,7.7,4.4,0.2};
    string form[8] = { "rectangle","rectangle","rectangle", "oval","rectangle", "ogit val","oval", "with buttons" };
    cout << "-------------Welcome to CellPhoneStore-------------" << endl;
    cout << endl;
    cout << "Please, fill the register form" << endl;
    cout << endl;
    cout << "Name: "; cin >> username;
    cout << "Surname: "; cin >> usersurname;
    cout << "Email: "; cin >> email;
    cout << endl;
    cout << "------------CellPhoneStore products-------------" << endl << endl;
    cout << "Hallo " << username << " " << usersurname << " ! Please see our store:" << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Code : PApple     => " << a[0] << "-" << b[0] << "  \t PLN." << price[0] << "  \t inches: " << ssize[0] << "  \t year: " << year[0] << "  \t form: " << form[0] << endl;
    cout << "Code : PApple1     => " << a[0] << "-" << b[0] << "  \t PLN." << price[1] << "  \t inches: " << ssize[1] << "  \t year: " << year[1] << "  \t form: " << form[1] << endl;
    cout << "Code : PApple2     => " << a[0] << "-" << b[0] << "  \t PLN." << price[2] << "  \t inches: " << ssize[2] << "  \t year: " << year[2] << "  \t form: " << form[2] << endl;
    cout << "Code : PSamsung   => " << a[0] << "-" << b[1] << "\t PLN." << price[3] << "  \t inches: " << ssize[3] << "  \t year: " << year[3] << "  \t form: " << form[3] << endl;
    cout << "Code : PSamsung1   => " << a[0] << "-" << b[1] << "\t PLN." << price[4] << "  \t inches: " << ssize[4] << "  \t year: " << year[4] << "  \t form: " << form[4] << endl;
    cout << "Code : PSamsung2   => " << a[0] << "-" << b[1] << "\t PLN." << price[5] << "  \t inches: " << ssize[5] << "  \t year: " << year[5] << "  \t form: " << form[5] << endl;
    cout << "Code : PSamsung3   => " << a[0] << "-" << b[1] << "\t PLN." << price[6] << "  \t inches: " << ssize[6] << "  \t year: " << year[6] << "  \t form: " << form[6] << endl;
    cout << "Code : PNokia     => " << a[0] << "-" << b[2] << "  \t PLN." << price[7] << "  \t inches: " << ssize[7] << "  \t year: " << year[7] << "  \t form: " << form[7] << endl;
    cout << "------------------------------------------" << endl;
    //cout << "Enter the cellphone Code: "; cin >> phonecode;
    //cout << "Enter the cellphone Code: "; cin >> phonecode;
    if (phonecode == "PApple")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[0] << endl;
        cout << "Price : " << "PLN." << price[0] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Email : " << email << endl;
            cout << "Succesfully purchased  !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------\n Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PApple1")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[0] << endl;
        cout << "Price : " << "PLN." << price[1] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PApple2")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[0] << endl;
        cout << "Price : " << "PLN." << price[2] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PSamsung")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[1] << endl;
        cout << "Price : " << "PLN." << price[3] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PSamsung1")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[1] << endl;
        cout << "Price : " << "PLN." << price[4] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PSamsung2")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[1] << endl;
        cout << "Price : " << "PLN." << price[5] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PSamsung3")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[1] << endl;
        cout << "Price : " << "PLN." << price[6] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Address : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else if (phonecode == "PNokia")
    {
        cout << "CellPhone : " << a[0] << endl;
        cout << "Brand : " << b[2] << endl;
        cout << "Price : " << "PLN." << price[7] << endl;
        cout << "Add to your shopping cart? y/n ?";
        cin >> anw;
        cout << endl;
        if (anw == "y") {
            cout << "---------Congratulations-----------" << endl << endl;
            cout << "Name    : " << username << " " << usersurname << endl;
            cout << "Email : " << email << endl;
            cout << "Succesfully purchased !" << endl;
            cout << endl;
        }
        else if (anw == "n")
            cout << "----------No problem------- \n ---------Think and visit us again------" << endl << endl;
    }
    else
        cout << "Wrong cell phone code !" << endl << endl;
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
