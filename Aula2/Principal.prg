function Main()

SET DATE BRIT
SET CENT ON
HB_CDPSELECT("UTF8")

NovaPessoa:= Pessoa()

NovaPessoa:Novo()
NovaPessoa:EmTela()

RETURN