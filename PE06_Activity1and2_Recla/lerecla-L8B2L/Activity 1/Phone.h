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

        string getBrand() { return Brand; }
        string getModel() { return Model; }
        int getYear_Released() { return Year_Released; }

        void setBrand(string bkbrand) { Brand = bkbrand; }
        void setModel(string bkmodel) { Model = bkmodel; }
        void setYear_Released(int bkyear_released) { Year_Released = bkyear_released; }

    void displayAttributes(){
        std::cout << "Phones:" << std::endl;
        std::cout << "Brand: " << Brand << std::endl;
        std::cout << "Model: " << Model << std::endl;
        std::cout << "Year Released: " << Year_Released << std::endl;
    }
};