#
# Generated By: dol2asm
#

M449_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag.plf
M449_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag.lcf
M449_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag.map

M449_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_flag/d_a_obj_flag.cpp \

M449_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag/d_a_obj_flag.o \

M449_LIBS := \

M449_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M449_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M449_LDSCRIPT) \
	-unused -map $(M449_MAP) \
	-w off \

$(M449_TARGET): $(M449_O_FILES) $(M449_LIBS)
	@echo [449] creating $(M449_TARGET)
	@echo $(M449_LIBS) $(M449_O_FILES) > build/M449_ofiles
	@python3 tools/lcf.py rel 449 --output $(M449_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M449_LDFLAGS) -o $(M449_TARGET) @build/M449_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag/%.o: rel/d/a/obj/d_a_obj_flag/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_flag/%.d
	@echo [449] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M449_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M449_D_FILES := $(M449_O_FILES:.o=.d)
$(M449_D_FILES):
include $(wildcard $(M449_D_FILES))
endif


