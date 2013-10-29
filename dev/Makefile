redis.app:sds.o adlist.o dict.o zmalloc.o src/redis-main.h src/redis-main.c 
	gcc src/redis-main.c -o redis.app bin/adlist.o bin/sds.o bin/zmalloc.o bin/dict.o 
sds.o:zmalloc.o src/sds.c src/sds.h
	gcc -c src/sds.c -o bin/sds.o
adlist.o:zmalloc.o src/adlist.c src/adlist.h
	gcc -c src/adlist.c -o bin/adlist.o
dict.o:zmalloc.o src/dict.c src/dict.h src/fmacros.h
	gcc -c src/dict.c -o bin/dict.o
zmalloc.o:src/zmalloc.c src/zmalloc.h src/config.h
	gcc -c src/zmalloc.c -o bin/zmalloc.o
