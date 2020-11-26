// labb3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>

#include "q_queue.h"

struct Maklare {
    int price;
    std::string name;
};
struct less {
    bool operator()(const Maklare& a, Maklare& b) {
        return a.price < b.price;
    }
};
int main()
{
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> dist(15, 30);

    p_queue<Maklare, less> buyers, sellers;

    const int n = 7;
    for (int i = 0; i < n; i++) {
        //int random = rand() % 16 + 15;
        buyers.push({ dist(generator), "Erik Pendel" });
        buyers.push({ dist(generator),"Jarl Wallenburg" });
        buyers.push({ dist(generator),"Joakim von Anka" });
        sellers.push({ dist(generator),"Joakim von Anka" });
        sellers.push({ dist(generator),"Jarl Wallenburg" });
        sellers.push({ dist(generator),"Joakim von Anka" });
    }

    /*for (int i = 0; i < 10; i++) {
        std::cout << rand() % 15 + 15 << std::endl;
    }*/
    while (!buyers.empty() && !sellers.empty()) {
        auto buyer = buyers.pop();
        auto seller = sellers.pop();
        if (buyer.price >= seller.price) {
            std::cout << buyer.name << " bought with " << seller.price << " for the prise of " << buyer.price
                << " from " << seller.name << std::endl;
        }
        else {
            sellers.push(seller);
        }
    }
}
