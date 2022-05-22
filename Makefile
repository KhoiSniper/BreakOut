all: compile link

compile:
      
	   g++ -c main.cpp GamePlay.cpp Menu.cpp GameStateManager.cpp GameOver.cpp BestScore.cpp -Isrc\include  

link:
	   g++ main.o GamePlay.o Menu.o  GameStateManager.o GameOver.o BestScore.o -o sfml-app -Lsrc\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
	   
