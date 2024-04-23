#include "hbclass.ch"

CLASS Pessoa

  DATA vNome, vSobreNome, vNascimento, vSigno, vAltura, vPeso
  METHOD Novo()
  METHOD EmTela()

ENDCLASS

METHOD Novo()

  CLS
  ACCEPT "Qual seu Nome? " TO ::vNome
  ACCEPT "Qual seu Sobrenome? " TO ::vSobrenome
  ACCEPT "Qual seu Data de Nascimento? (Coloque DD/MM/AAAA)  " TO ::vNascimento
  ACCEPT "Qual seu Signo? " TO ::vSigno
  ACCEPT "Qual seu Altura? " TO ::vAltura
  ACCEPT "Qual seu Peso? " TO ::vPeso
  CLS

  ::vNascimento := CTOD(::vNascimento)

RETURN SELF

METHOD EmTela()

? "Seu nome é ", ::vNome,"e seu sobrenome é", ::vSobrenome
? "Seu signo é: ", ::vSigno
? "Sua altura é: ", ::vAltura, "centimentros"
? "Você pesa: ", ::vPeso, "Kg"
? "Sua idade é de: ", ::vNascimento:= INT((date()- ::vNascimento)/365), "Anos"

RETURN