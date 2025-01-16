EX00_DIR = ex00
EX00_OUT = animal
EX01_DIR = ex01
EX01_OUT = animal_with_brain
EX02_DIR = ex02
EX02_OUT = animal_abstract
EX03_DIR = ex03
EX03_OUT = materia

test:
	@echo "Building in ex00 directory..."
	$(MAKE) -C $(EX00_DIR) all
	@echo "Running ex00 program..."
	$(EX00_DIR)/$(EX00_OUT)

	@echo "Building in ex01 directory..."
	$(MAKE) -C $(EX01_DIR) all
	@echo "Running ex01 program..."
	$(EX01_DIR)/$(EX01_OUT)

	@echo "Building in ex02 directory..."
	$(MAKE) -C $(EX02_DIR) all
	@echo "Running ex02 program..."
	$(EX02_DIR)/$(EX02_OUT)

	@echo "Building in ex03 directory..."
	$(MAKE) -C $(EX03_DIR) all
	@echo "Running ex03 program..."
	$(EX03_DIR)/$(EX03_OUT)
clean:
	@echo "Cleaning ex00 directory..."
	$(MAKE) -C $(EX00_DIR) clean
	@echo "Cleaning ex01 directory..."
	$(MAKE) -C $(EX01_DIR) clean
	@echo "Cleaning ex02 directory..."
	$(MAKE) -C $(EX02_DIR) clean
	@echo "Cleaning ex03 directory..."
	$(MAKE) -C $(EX03_DIR) clean
