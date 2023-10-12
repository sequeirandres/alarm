TARGET= TC-2

CC=gcc

CFLAGS=-Wall

SRCS = TestCode2.c unity.c ../modules/code/modules.c ../modules/sensor/sensor.c ../modules/alarm/alarm.c 

OBJS=$(SRCS:.c=.o)

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
