
#********define shared lib short name**********
#���干����Ķ����ƣ���Ҫ����ʵ��������и���
EXECUTABLE := kl_cfgbase


#********define shared libs used by the lib,separated by space*********
#ʹ�õĹ������б����Կո�ֿ�, ��Ҫ����ʵ���������
LIBS :=confuse kl_base

SONAME=lib$(EXECUTABLE).so

#define c++ compiler,such as ppc_8xx-g++,g++
#����ʹ�õ�C++������,����ppc_8xx-g++,g++��

ifeq ($(CC),cc)
CC=arm-uclibc-gcc
endif

#define path of the shared lib to export
#����Ĺ���������·��

ifeq ($(EXPORTBASEPATH),)
EXPORTBASEPATH=/mnt/hgfs/dyjc/program
ifeq ($(CC),ppc_8xx-gcc)
EXPORTBASEPATH=/opt/sinovee/ppc8xx-linux-2.0/target/mnt/ptu/program
endif
endif
EXPORTPATH:=$(EXPORTBASEPATH)/lib


# Now alter any implicit rules' variables if you like, e.g.:
# �������ı��κ�����Ķ������������еı���������
CFLAGS := -Wall -Os  -D ARCH_ARM
CXXFLAGS := $(CFLAGS)

RM-F := rm -f

# You shouldn't need to change anything below this point.
# �����￪ʼ����Ӧ�ò���Ҫ�Ķ��κζ�����

%.o:%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
%.o:%.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

SOURCE := $(wildcard *.c) $(wildcard *.cpp)
OBJS := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))
DEPS := $(patsubst %.o,%.d,$(OBJS))
MISSING_DEPS := $(filter-out $(wildcard $(DEPS)),$(DEPS))
MISSING_DEPS_SOURCES := $(wildcard $(patsubst %.d,%.c,$(MISSING_DEPS)) $(patsubst %.d,%.cpp,$(MISSING_DEPS)))
CPPFLAGS += -MD
.PHONY : everything deps objs clean veryclean rebuild
everything : $(EXECUTABLE)
deps : $(DEPS)
objs : $(OBJS)
clean :
	$(RM-F) *.o
	$(RM-F) *.d
veryclean: clean
	$(RM-F) $(EXPORTPATH)/$(SONAME)
rebuild: veryclean everything
ifneq ($(MISSING_DEPS),)
$(MISSING_DEPS) :
	$(RM-F) $(patsubst %.d,%.o,$@)
endif
include $(DEPS)
$(EXECUTABLE) : $(OBJS)
	$(CC) -L$(EXPORTPATH)/ -s -nostartfiles -shared -o $(EXPORTPATH)/$(SONAME) $(OBJS) $(addprefix -l,$(LIBS))