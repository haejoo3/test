CC = gcc 
TARGET = s170275 
CFLAGS = -g -w -O3 
  
OBJS = main.o myapp.o output.o 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS)  -o $(TARGET) $(OBJS) 

.c.o: 
	$(CC) $(CFLAGS) -c -o $@ $< 

clean:
	rm $(OBJS) $(TARGET) 
	
