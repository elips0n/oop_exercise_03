#include <iostream>
#include "Rhombus.h"
#include "Pentagon.h"
#include "Hexagon.h"

void help1(){
    std::cout <<"What you want?"<<std::endl;
    std::cout <<"If you want to create Rhombus, press 1."<<std::endl;
    std::cout <<"If you want to create Pentagon, press 2."<<std::endl;
    std::cout <<"If you want to create Hexagon, press 3."<<std::endl;
    std::cout <<"If you want to push now figure in vector, press 4."<<std::endl;
    std::cout <<"If you want to delete figure in vector, press 5."<<std::endl;
    std::cout <<"If you want to choose figure in vector, press 6."<<std::endl;
    std::cout <<"If you want to exit, press 7." << std::endl;
    std::cout <<"If you want to look help, press 8." << std::endl;
    std::cout <<"If you want to check all square, press 9." << std::endl;
}

int main() {
    std::vector <Figure *> data;


    std::pair <double, double> a(0, 2);
    std::pair <double, double> b(4, 0);
    std::pair <double, double> c(2, 4);
    std::pair <double, double> d(-2, 6);
    std::vector <std::pair <double, double>> vertex = {a, b, c, d};
    Figure * element_rhomb = new Rhombus(vertex, "rhombus");
    data.push_back(element_rhomb);


    std::pair <double, double> a1(13, -92);
    std::pair <double, double> b1(44, 0);
    std::pair <double, double> c1(-800, 30);
    std::pair <double, double> d1(27, 2);
    std::pair <double, double> e1(1, 2);
    std::vector <std::pair <double, double>> vertex1 = {a1, b1, c1, d1, e1};
    Figure * element_pent = new Pentagon(vertex1, "pentagon");
    data.push_back(element_pent);


    std::pair <double, double> a2(-2, 0);
    std::pair <double, double> b2(-1, 1);
    std::pair <double, double> c2(1, 1);
    std::pair <double, double> d2(2, 0);
    std::pair <double, double> e2(1, -1);
    std::pair <double, double> f2(-1, -1);
    std::vector <std::pair <double, double>> vertex2 = {a2, b2, c2, d2, e2, f2};
    Figure * element_hex = new Hexagon(vertex2, "hexagon");
    data.push_back(element_hex);


    for (int i = 0; i < data.size(); ++i) {
        std::cout << data[i]->who_i_am() << std::endl;
        std::cout << data[i]->square() << std::endl;
    }

    int choose;
    help1();
    std::cin >> choose;
    Figure * element = nullptr;
    while(choose != 7){
        if(choose == 8) {
            help1();
            continue;
        }
        else if(choose == 6){
            std::cout << "Enter index in vector" << std::endl;
            int index;
            std::cin >> index;
            std::cout << "If you want to check square, press 1."<< std::endl;
            std::cout << "If you want to check vertex, press 2."<< std::endl;
            std::cout << "If you want to check type, press 3."<< std::endl;
            std::cout << "If you want to check centr, press 4."<< std::endl;
            int ch;
            std::cin >> ch;
            if(ch == 1)
                data[index]->square();
            else if(ch == 2){
                std::vector <std::pair <double, double>> vertex_fig = data[index]->get_vertex();
                for(int i = 0; i < vertex_fig.size();++i)
                    std::cout << vertex_fig[i].first << " " << vertex_fig[i].second;
            }
            else if (ch == 3)
                std::cout << data[index]->who_i_am() << std::endl;
            else if(ch == 4) {
                std::pair<double, double> c = data[index]->center();
                std::cout << c.first << " " << c.second;
            }

        }
        else if(choose == 5){
            std::cout << "Enter index in vector" << std::endl;
            int index;
            std::cin >> index;
            delete(data[index]);
            data.erase(data.begin() + index);
        }
        else if(choose == 4){
            data.push_back(element);
            element = nullptr;
        }
        else if(choose == 3){
            if(element != nullptr)
                delete(element);
            std::pair <double, double> p1;
            std::pair <double, double> p2;
            std::pair <double, double> p3;
            std::pair <double, double> p4;
            std::pair <double, double> p5;
            std::pair <double, double> p6;
            std::cout << "Enter coordinates" << std::endl;
            std::cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second >> p4.first >> p4.second >> p5.first >> p5.second >> p6.first >> p6.second;
            std::vector <std::pair <double, double>> vertex_ = {p1, p2, p3, p4, p5, p6};
            element = new Hexagon(vertex_, "hexagon");
        }
        else if(choose == 2){
            if(element != nullptr)
                delete(element);
            std::pair <double, double> p1;
            std::pair <double, double> p2;
            std::pair <double, double> p3;
            std::pair <double, double> p4;
            std::pair <double, double> p5;
            std::cout << "Enter coordinates" << std::endl;
            std::cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second >> p4.first >> p4.second >> p5.first >> p5.second;
            std::vector <std::pair <double, double>> vertex_ = {p1, p2, p3, p4, p5};
            element = new Pentagon(vertex_, "pentagon");
        }
        else if(choose == 1){
            if(element != nullptr)
                delete(element);
            std::pair <double, double> p1;
            std::pair <double, double> p2;
            std::pair <double, double> p3;
            std::pair <double, double> p4;
            std::cout << "Enter coordinates" << std::endl;
            std::cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second >> p4.first >> p4.second;
            std::vector <std::pair <double, double>> vertex_ = {p1, p2, p3, p4};
            element = new Rhombus(vertex_, "rhombus");
        }
        else if(choose == 9) {
            double sum = 0;
            for(auto i : data)
                sum += i->square();
            std::cout << sum << std::endl;
        }
        std::cin >> choose;
    }
    return 0;
}
