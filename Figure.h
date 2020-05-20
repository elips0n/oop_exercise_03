#include <utility>
#include <vector>
#include <cmath>
#include <string>

#ifndef OOP_FIGURE_H
#define OOP_FIGURE_H

class Figure{
public:
    explicit Figure(std::vector <std::pair <double, double>> n_vertex, std::string n_i_am){
        vertex = std::move(n_vertex);
        i_am = std::move(n_i_am);
    }
    virtual std::pair<double, double> center() = 0;
    virtual std::vector <std::pair <double, double>> get_vertex() = 0;
    virtual double square() = 0;
    virtual std::string who_i_am() = 0;

protected:
    std::vector <std::pair <double, double>> vertex;
    std::string i_am;
};

#endif 
