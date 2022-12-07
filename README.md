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

    int main()
    {
        return 0;
    }

~~~

## Access Control Modifiers

### private

### protected

### public

## Constructors (Yapıcı Fonksiyonlar)

~~~C++
~~~

### Overloading Constructors (Yapıcı Fonksiyonların Aşırı Yüklenmesi)

## Destructor (Yıkıcı Fonksiyonlar)

---

## Abstraction (Soyutlama)

## Polymorphism (Polimorfizm - Çok Biçimlilik)
