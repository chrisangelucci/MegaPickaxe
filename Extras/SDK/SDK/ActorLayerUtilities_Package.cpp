﻿/**
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
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer");
		
		struct
		{
			class AActor*                                      InActor;
			struct FActorLayer                                 Layer;
		} params;
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 ActorLayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FActorLayer                                 ActorLayer;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorLayer = ActorLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer");
		
		struct
		{
			class AActor*                                      InActor;
			struct FActorLayer                                 Layer;
		} params;
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULayersBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayersBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorLayerUtilities.LayersBlueprintLibrary");
		return ptr;
	}

}


