/**
 * @file Encapsulation.cpp
 * @author Hakan CERAN
 * @date 07.12.2022
 * @brief Encapsulation Example Code
 * @note Good
 */

#include <iostream>
#include <string>
#include <clocale>
#include <utility>

using namespace std;

// Person sýnýfý tanýmý.
class Person {
    private:
        // Ýsim deðiþkeni.
        string m_name{};

        // Yaþ deðiþkeni.
        int m_age{};

    public:
        // Ýsim deðiþkeninin deðerini ayarlayan fonksiyon.
        void setName(string t_name) {
            m_name = std::move(t_name);
        }

        // Yaþ deðiþkeninin deðerini ayarlayan fonksiyon.
        void setAge(int t_age) {
            // Yaþ deðiþkeninin deðeri 0'dan büyük ve 120'den küçük olmalýdýr.
            if (t_age > 0 && t_age < 120) {
                // Eðer koþul saðlanýyorsa yaþ deðiþkenine deðer atanýr.
                m_age = t_age;
            } else {
                // Koþul saðlanmýyorsa bir hata mesajý yazdýrýlýr.
                cout << "Hata: Geçersiz yaþ deðeri!" << endl;
            }
        }

        // Ýsim deðiþkeninin deðerini döndüren fonksiyon.
        string getName() const {
            return m_name;
        }

        // Yaþ deðiþkeninin deðerini döndüren fonksiyon.
        int getAge() const {
            return m_age;
        }
};

int main() {
    // Türkçe karakterlerin kullanýlabilmesi için dil ayarlarý yapýldý.
    setlocale(LC_ALL, "turkish");

    // Arkaplan ve yazý rengi ayarlarý yapýldý.
    system("color f9");

    // Person nesnesi oluþturulur.
    Person person;

    // Ýsim deðiþkenine deðer atanýr.
    person.setName("Hakan CERAN");

    // Yaþ deðiþkenine deðer atanýr.
    person.setAge(30);

    // Ýsim deðiþkeninin deðeri ekrana yazdýrýlýr.
    cout << "Ýsim: " << person.getName() << endl;

    // Yaþ deðiþkeninin deðeri ekrana yazdýrýlýr.
    cout << "Yaþ: " << person.getAge() << endl;

    // system("PAUSE");

    return 0;
}

