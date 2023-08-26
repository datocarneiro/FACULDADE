'''
https://pt.wikipedia.org/wiki/%C3%8Dndice_de_massa_corporal#:~:text=M%C3%A9todo%20mais%20preciso-,Como%20calcular,e%20a%20altura%20em%20metros.
Resultado	Situação
Abaixo de 17	Muito abaixo do peso
Entre 17 e 18,49	Abaixo do peso
Entre 18,50 e 24,99	Peso normal
Entre 25 e 29,99	Acima do peso
Entre 30 e 34,99	Obesidade I
Entre 35 e 39,99	Obesidade II (severa)
Acima de 40	Obesidade III (mórbida)
'''

while True:
    nome = input('Digite seu nome: ')
    peso = float(input('Digite seu peso(em kg): '))
    altura = float(input('Digite sua altura(em metros): '))
    imc = peso / (altura * altura)
    print(f'{nome}, seu IMC é: {imc:.2f}')

    def classificação_imc():
        if imc < 17.00:
            return 'Muito abaixo do peso'
        elif imc <= 18.49:
            return 'Abaixo do peso'
        elif imc <= 24.99:
            return 'Peso normal'
        elif imc <= 29.99:
            return 'Sobrepeso'
        elif imc <= 34.99:
            return 'Obesidade I'
        elif imc <= 39.99:
            return 'Obesidade grau II (severa)'
        else:
            return 'Obesidade grau III (mórbida)'

    classificação_imc()
    print(f'de acordo com o seu IMC, a classificação é considerada como: {classificação_imc()}')

    continuar = input('Continuar calculando? [S/N]:')
    if continuar in "Nn":
        print('Você saiu do programa')
        break
