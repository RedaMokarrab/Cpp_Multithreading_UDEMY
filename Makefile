.PHONY: clean All

All:
	@echo "----------Building project:[ 14_Packaged_Tasks - Debug ]----------"
	@cd "14_Packaged_Tasks" && "$(MAKE)" -f  "14_Packaged_Tasks.mk"
clean:
	@echo "----------Cleaning project:[ 14_Packaged_Tasks - Debug ]----------"
	@cd "14_Packaged_Tasks" && "$(MAKE)" -f  "14_Packaged_Tasks.mk" clean
