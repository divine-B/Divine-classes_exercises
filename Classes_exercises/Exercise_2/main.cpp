#include <iostream>

using namespace std;
enum scale {ounces, kilograms};



class ZooAnimal


{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void changeWeight (int pounds);
    inline void changeWeightDate (int today){ this->weightDate = today; }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
    void isMotherOf (ZooAnimal& mother) {this->mother=&mother;}
};


void ZooAnimal::Create(char * n, int cageno, int wD, int w)
{
    this->name = n;
    this->cageNumber = cageno;
    this->weightDate = wD;
    this->weight = w;
}

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    ZooAnimal child_pig, mother_pig;
    child_pig.Create("rys", 1000, 120, 50);
    mother_pig.Create("yvass", 1400, 100, 150);
    child_pig.isMotherOf(mother_pig);
    cout << "rys's weightDate : " << child_pig.reptWeightDate() << endl;
    cout << "the mother of rys's name is:" << mother_pig.reptName() << endl;

}




