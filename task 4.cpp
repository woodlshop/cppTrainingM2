#include <iostream> 
int main() 
{
    int totalСost              = 4000000;
    int entrances              = 10;
    int apartmentsPerEntrances = 40;
    int costPerApartment       = totalСost / (entrances * apartmentsPerEntrances);
    std::cout <<"Расчет квартплаты .\n";
    std::cout <<"=============================================\n";
    std::cout <<"Введите сумму, указанную в квитанции: " << totalСost << " руб.\n";
    std::cout <<"Сколько подъездов в вашем доме? "       << entrances << "\n";
    std::cout <<"Сколько квартир в каждом подъезде? "    << apartmentsPerEntrances << "\n";
    std::cout <<"=============================================\n";
    std::cout <<"Сумма к оплате с одной квартиры: "      << costPerApartment << " руб.\n";
}
