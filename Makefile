target: zumbi.c
	gcc $< -o $@

.PHONY: run clean 

run:
	./target

clean:
	rm target
