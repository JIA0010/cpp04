#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void testDeepCopy() {
    std::cout << "Testing deep copy:" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;

    // Verify the Brain pointers are different
    if (originalDog.getBrain() != copiedDog.getBrain()) {
        std::cout << "Deep copy successful: Dog brains are different instances." << std::endl;
    } else {
        std::cout << "Deep copy failed: Dog brains are the same instance." << std::endl;
    }

    Cat originalCat;
    Cat copiedCat = originalCat;

    // Verify the Brain pointers are different
    if (originalCat.getBrain() != copiedCat.getBrain()) {
        std::cout << "Deep copy successful: Cat brains are different instances." << std::endl;
    } else {
        std::cout << "Deep copy failed: Cat brains are the same instance." << std::endl;
    }
}

int main() {
    int i = 0;

    std::cout << "Enter the number of animals: ";
    std::cin >> i;
    if(std::cin.fail() || i < 0 || i > 100)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    // 配列サイズを設定
    const int arraySize = i;
    Animal* animals[arraySize];

    // 配列の前半に Dog オブジェクトを作成
    for (int i = 0; i < arraySize / 2; ++i) {
        animals[i] = new Dog();
    }

    // 配列の後半に Cat オブジェクトを作成
    for (int i = arraySize / 2; i < arraySize; ++i) {
        animals[i] = new Cat();
    }

    // 配列のすべてのオブジェクトを削除
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }

    testDeepCopy();

    return 0;
}