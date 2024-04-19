#include "hbclass.ch"

CLASS Pessoa

  DATA Nome
  DATA SobreNome
  DATA Nascimento
  DATA Signo
  DATA Idade
  DATA Altura
  DATA Peso

  METHOD New( Nome, SobreNome, Signo, Altura, Peso )
  METHOD Idade()

ENDCLASS

METHOD New( Nome, Sobrenome, Signo, Altura, Peso )

::Nome := Nome
::SobreNome := SobreNome
::Signo := Signo
::Altura := Altura
::Peso := Peso

RETURN Self

METHOD Idade()

  ? "Minha idade em dias:", date() - ::Nascimento
  ? "Nasci no mes de:", CMonth ( ::Nascimento )
  ? "E tenho", INT( ( date() - ::Nascimento ) / 365 ), "anos"

RETURN