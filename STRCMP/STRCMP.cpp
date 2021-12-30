#include <iostream>
#include<cstring>

using namespace std;

int main()
{


    char CH1[6] = "yahya";
    char CH2[6] = "yahya";
    int size1 = 0;
    int size2 = 0;

    int h = 0;
    int i = 0;

    size1 = strlen(CH1);
    size2 = strlen(CH2);

    if (size1 != size2) {

        cout << "false" << endl;
    }

    else {

        for (i = 0; i < size1 ; i++) {


            if (CH1[i] == CH2[i]) {

                h++;

            }



        }

  if (h == size1) {


        cout << "true" << endl;

    }

  else
  {
      cout << "false" << endl;

  }


    }

  

}