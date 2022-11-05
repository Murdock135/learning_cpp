#pragma once
#include <iostream>

class swimmingPool {

private:


public:
    double length, width, depth;
    double volume;
    double prefill;
    double rate_in;
    double rate_out;
    double waterNeeded;
    double resultRate;

    swimmingPool(double l, double w, double d, double preFill, double r_in, double r_out);
    double water_needed();
    double time_needed();
    double change_water_for_duration(double rate_in_or_out, double time_min);
};

swimmingPool::swimmingPool(double l = 10, double w = 10, double d = 10, double preFill = 0, double r_in = 0, double r_out = 0) {
    this->length = l;
    this->width = w;
    this->depth = d;
    this->volume = length * width * depth;
    this->prefill = preFill;
    this->rate_in = r_in;
    this->rate_out = r_out;
    this->resultRate = rate_in - rate_out;

    rate_in <= rate_out ? " This pool will never be full" : "ok";
}

double swimmingPool::water_needed() {
    this->waterNeeded = volume - prefill;
    return waterNeeded;
}

double swimmingPool::time_needed() {
    double timeNeeded = waterNeeded / resultRate;
    return timeNeeded;
}

double swimmingPool::change_water_for_duration(double rate_in_or_out, double time_min) {
    double time = time_min;
    std::cout << "current volume: " << volume << '\n';
    std::cout << "rate: " << rate_in_or_out << '\n';
    this->volume = volume + rate_in_or_out * time;
    return volume;
}
