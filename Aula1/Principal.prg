function Main()

SET DATE BRIT
SET CENT ON

oPessoa := Pessoa():New( "Filipe", "Vieira", "Aries", "175", "113 Kilos"  )
Nascimento := CTOD( "27/03/1996" )

? oPessoa:Nome, oPessoa:SobreNome
? Nascimento
? oPessoa:Signo
? oPessoa:Altura, "centimetros de altura"
? oPessoa:Peso

? "Minha idade em dias:", date() - Nascimento
? "Nasci no mes de:", CMonth ( Nascimento )
? "E tenho", INT( ( date() - Nascimento ) / 365 ), "anos"