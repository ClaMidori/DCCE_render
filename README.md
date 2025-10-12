# DCCE_render
Projeto de Computação Gráfica, no qual iremos desenhar o Departamento de Ciência da Computação e Estatística com OpenGL como trabalho final da disciplina.

# Primeiro commit e modificações

Aproveitando o gancho do projeto anterior onde usamos cmkae para fazer o sistema operacional, combinei, neste primeiro commit, a modularização proposta pelo cmake com o opengl para criar estruturas básicas do DCCE (ainda é necessário alterações);

# Updates

Tomando como base o código de  movimentação proposto pelo Pf. Dr. Guilherme Freire, melhorei o deslocamento pelo mundo aplicando uma lógica de arrays com duas posições para permitir o deslocamento fluído e nas diagonais. 
Além disso, consertei o movimento da camera (que em algumas versões anteriores estava quebrando) através da impementação da sensibilidade e conversão da movimentação com radianos.

# Estruturas básicas

Para termos uma uniformidade, utilizei como métrica básica do mundo o cubo de 50 unidades de dimensão (50x50x50).
Essa base (literalmente a constante base) está definida em controls, junto com as variáveis de posicionamento da câmera;

# Separação dos arquivos

Na main está o loop de animação junto com as chamadas do openGl para atualizar os objetos do mundo.
Em mouse e keyboard estão as lógicas referentes ao deslocamento da câmera no mundo.
Separei os componentes construídos em arquivos room e building, assim não precisamos criar uma página de código gigante, mas separar a criação de salas, cadeiras, etc. e junta-las todas no building.

Deixei o arquivo house.c e dcce.c para referência temporária

# Uso do cmake

Para executar é preciso ir para a pasta /build e fazer:
    1. cmake ..
    2. make
    3. ./dcce

lembrando que se você criou um arquivo c #Coloque na sources da CmakeLists # senão não vai funcionar!!
