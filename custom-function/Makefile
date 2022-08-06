SHELL := /bin/bash
RANDOM = $(shell expr $$RANDOM % $(1) + 1)

# 문자 '_' 100개를 가진 더미 목록을 만든다.
DUMMY_100_ELEM := $(shell for (( i = 0; i < 100; i++ )); do echo _; done)

test:
	@# echo 1 ~ 6 사이의 값 100개 얻기
	@$(foreach dummy,$(DUMMY_100_ELEM),echo $(call RANDOM,6);)




