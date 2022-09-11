# ObjectOrientedProgramming

## Class (Sınıf)

## Class Definition

~~~C++

    #include <iostream>
    #include <string>

    using namespace std;

    class Circle
    {
        private:
            // Data member (variable)
            double radius;
            string color;

        protected:
            int x, y;

        public:
            // Constructor function
            Circle(){}

            // Destructor function
            ~Circle(){}

            // Member functions
            double getRadius();
            double getArea();
    };

~~~

## Access Control Modifiers

### private

### protected

### public

## Constructors (Yapıcı Fonksiyonlar)

### Overloading Constructors (Yapıcı Fonksiyonların Aşırı Yüklenmesi)

## Destructor (Yıkıcı Fonksiyonlar)

---

## Encapsulation (Kapsülleme)

Kapsülleme bir şeyi içine almak demektir.

## Abstraction (Soyutlama)

## Inheritance (Kalıtım - Miras)

Sınıflar oluşturulurken bir veya birden fazla üst veya alt sınıflara sahip olabilir.

Temel sınıftan türetilen sınıflara türetilmiş sınıflar denir. Türetilmiş sınıflar üst sınıfın özelliklerini miras alır. Bu nedenle bu işleme Inheritance denilmektedir.

~~~C++

    // Base Class
    class Animal
    {
        public:
            Animal(){
                cout << "This is an animal." << endl;
            }
    };

    class Dog : public Animal
    {

    };
~~~

### Multiple inheritance (Çoklu Kalıtım, Miras)

## Polymorphism (Polimorfizm - Çok Biçimlilik)
