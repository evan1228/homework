#include <iostream>

int main() {
    double TotalMileage;
    double Gasoline;
    double MileagePerLiter;
    double ParkingFee;
    double TollsPerDay;

    std::cout << "輸入一整天的總里程數： ";
    std::cin >> TotalMileage;

    std::cout << "輸入汽油一公升/加侖多少錢： ";
    std::cin >> Gasoline;

    std::cout << "輸入平均一公升/加侖能行駛多少公里： ";
    std::cin >> MileagePerLiter;

    std::cout << "輸入一天的停車費： ";
    std::cin >> ParkingFee;

    std::cout << "輸入一天的通行費(過路費)： ";
    std::cin >> TollsPerDay;

    double FuelCost = (TotalMileage / MileagePerLiter) * Gasoline;
    double TotalCost = FuelCost + ParkingFee + TollsPerDay;

    std::cout << "\n一天開車去工作的花費估計如下：" << std::endl;
    std::cout << "汽油花費：" << FuelCost <<"$"<<std::endl;
    std::cout << "停車費  ：" << ParkingFee <<"$"<< std::endl;
    std::cout << "通行費  ：" << TollsPerDay <<"$"<< std::endl;
    std::cout << "總花費  ：" << TotalCost <<"$"<< std::endl;

    return 0;
}

