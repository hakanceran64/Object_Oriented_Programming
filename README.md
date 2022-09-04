# ObjectOrientedProgramming

## Class (Sınıf)

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

