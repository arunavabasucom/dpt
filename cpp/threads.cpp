#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

void dw() {
    // cout << this_thread::get_id();
    cout << "work 1\n";
}
int main() {

    thread worker(dw);
    cout << worker.get_id();
    // cout << this_thread::get_id();
    worker.join(); // main thread  wait until this worker thread is going to complete
    worker.get_id();
    return 0;
}