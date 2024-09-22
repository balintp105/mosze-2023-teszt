  #include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //int *b = new int[NELEMENTS]; // hiba1
    int* b = new int[N_ELEMENTS];

    //std::cout << '1-100 ertekek duplazasa' // hiba2
    std::cout << "1-100 ertekek duplazasa";

    // for (int i = 0;) // hiba3
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i+1) * 2;
    }

    // for (int i = 0; i; i++) // hiba4
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //std::cout << "Ertek:" // hiba5
        std::cout << "Ertek:" << b[i]<<"\n";
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    //int atlag; // hiba6
    int atlag=0;

    //for (int i = 0; i < N_ELEMENTS, i++) // hiba7
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //atlag += b[i] // hiba8
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}