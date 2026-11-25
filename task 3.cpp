#include <iostream> 
int main() 
{
    int durationShift = 480;
    int clientTime    = 2;
    int cashierIsTime = 4;
    int quantityOfClients = durationShift / (clientTime + cashierIsTime);
    std::cout <<"Расчет количества обслуженных клиентов за рабочую смену.\n";
    std::cout <<"=============================================\n";
    std::cout <<"Введите длительность смены в минутах: "             << durationShift << " мин.\n";
    std::cout <<"Сколько минут клиент делает заказ? "                << clientTime <<    " мин.\n";
    std::cout <<"Сколько минут кассир собирает заказ? "              << cashierIsTime << " мин.\n";
    std::cout <<"=============================================\n";
    std::cout <<"Количество обслуженных клиентов за рабочую смену: " << quantityOfClients << " человек\n";
    std::cout <<"---------------------------------------------\n";
    std::cout <<"Если длительность рабочей смены: "                  << durationShift << " мин.\n";
    std::cout <<"Клиент заказывает: "                                << clientTime << " мин.\n";
    std::cout <<"Кассир выпоняет заказ: "                            << cashierIsTime << " мин.\n";
}
