#
# Generated By: dol2asm
#

LIBJ3DU_A_CPP_FILES := \
	libs/JSystem/J3DU/J3DUClipper.cpp \
	libs/JSystem/J3DU/J3DUDL.cpp \

LIBJ3DU_A_O_FILES := \
	$(BUILD_DIR)/libs/JSystem/J3DU/J3DUClipper.o \
	$(BUILD_DIR)/libs/JSystem/J3DU/J3DUDL.o \

LIBJ3DU_A_CFLAGS := \

LIBJ3DU_A_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \

$(BUILD_DIR)/libJ3DU.a: $(LIBJ3DU_A_O_FILES)
	@echo linking... $(BUILD_DIR)/libJ3DU.a
	@echo $(LIBJ3DU_A_O_FILES) > build/LIBJ3DU_A_ofiles
	@$(LD) -xm l $(LIBJ3DU_A_LDFLAGS) -o $(BUILD_DIR)/libJ3DU.a @build/LIBJ3DU_A_ofiles

$(BUILD_DIR)/libs/JSystem/J3DU/%.o: libs/JSystem/J3DU/%.cpp $(BUILD_DIR)/libs/JSystem/J3DU/%.d
	@mkdir -p $(@D)
	@echo building... $<
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(LIBJ3DU_A_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
LIBJ3DU_A_D_FILES := $(LIBJ3DU_A_O_FILES:.o=.d)
$(LIBJ3DU_A_D_FILES):
include $(wildcard $(LIBJ3DU_A_D_FILES))
endif

