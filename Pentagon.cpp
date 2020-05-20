#include "Pentagon.h"


std::string Pentagon::who_i_am() {
    return this->i_am;
}

std::pair<double, double> Pentagon::center(){
    std::pair<double, double> answer(0, 0);
    for(auto i : vertex){
        answer.first += i.first;
        answer.second += i.second;
    }
    answer.first /= vertex.size();
    answer.second /= vertex.size();
    return answer;
}

std::vector <std::pair <double, double>> Pentagon::get_vertex(){
    return this->vertex;
}

double Pentagon::square(){
    double res = 0;
    std::pair <double, double> point2;
    std::pair <double, double> point1 = vertex[0];
    for(int i = 1; i < vertex.size();++i){
        point2 = vertex[i];
        res += (point1.first + point2.first) * (point2.second - point1.second);
        point1 = point2;
    }
    res += (vertex[0].first + vertex[vertex.size() - 1].first) * (vertex[0].second - vertex[vertex.size() - 1].second);
    return std::abs(res) / 2;
}
