#include <iostream>
#include <string>
 using namespace std;
//1 задание

class Iphone

{
public:

    Iphone(const double freq, const int cores, const int RAM, const int ROM) :
        m_frequency(freq),
        m_cores(cores),
        m_RAM(RAM),
        m_ROM(ROM)
{}
    

    virtual ~Iphone() = default;
    
    virtual int Price() const
{
        return m_frequency * m_cores / 1 + m_RAM / 1 + m_ROM / 1;
}
    virtual bool Usefulness() const
{
        return m_frequency >= 3100 && m_cores >= 6 && m_RAM >= 4 && m_ROM >= 256;
}
    void Info() const
{
        // вызываем метод класса для частичного вывода информации
        WriteProperties();
{ 
       cout << " Iphone 12 mini: " ; 
}
      cout << "Price в грн: " << Price(); // в грн
        
           
     
}
 
protected: 
    virtual void WriteProperties() const
{
        cout << "Frequency: " << m_frequency
            << "\nCores: " << m_cores
            << "\nRAM: " << m_RAM
            << "\nROM: " << m_ROM
            << endl;
}
 
    const double m_frequency;   // частота процессора (в МГц)
    const int m_cores;          // количество ядер процессора
    const int m_RAM;            // объем памяти (в GB)
    const int m_ROM;            // объем жесткого диска (в ГБ)
};
 
 
int main()
{
   
  
  Iphone cmp(3100, 6, 4, 256);
    cmp.Info();
 
}







//2е










class Computer
{
public:
  
    Computer(const double freq, const int cores, const int RAM, const int HDD) :
        m_frequency(freq),
        m_cores(cores),
        m_RAM(RAM),
        m_HDD(HDD)
    {}
    
   
    virtual ~Computer() = default;
    
    virtual int Price() const
    {
        return m_frequency * m_cores / 100 + m_RAM / 80 + m_HDD / 20;
    }
    virtual bool Usefulness() const
    {
        return m_frequency >= 4000 && m_cores >= 8 && m_RAM >= 32768 && m_HDD >= 1024;
    }
    void Info() const
    {
        // вызываем метод класса для частичного вывода информации
        WriteProperties();
       cout << "Price in $: " << Price()
            
            << "\nUsefulness: " << boolalpha << Usefulness()
            << endl << endl; 
    }
 
protected: 
    virtual void WriteProperties() const
    {
        std::cout << "Frequency: " << m_frequency
            << "\nCores: " << m_cores
            << "\nRAM: " << m_RAM
            << "\nHDD: " << m_HDD
            << endl;
    }
 
    const double m_frequency;   // частота процессора (в МГц)
    const int m_cores;          // количество ядер процессора
    const int m_RAM;            // объем памяти (в МБ)
    const int m_HDD;            // объем жесткого диска (в ГБ)
};
 

 
int main()
{
    Computer cmp(4000, 8, 32768, 1024);
    cmp.Info();
 
   
}