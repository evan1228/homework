#include <iostream>

int main() {
    double TotalMileage;
    double Gasoline;
    double MileagePerLiter;
    double ParkingFee;
    double TollsPerDay;

    std::cout << "��J�@��Ѫ��`���{�ơG ";
    std::cin >> TotalMileage;

    std::cout << "��J�T�o�@����/�[�ڦh�ֿ��G ";
    std::cin >> Gasoline;

    std::cout << "��J�����@����/�[�گ��p�h�֤����G ";
    std::cin >> MileagePerLiter;

    std::cout << "��J�@�Ѫ������O�G ";
    std::cin >> ParkingFee;

    std::cout << "��J�@�Ѫ��q��O(�L���O)�G ";
    std::cin >> TollsPerDay;

    double FuelCost = (TotalMileage / MileagePerLiter) * Gasoline;
    double TotalCost = FuelCost + ParkingFee + TollsPerDay;

    std::cout << "\n�@�Ѷ}���h�u�@����O���p�p�U�G" << std::endl;
    std::cout << "�T�o��O�G" << FuelCost <<"$"<<std::endl;
    std::cout << "�����O  �G" << ParkingFee <<"$"<< std::endl;
    std::cout << "�q��O  �G" << TollsPerDay <<"$"<< std::endl;
    std::cout << "�`��O  �G" << TotalCost <<"$"<< std::endl;

    return 0;
}

