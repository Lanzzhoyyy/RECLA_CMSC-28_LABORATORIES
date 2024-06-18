#include<iostream>

using std::string;

class Phone {
    private:
        string Brand;
        string Model;
        int Year_Released;

    public:
        Phone(string brand, string model, int year_released)
        :Brand(brand), Model(model), Year_Released(year_released){}

    void displayAttributes(){
        std::cout << "Phones:" << std::endl;
        std::cout << "Brand: " << Brand << std::endl;
        std::cout << "Model: " << Model << std::endl;
        std::cout << "Year Released: " << Year_Released << std::endl;
    }
};

int main() {
    Phone phone1 ("Xiaomi", "Mi 11T", 2023);
    phone1.displayAttributes();  
    return 0;
}