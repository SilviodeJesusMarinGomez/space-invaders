
OBJETIVO : INGREDIENTES
	PASO 1
	PASO 2
	PASO 3

bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -o bin/test

ejecutar : bin/test
	./bin/test

hola : receta2
	echo Hola mundo

receta2 : 
	echo receta2