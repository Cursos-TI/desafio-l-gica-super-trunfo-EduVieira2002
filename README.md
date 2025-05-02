# Super Trunfo - Cidades

Este é um jogo de Super Trunfo com tema cidades desenvolvido em linguagem C. O programa compara atributos de duas cartas pré-cadastradas (São Paulo e Rio de Janeiro) e determina o vencedor com base nos atributos escolhidos pelos jogadores.

---

## 🎮 Exemplos de uso

### 1. Escolhendo o primeiro atributo

```
Bem vindo ao jogo!
Escolha o primeiro atributo a ser comparado (digite um dos números abaixo):
1. População
2. Área
3. PIB
4. Número de pontos turísticos
5. Densidade populacional
6. PIB per capita
7. Super Poder
> 1

População:
Carta 1 - São Paulo: 12325000
Carta 2 - Rio de Janeiro: 6748000
Resultado: Carta 1 venceu!
```

### 2. Escolhendo o segundo atributo (diferente do primeiro)

```
Escolha o segundo atributo a ser comparado (digite um dos números abaixo):
1. População
2. Área
3. PIB
4. Número de pontos turísticos
5. Densidade populacional
6. PIB per capita
7. Super Poder
> 5

Densidade populacional:
Carta 1 - São Paulo: 8100.58
Carta 2 - Rio de Janeiro: 5623.45
Resultado: Carta 2 venceu!
```

### 3. Exibição da soma dos atributos e resultado final

```
Valor da soma dos atributos da carta 1: 12333000.58
Valor da soma dos atributos da carta 2: 6748000.45
A carta 1 tem maior soma dos atributos!

Pontuação final da partida.
Carta 1: 2
Carta 2: 1
O vencedor da partida é o jogador 1!  Obrigado por jogar!
```

---

## 🔢 Atributos disponíveis para comparação

1. **População** (número inteiro)
2. **Área** (float em km²)
3. **PIB** (float em bilhões de reais)
4. **Número de pontos turísticos** (inteiro)
5. **Densidade populacional** (float em habitantes por km²)
6. **PIB per capita** (float em reais)
7. **Super Poder** (soma ponderada: população + área + PIB + pontos turísticos + inverso da densidade + PIB per capita)

---

## 📝 Observações sobre o código

* O arquivo `super_trunfo_cidades.c` está bem comentado para facilitar o entendimento de cada etapa:

  * Definição das cartas pré-cadastradas.
  * Cálculo de atributos derivados:

    * Densidade populacional.
    * PIB per capita.
    * Super Poder.
  * Implementação de menus e comparação de atributos com `switch`.
  * Tratamento de empate e cálculo de pontuação.
* Para estender o jogo com novas cartas, adicionar estruturas de dados e funções de cadastro será necessário.

---

**Divirta-se jogando e explorando os atributos das cidades!**
