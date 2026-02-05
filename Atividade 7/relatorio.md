# Análise Técnica e Big-Oh

## Melhor Algoritmo por Caso:
* **Caso 01, 03 e 04:** O **Merge Sort** é o vencedor disparado. Sua complexidade de notação Oh(n log n) garante estabilidade mesmo com grandes volumes de dados.

* **Caso 02:** A **Inserção** é o melhor algoritmo. Por ser um vetor já ordenado, ele atinge sua complexidade de melhor caso Oh(n), já de **Seleção** é o pior para o andamneto do algoritmo sendo mais lento.

## Comportamento Big-Oh:
1.  **Seleção O(n^2):** Comportou-se de forma ineficiente e constante em maior parte dos casos, por mais que o caso 3 tenha sido menos pior em comparação do Inserção que saiu pior caso.

2.  **Inserção O(n^2):** Apresentou alta variação. No pior caso 03 como foi dito, foi o mais lento de todos, mas no melhor caso 02, superou até o Merge Sort.

3.  **Merge Sort O(n log n):** Manteve a curva de crescimento mais suave e eficiente em todas as situações, provando ser o método mais constante sem variar muito, única coisa que perde na "competição" foi o caso 2 que perde para Inserção.

**Link dos gráficos e tabelas: https://docs.google.com/spreadsheets/d/1CBy-XCdvEGr9bzoJtbbV0KuZoS8jweJf6sGOFzGPSFs/edit?usp=sharing** 
