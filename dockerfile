FROM gcc:4.9 

WORKDIR /app 

ADD . /app/  

CMD [ "sh atm.sh" ]