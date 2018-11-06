#include <iostream>
#include <chrono>
#include <ctime>
#include <time.h>

using namespace std;
double wallClock()
{
  struct timespec t;
  clock_gettime(CLOCK_REALTIME,&t);
  return t.tv_sec+1e-9*t.tv_nsec;
}
long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    auto start = std::chrono::system_clock::now();
    std::cout << "f(42) = " << fibonacci(42) << '\n';
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";

   cout<<"--------------------walclock()-----------------"<<endl;
   double lap;
	 double tc=0.0;
   lap = wallClock();
   cout << "f(42) = " << fibonacci(42) << '\n';
   tc=tc+wallClock()-lap;
   cout<<"elapsed time="<<tc<<endl;
  return 0;
}
