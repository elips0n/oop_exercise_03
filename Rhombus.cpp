#include "Rhombus.h"


std::string Rhombus::who_i_am() {
    return this->i_am;
}

std::pair <double, double> calculate_vector(const std::pair <double, double> & a, const std::pair <double, double> & b){
    std::pair <double, double> answer;
    answer.first = b.first - a.first;
    answer.second = b.second - a.second;
    return answer;
}

double length_vector(std::pair <double, double> a){
    return sqrt(a.first * a.first + a.second * a.second);
}

std::pair<double, double> Rhombus::center(){
    std::pair<double, double> answer(0, 0);
    for(auto i : vertex){
        answer.first += i.first;
        answer.second += i.second;
    }
    answer.first /= vertex.size();
    answer.second /= vertex.size();
    return answer;
}

std::vector <std::pair <double, double>> Rhombus::get_vertex(){
    return this->vertex;
}

double Rhombus::square(){
    return 0.5 * length_vector(calculate_vector(this->vertex[0], this->vertex[2])) * length_vector(calculate_vector(this->vertex[1], this->vertex[3]));
}
