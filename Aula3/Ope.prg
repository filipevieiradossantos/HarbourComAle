#include "hbclass.ch"

CLASS CC

  DATA ccSaldo, ccDeposito, ccSaque
  METHOD Saldo()
  METHOD Deposito()
  METHOD Saque()

ENDCLASS

METHOD Saldo() 

RETURN Menu()

METHOD Deposito(valor) CLASS CC
    ::ccSaldo =+ valor

RETURN Menu()

METHOD Saque()

RETURN Menu()