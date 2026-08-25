// wap to reverse a number


    #include<iostream>
    using namespace std;

    int main(){

        int num = 5432;
        int rev = 0;

        while(num != 0){
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

    cout<< "reverse of digits: "<<rev<<endl;

        return 0;
    }