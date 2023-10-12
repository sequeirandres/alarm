TARGET= TC-1

CC=gcc

CFLAGS=-Wall

SRCS = TestCode1.c unity.c ../modules/code/modules.c ../modules/sensor/sensor.c 

OBJS=$(SRCS:.c=.o)

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
