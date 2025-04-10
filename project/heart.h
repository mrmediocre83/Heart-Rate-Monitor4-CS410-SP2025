#ifndef HEART_H
#define HEART_H
#include <Arduino.h> // Arduino standard library
#include <iostream> (Arduino doesn't support iostream(cout, cin)), replace with Serial.print()

class Heart {
  public:
    Heart(int age, std::string name);
    ~Heart();

    int get_heart_rate();
    double get_avg_heart_rate();
    int get_monitor_time();

    // Andrew N - Implemented set_monitor_time, set_average_heart_rate, set_heart_rate.
    void set_monitor_time(int time); // It could be double
    void set_average_heart_rate(double average_rate);
    void set_heart_rate(int rate); // heart rate must be int, according to hospital

    // Patrick M - Implement measure_for_seconds 
    void measure_for_seconds(int seconds);   // simulates live measurement during recording of heart-rate

    std::string get_name();
    int get_age();
    void set_name();
    void set_age();

    void wait_x_seconds(int milli_seconds);
  private:
    int heart_rate;
    double average_heart_rate; 
    int monitor_time; // in seconds (could change)
    bool irregular;
    std::string name;
    int age;
};

void wait_60_second(int milli_seconds);
bool normal_heart_rate(double average_heart_rate);

#endif 