CC=gcc

CFLAGS=-Iinclude

SRC=src/main.c src/traffic.c src/sensor.c src/emergency.c src/pedestrian.c src/congestion.c

OUT=traffic_system

all:
	$(CC) $(SRC) $(CFLAGS) -o $(OUT)

run:
	./$(OUT)