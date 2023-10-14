Algoritmo "Calcula_Potenciacao"

Var
   a, b, r, i: inteiro

Inicio
   Escreva("Insira a base sendo um numero inteiro e positivo: ")
   Leia(a)

   Escreva("Insira o expoente, sendo um numero inteiro e positivo: ")
   Leia(b)

   r <- 1

   Para i de 1 até b faça
      r <- r * a
   fimPara

   Escreva("Resultado de", a, " elevado à", b," é =",r)
FimAlgoritmo