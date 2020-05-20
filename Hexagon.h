#ifndef OOP_HELP_HEXAGON_H
#define OOP_HELP_HEXAGON_H
#include "Figure.h"

class Hexagon : public Figure{
public:
    explicit Hexagon(std::vector<std::pair<double, double>> nVertex, std::string me) : Figure(std::move(nVertex), std::move(me)) {}
    std::pair<double, double> center() override;
    std::vector <std::pair <double, double>> get_vertex() override;
    double square() override;
    std::string who_i_am() override;
};
#endif //OOP_HELP_HEXAGON_H
