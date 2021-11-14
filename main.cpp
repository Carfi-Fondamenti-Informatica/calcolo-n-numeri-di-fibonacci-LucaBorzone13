#include <iostream>

int fibo(int n){

    int i;
    int a=1, b=1, c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    for(i=2; i<n; i++){

        c=a+b;

        std::cout << c << std::endl;

        a=b;
        b=c;


    }
    
}


int main() {

    int n=0;
    std::cin >> n;


    if(n<2){

        std::cout << "errore" << std::endl;

    }else if (n>=2){

        int x = fibo(n);
        std::cout << x << std::endl;

    }

    return 0;
}
