
#********define executable file name**********
#�����ִ�г�������ƣ���Ҫ����ʵ��������и���
EXECUTABLE := dcu

#********define shared libs used by the lib,separated by space*********
#ʹ�õĹ������б����Կո�ֿ�, ��Ҫ����ʵ���������
LIBS :=stdc++ mcp3208
#define c++ compiler,such as ppc_8xx-g++,g++
#����ʹ�õ�C++������,����ppc_8xx-g++,g++��

export CC=arm-none-linux-gnueabi-gcc

ifeq ($(CC),cc)
CC=arm-none-linux-gnueabi-gcc
endif



#define path of the shared lib to export
#����Ĺ���������·��

ifeq ($(EXPORTBASEPATH),)
EXPORTBASEPATH=./mnt/xtdcu/program
endif

EXPORTPATH:=$(EXPORTBASEPATH)
LIBPATH:=$(EXPORTPATH)/lib

# Now alter any implicit rules' variables if you like, e.g.:
# �������ı��κ�����Ķ������������еı���������    GDLOWER��Ϊ�㶫�ͳɱ����뿪��
CFLAGS := -Wall -O2 -D ARCH_ARM -D DEV_6100 -D GDLOWER
CXXFLAGS := $(CFLAGS)

RM-F := rm -f

# You shouldn't need to change anything below this point.
# �����￪ʼ����Ӧ�ò���Ҫ�Ķ��κζ�����

#define model rules for c and cpp files
#����ģʽ����
	
%.o:%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
%.o:%.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	
SOURCE_DIRS =include base share conn drule drule/gddyjc drule/gddyjc/ftsrule drule/p8090rule mrule mrule/gb2007 mrule/gb645 mrule/gb645/gd645 mrule/gb645/gdzb mrule/lgr mrule/lgr/lgd mrule/lgr/lgb mrule/mk mrule/mk/mk3 mrule/mk/mk6 brule brule/RouterStrategy config config/confuse server server/daemon server/httx server/dbcj server/dbcj/DbcjDebugCommand server/dbcj/GDDbcjManager server/dbcj/GDDbcjCommand server/ppp server/Lcd/lcdBottom  server/Lcd/DataGWjc  server/Lcd server/jilian 

SOURCE := $(wildcard *.c) $(wildcard *.cpp) 

SOURCE +=$(foreach DIR,$(SOURCE_DIRS),$(wildcard $(DIR)/*.c $(DIR)/*.cpp))

ALLOBJS :=$(foreach DIR,$(SOURCE_DIRS),$(wildcard $(DIR)/*.o))
ALLDEPS :=$(foreach DIR,$(SOURCE_DIRS),$(wildcard $(DIR)/*.d))

OBJS := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))
CMISSING_DEPS := $(filter-out $(wildcard $(CDEPS)),$(CDEPS))
CPPMISSING_DEPS := $(filter-out $(wildcard $(CPPDEPS)),$(CPPDEPS))


MISSING_DEPS := $(filter-out $(wildcard $(DEPS)),$(DEPS))
MISSING_DEPS_SOURCES := $(wildcard $(patsubst %.d,%.c,$(MISSING_DEPS)) $(patsubst %.d,%.cpp,$(MISSING_DEPS)))
CPPFLAGS += -MD
.PHONY : everything deps objs clean veryclean rebuild
everything : $(EXECUTABLE)
deps : $(ALLDEPS)
objs : $(OBJS)
clean :
	$(RM-F) *.d
	$(RM-F) $(ALLOBJS)
	$(RM-F) $(ALLDEPS)
veryclean: clean
	$(RM-F) $(EXPORTPATH)/$(EXECUTABLE)
rebuild: veryclean everything
ifneq ($(CMISSING_DEPS),)
$(CMISSING_DEPS) :
	$(RM-F) $(patsubst %.d,%.o,$@)
	$(CC) -o $@ -MM -MMD $(patsubst %.d,%.c,$@)
endif
ifneq ($(CPPMISSING_DEPS),)
$(CPPMISSING_DEPS) :
	$(RM-F) $(patsubst %.d,%.o,$@)
	$(CC) -o $@ -MM -MMD $(patsubst %.d,%.cpp,$@)
endif
include $(ALLDEPS)

$(EXECUTABLE) : $(OBJS)
	$(CC) -L$(LIBPATH) -lm -s -o  $(EXPORTPATH)/$(EXECUTABLE) $(OBJS) $(LDLIBS) $(addprefix -l,$(LIBS)) conn/conn.a drule/gddyjc/gddyjc.a server/server.a base/base.a share/share.a
#	$(RM-F) *.d