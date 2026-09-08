// wap to count the sum of digit of a number

    #include<iostream>
    using namespace std;

    int main(){ 

        int num = 5432;
        int sum = 0;

        while(num != 0){
            sum = sum + (num % 10);          //num % 10 → gets the last digit
            num = num / 10;                  //num / 10 → removes the last digit
        }

    cout<< "sum of digits: "<<sum<<endl;

        return 0;
    }