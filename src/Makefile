TARGET=alarm

CC=gcc

CFLAGS=-Wall

SRCS = main.c modules/alarm/alarm.c modules/speaker/speaker.c modules/light/light.c modules/sensor/sensor.c modules/watchDog/watchDog.c

OBJS=$(SRCS:.c=.o)

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
    


