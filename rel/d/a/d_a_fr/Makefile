#
# Generated By: dol2asm
#

M72_TARGET := $(BUILD_DIR)/rel/d/a/d_a_fr.plf
M72_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_fr.lcf
M72_MAP := $(BUILD_DIR)/rel/d/a/d_a_fr.map

M72_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/d_a_fr/d_a_fr.cpp \

M72_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/d_a_fr/d_a_fr.o \

M72_LIBS := \

M72_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M72_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M72_LDSCRIPT) \
	-unused -map $(M72_MAP) \
	-w off \

$(M72_TARGET): $(M72_O_FILES) $(M72_LIBS)
	@echo [ 72] creating $(M72_TARGET)
	@echo $(M72_LIBS) $(M72_O_FILES) > build/M72_ofiles
	@python3 tools/lcf.py rel 72 --output $(M72_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M72_LDFLAGS) -o $(M72_TARGET) @build/M72_ofiles

$(BUILD_DIR)/rel/d/a/d_a_fr/%.o: rel/d/a/d_a_fr/%.cpp $(BUILD_DIR)/rel/d/a/d_a_fr/%.d
	@echo [ 72] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M72_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M72_D_FILES := $(M72_O_FILES:.o=.d)
$(M72_D_FILES):
include $(wildcard $(M72_D_FILES))
endif


