#include <iostream> 
int main() 
{
    int discountRate = 2;
    int valueOfGoods = 100;
    int shippingCost = 50;
    int discount     = (valueOfGoods / 100) * discountRate;
    int totalPrise   = valueOfGoods + shippingCost - discount;
    std::cout <<"Расчет полной стоимость товара.\n";
    std::cout <<"=============================================\n";
    std::cout <<"Введите стоимость товара: "   << valueOfGoods << " $\n";
    std::cout <<"Введите стоимость доставки: " << shippingCost << " $\n";
    std::cout <<"Введите размер скидки: "      << discountRate << " %\n";
    std::cout <<"=============================================\n";
    std::cout <<"Полная стоимость товара будет составлять: " << totalPrise << " $\n";
    std::cout <<"Если стоимость товара: "                    << valueOfGoods << " $\n";
    std::cout <<"Стоимость доставки: "                       << shippingCost << " $\n";
    std::cout <<"Размер скидки: "                            << discountRate << " %\n";
}
