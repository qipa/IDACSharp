#pragma comment(lib,"ida.lib")

#include "area.h"
#include "Function.h"
#include "IdaInfo.h"
#include "Instruction.h"
#include "Bytes.h"
#include "IDC.h"
#include "Ref.h"
#include "Struct.h"
#include "IDCFunction.h"
#include "Search.h"
#include "Entry.h"
#include "Segment.h"

//于 2011-04-15 开始修改后，更新添加的头文件     by dreamzgj
#include "IdaHelper.h"
#include "Dbg.h"
#include "Idd.h"
#include "Loader.h"
