SHELL := /bin/bash
RANDOM = $(shell expr $$RANDOM % $(1) + 1)

test:
	@ echo 1 ~ 6 사이의 값 100개 얻기
	@ for (( i = 0; i < 100; i++ )); do echo $(call RANDOM,6); done


