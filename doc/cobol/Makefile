target=test

execute: build
	@./test
build:
	@cobc -free -x -o $(target) $(target).cbl

clean: 
	@rm $(target)
