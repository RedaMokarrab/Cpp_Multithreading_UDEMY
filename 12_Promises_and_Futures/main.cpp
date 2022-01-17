#include <iostream>
#include <cmath>
#include <iomanip>
#include <thread>
#include <future>


using namespace std;

double calculate_pi(int terms) 
{
    double sum = 0.0;

    for(int i = 0; i < terms; i++)
    {
        int sign = pow(-1, i);
        double term = 1.0/(i * 2 + 1);
        sum += sign * term;
    }

    return sum * 4;
}

int main() 
{
   promise <double> result;
   
auto lambda_calculation = [&](int terms)
{
   auto var = calculate_pi(terms);
   
   result.set_value(var);
   
   };
   
   
   thread T1(lambda_calculation,1E8);
   
   
   future<double> my_PI = result.get_future();
   
   
   cout<<"start"<<endl;
   cout << setprecision(15) << my_PI.get() << endl;
   cout<<"done"<<endl;
   
   T1.join();   
    
    return 0;

}

