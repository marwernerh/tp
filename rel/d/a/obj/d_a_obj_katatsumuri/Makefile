#
# Generated By: dol2asm
#

M495_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri.plf
M495_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri.lcf
M495_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri.map

M495_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri.cpp \

M495_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri.o \

M495_LIBS := \

M495_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M495_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M495_LDSCRIPT) \
	-unused -map $(M495_MAP) \
	-w off \

$(M495_TARGET): $(M495_O_FILES) $(M495_LIBS)
	@echo [495] creating $(M495_TARGET)
	@echo $(M495_LIBS) $(M495_O_FILES) > build/M495_ofiles
	@python3 tools/lcf.py rel 495 --output $(M495_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M495_LDFLAGS) -o $(M495_TARGET) @build/M495_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri/%.o: rel/d/a/obj/d_a_obj_katatsumuri/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_katatsumuri/%.d
	@echo [495] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M495_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M495_D_FILES := $(M495_O_FILES:.o=.d)
$(M495_D_FILES):
include $(wildcard $(M495_D_FILES))
endif


