FROM gcc:4.9 

WORKDIR /app 

ADD . /app/  

CMD [ "clang++ -std=c++17 atm.cpp -o atm" ]