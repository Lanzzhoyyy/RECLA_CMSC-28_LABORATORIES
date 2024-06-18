#include "ProductInventory.h" // Include the header file for class declarations
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// Forward declarations of functions  
void getProductDetails(Product& product);
void getClothingDetails(Clothing& clothing);
void getElectronicsDetails(Electronics& electronics);
void progDescription();

int main() {
    // Program Description
    system("cls"); 
    cout << "------------------------------------------------------------------------" << endl
         << "\t\t     Programming Exercise 7 - OOP 3" << endl
         << "\t\t  Submitted by : Lance Andrei E. Recla" << endl
         << "\t\t\t  Date done: 05/22/2024" << endl
         << "\t\t\t    Subject: CMSC 28" << endl
         << "------------------------------------------------------------------------" << endl;

    // Creating an instance of Clothing and taking user input 
    Clothing clothing;
    cout << "\nEnter details for Clothing item:\n";
    getClothingDetails(clothing);

    // Creating an instance of Electronics and taking user input
    Electronics electronic;
    cout << "\nEnter details for Electronics item:\n";
    getElectronicsDetails(electronic);

    // Display details
    system("cls");
    cout << "\n------------------------------------------------------------------------" << endl
         << "                          Clothing Description:" << endl
         << "------------------------------------------------------------------------" << endl;
    cout << "\nClothing Details:\n";
    clothing.display();
    cout << "\n------------------------------------------------------------------------" << endl
         << "                          Electronics Description:" << endl
         << "------------------------------------------------------------------------" << endl;
    cout << "\nElectronics Details:\n";
    electronic.display();

    return 0;
}

// Function to get general product details from user input
void getProductDetails(Product& product) {
    string productname, brand, description, category;
    double price;
    int quantity;

    // Prompt user for general product details
    cout << "Enter product name: ";
    getline(cin, productname);
    product.setproductName(productname);

    cout << "Enter brand: ";
    getline(cin, brand);
    product.setBrand(brand);

    cout << "Enter price: ";
    cin >> price;
    product.setPrice(price);

    cout << "Enter quantity: ";
    cin >> quantity;
    product.setQuantity(quantity);

    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter description: ";
    getline(cin, description);
    product.setDescription(description);

    cout << "Enter category: ";
    getline(cin, category);
    product.setCategory(category);
}

// Function to get clothing-specific details from user input
void getClothingDetails(Clothing& clothing) {
    getProductDetails(clothing);

    string size, color, material;

    // Prompt user for clothing-specific details
    cout << "Enter size: ";
    getline(cin, size);
    clothing.setSize(size);

    cout << "Enter color: ";
    getline(cin, color);
    clothing.setColor(color);

    cout << "Enter material: ";
    getline(cin, material);
    clothing.setMaterial(material);
}

// Function to get electronics-specific details from user input
void getElectronicsDetails(Electronics& electronics) {
    getProductDetails(electronics);

    string model, technicalSpecifications;
    int warranty;

    // Prompt user for electronics-specific details
    cout << "Enter model: ";
    getline(cin, model);
    electronics.setModel(model);

    cout << "Enter warranty (in months): ";
    cin >> warranty;
    electronics.setWarranty(warranty);

    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter technical specifications: ";
    getline(cin, technicalSpecifications);
    electronics.settechSpec(technicalSpecifications);
}

