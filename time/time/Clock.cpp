#include <iostream>
#include <stdlib.h>
//#include <unistd.h>


int main()
{

    int hr = 0, mins = 0, sec = 0;
    while (true) {
        std::cout << hr << " : " << mins << " : " << sec << std::endl;

        sec++;
        if (sec == 60) {
            mins++;
            sec = 0;
            if (mins == 60) {
                hr++;
                mins = 0;
                if (hr == 60) {
                    hr = 0;
                }

            }
        }
      //  sleep(1);
    }

}