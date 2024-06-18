#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// Base class Product
class Product {
private:
    string productName;
    string Brand;
    string Description;
    double Price;
    int Quantity;
    string Category;

public:
    // Default constructor
    Product() {}

    // Getters for each attribute
    const string& getproductName() { return productName; }
    const string& getDescription() { return Description; }
    const string& getBrand() { return Brand; }
    double getPrice() { return Price; }
    int getQuantity() { return Quantity; }
    const string& getCategory() { return Category; }

    // Setters for each attribute
    void setproductName(const string& pproductname) { productName = pproductname; }
    void setDescription(const string& pdescription) { Description = pdescription; }
    void setBrand(const string& pbrand) { Brand = pbrand; }
    void setPrice(double pprice) { Price = pprice; }
    void setQuantity(int pquantity) { Quantity = pquantity; }
    void setCategory(const string& pcategory) { Category = pcategory; }

    // Virtual method to display product details
    virtual void display() const {
        cout << "Name: " << productName << "\nBrand: " << Brand << "\nPrice: " << Price
             << "\nQuantity: " << Quantity << "\nDescription: " << Description
             << "\nCategory: " << Category << endl;
    }
};

// Derived class Electronics inheriting from Product
class Electronics : public Product {
private:
    string Model;
    int Warranty; // Warranty period in months
    string techSpec;

public:
    // Default constructor
    Electronics() {}

    // Getters for each attribute
    const string& getModel() { return Model; }
    int getWarranty() const { return Warranty; }
    const string& gettechSpec() { return techSpec; }

    // Setters for each attribute
    void setModel(const string& pmodel) { Model = pmodel; }
    void setWarranty(int pwarranty) { Warranty = pwarranty; }
    void settechSpec(const string& ptechSpec) { techSpec = ptechSpec; }

    // Override the display method to include electronics-specific attributes
    void display() const override {
        Product::display();
        cout << "Model: " << Model << "\nWarranty: " << Warranty << " months"
             << "\nTechnical Specifications: " << techSpec << endl;
    }
};

// Derived class Clothing inheriting from Product
class Clothing : public Product {
private:
    string Size;
    string Color;
    string Material;

public:
    // Default constructor
    Clothing() {}

    // Getters for each attribute
    const string& getSize() { return Size; }
    const string& getColor() { return Color; }
    const string& getMaterial() { return Material; }

    // Setters for each attribute
    void setSize(const string& psize) { Size = psize; }
    void setColor(const string& pcolor) { Color = pcolor; }
    void setMaterial(const string& pmaterial) { Material = pmaterial; }

    // Override the display method to include clothing-specific attributes
    void display() const override {
        Product::display();
        cout << "Size: " << Size << "\nColor: " << Color << "\nMaterial: " << Material << endl;
    }
};

