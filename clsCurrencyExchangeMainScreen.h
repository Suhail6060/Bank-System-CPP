#pragma once

#include "clsCurrenciesListScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsUpdateCurrencyRateScreen.h"
#include "clsCurrencyCalculatorScreen.h"

#include <iomanip>
#include <iostream>

using namespace std;

class clsCurrencyScreen : protected clsScreen
{
private:
    enum enCurrencyScreenOptions
    {
        eListCurrency       = 1,
        eFindCurrency       = 2,
        eUpdateRate         = 3,
        eCurrencyCalculator = 4,
        eMainMenue          = 5
    };

    static short _ReadMainMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice =
            clsInputValidate::ReadShortNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _ShowListCurrenciesScreen()
    {
        clsCurrenciesListScreen::ShowCurrenciesListScreen();
    }
    static void _ShowFindCurrencyScreen()
    {
        clsFindCurrencyScreen::ShowFindCurrencyScreen();
    }
    static void _ShowUpdateRateScreen()
    {
        clsUpdateCurrencyRateScreen::ShowUpdateCurrencyRateScreen();
    }
    static void _ShowCurrencyCalculatorScreen() 
    {
        clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();
    }

    static void _GoBackToCurrencyExchangeMenue()
    {
        cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";
        system("pause>0");
        ShowCurrencyExchangeMenue();
    }


    static void _PerfromMainMenueOption(enCurrencyScreenOptions MainMenueOption)
    {
        switch (MainMenueOption)
        {
            case enCurrencyScreenOptions::eListCurrency:
                {
                    system("cls");
                    _ShowListCurrenciesScreen();
                    _GoBackToCurrencyExchangeMenue();
                    break;
                }
            case enCurrencyScreenOptions::eFindCurrency:
                {
                    system("cls");
                    _ShowFindCurrencyScreen();
                    _GoBackToCurrencyExchangeMenue();
                    break;
                }
            case enCurrencyScreenOptions::eUpdateRate:
                {
                    system("cls");
                    _ShowUpdateRateScreen();
                    _GoBackToCurrencyExchangeMenue();
                    break;
                }
            case enCurrencyScreenOptions::eCurrencyCalculator:
                {
                    system("cls");
                    _ShowCurrencyCalculatorScreen();
                    _GoBackToCurrencyExchangeMenue();
                    break;
                }
            case enCurrencyScreenOptions::eMainMenue:
                {
                    break;
                }
        }
    }


public:
    static void ShowCurrencyExchangeMenue()
    {
        system("cls");
        _DrawScreenHeader("\t\tCurrency Exchange Main Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t  Currency Exchange Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1]  List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2]  Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3]  Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4]  Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5]  Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerfromMainMenueOption((enCurrencyScreenOptions)_ReadMainMenueOption());
    }
};
