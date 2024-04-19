function Main()

SET DATE BRIT
SET CENT ON

oPessoa := Pessoa():New( "Filipe", "Vieira", "Aries", "175", "113 Kilos"  )
oPessoa:Nascimento := CTOD( "27/03/1996" )

? oPessoa:Nome, oPessoa:SobreNome
? oPessoa:Nascimento
? oPessoa:Signo
? oPessoa:Altura, "centimetros de altura"
? oPessoa:Peso

oPessoa:Idade()