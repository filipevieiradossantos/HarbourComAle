#include "hbclass.ch"

CLASS Pessoa

  DATA Nome
  DATA SobreNome
  DATA Nascimento
  DATA Signo
  DATA Altura
  DATA Peso

  METHOD New( Nome, SobreNome, Signo, Altura, Peso )

ENDCLASS

METHOD New( Nome, Sobrenome, Signo, Altura, Peso )

::Nome := Nome
::SobreNome := SobreNome
::Signo := Signo
::Altura := Altura
::Peso := Peso

RETURN Self