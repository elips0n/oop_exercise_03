#ifndef OOP_HELP_RHOMBUS_H
#define OOP_HELP_RHOMBUS_H
#include <utility>

#include "Figure.h"

class Rhombus : public Figure{
public:
    explicit Rhombus(std::vector<std::pair<double, double>> nVertex, std::string me) : Figure(std::move(nVertex), std::move(me)) {}
    std::pair<double, double> center() override;
    std::vector <std::pair <double, double>> get_vertex() override;
    double square() override;
    std::string who_i_am() override;
};
#endif //OOP_HELP_RHOMBUS_H
