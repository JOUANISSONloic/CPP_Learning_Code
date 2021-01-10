#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    if(argc < 2){
        std::cerr << "Pas d'argument." <<std::endl;
        return -1;
    }
    int taille = std::stoi(argv[1]);
    if (taille <= 0){
        std::cerr << "Taille tableau incorrect." << std::endl;
        return -1;
    }
    std::cout << taille << std::endl;
    
    std::vector<int> array;
    for (int i = 0; i < taille; ++i){
        array.emplace_back(i);
    }

    for (int value : array){
        std::cout << value << std::endl;
    }

    /*
    int* array = new int[taille] {};

    for (int i = 0; i < taille; ++i){
        array[i] = i;
    }

    for (int i = 0; i < taille; ++i){
    std::cout << array[i] << std::endl;
    }
    delete[] array;
    */
    return 0;
}
