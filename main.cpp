#include <iostream>

using namespace std;

int main()
{
    int score;
    cout<<"Enter your score:";
    cin>>score;

    if(score>100 or score<0){
        cout<<"Invalid input";
    }

   else if(score<=100 && score>=80){
        cout<<"You had an A";
    }

    else if(score<=79 && score>=75){
        cout<<"You had a B+";
    }

    else if(score<=74 && score>=70){
        cout<<"You had a B";
    }

    else if(score<=69 && score>=65){
        cout<<"You had a C+";
    }

    else if(score<=64 && score>=60){
        cout<<"You had a C";
    }

    else if(score<=59 && score>=55){
        cout<<"You had a D+";
    }

    else if(score<=54 && score>=50){
        cout<<"You had a D";
    }

    else if(score<=49 && score>=45){
        cout<<"You had an E";
    }

    else if(score<=44 && score>=0){
        cout<<"You had an F";
    }
    return 0;
}
