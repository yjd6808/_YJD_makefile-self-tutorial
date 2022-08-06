SHELL := /bin/bash
RAND := $(shell echo $$RANDOM | xargs -I {} expr {} % 6 + 1) 

roll:
	@echo "$(RAND)"

.PHONY: roll


