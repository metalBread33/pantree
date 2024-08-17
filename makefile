pantree: item cli 
	g++ -o pantreeCLI.exe item.o main.o

item:
	g++ -c src/item.cpp

cli:
	g++ -c src/main.cpp

clean:
	rm *.exe *.o
