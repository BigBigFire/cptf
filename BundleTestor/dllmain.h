// dllmain.h : ģ�����������
#ifndef  BUNDLETESTOR_DLLMAIN_H
#define BUNDLETESTOR_DLLMAIN_H

#include "service/CptfDllModuleT.h"
using namespace cptf::core;

class CHelloAtlModule : public CptfDllModuleT<CHelloAtlModule>
{
public :
};

extern class CHelloAtlModule g_module;

#endif
