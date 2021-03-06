/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExamplesModuleDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExamplesModuleDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelExamples.VoxelExamplesModuleDummy");
		return ptr;
	}

}


