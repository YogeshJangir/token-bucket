main: token-main token-core token-packet-arrival token-init token-helper token-token-arrival token-server token-monitor token-statistics mylist
	gcc -o token -g -pthread -lm token.o token-core.o token-packet-arrival.o token-init.o token-helper.o token-token-arrival.o token-server.o token-monitor.o token-statistics.o mylist.o
token-main:
	gcc -g -c -Wall -pthread token.c
token-core:
	gcc -g -c -Wall -pthread token-core.c
token-packet-arrival:
	gcc -g -c -Wall -pthread token-packet-arrival.c
token-init:
	gcc -g -c -Wall -pthread token-init.c 	
token-helper:
	gcc -g -c -Wall -pthread token-helper.c
token-token-arrival:
	gcc -g -c -Wall -pthread token-token-arrival.c
token-server:
	gcc -g -c -Wall -pthread token-server.c
token-monitor:
	gcc -g -c -Wall -pthread token-monitor.c
token-statistics:
	gcc -g -c -Wall -pthread token-statistics.c
mylist:
	gcc -g -c -Wall mylist.c
clean:
	rm -f *.o token
