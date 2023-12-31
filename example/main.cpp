#include "mbed.h"
#include "AX12.h"

int main() {

    AX12 myax12 (PA_9, PA_10, 1, 9600);

    while (1) {
        myax12.SetGoal(0);    // go to 0 degrees
        ThisThread::sleep_for(2s);
        myax12.SetGoal(300);  // go to 300 degrees
        ThisThread::sleep_for(2s);
    }
}
