Single inheritance : A digital library platform requires a module to process catalog listings for physical books and digital e-books while reusing core formatting routines.

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Catalog {
protected:
    string title;
    string author;
public:
    Catalog(string t, string a) : title(t), author(a) {}
    
    // Core formatting routine to be reused
    void displayCoreInfo() {
        cout << "Title: " << title << "\nAuthor: " << author << endl;
    }
};

// Derived Class (Single Inheritance)
class EBook : public Catalog {
private:
    double fileSizeMB;
public:
    EBook(string t, string a, double size) : Catalog(t, a), fileSizeMB(size) {}
    
    void processEBook() {
        cout << "--- E-Book Listing ---" << endl;
        displayCoreInfo(); // Reusing base class method
        cout << "File Size: " << fileSizeMB << " MB\n" << endl;
    }
};

int main() {
    EBook myDigitalBook("The Art of Computer Programming", "Donald Knuth", 15.5);
    myDigitalBook.processEBook();
    return 0;
}