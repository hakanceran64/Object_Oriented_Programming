
# Inheritance (Kalıtım - Miras)

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

## Single

## Multilevel

## Multiple inheritance (Çoklu Kalıtım, Miras)

## Hierarchical
