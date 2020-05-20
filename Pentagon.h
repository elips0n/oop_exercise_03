#ifndef OOP_PENTAGON_H
#define OOP_PENTAGON_H
#include "Figure.h"

class Pentagon : public Figure{
public:
    explicit Pentagon(std::vector<std::pair<double, double>> nVertex, std::string me) : Figure(std::move(nVertex), std::move(me)) {}
    std::pair<double, double> center() override;
    std::vector <std::pair <double, double>> get_vertex() override;
    double square() override;
    std::string who_i_am() override;
};
#endif 
