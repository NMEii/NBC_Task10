#include "TaskModule.h"


#define LOCTEXT_NAMESPACE "FTaskModuleModule"

DEFINE_LOG_CATEGORY(MyModuleLog);

void FTaskModuleModule::StartupModule()
{
	UE_LOG(MyModuleLog, Warning, TEXT("Module Start!"));
}

void FTaskModuleModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FTaskModuleModule, TaskModule)