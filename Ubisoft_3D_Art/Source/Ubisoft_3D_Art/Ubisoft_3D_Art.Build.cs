// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ubisoft_3D_Art : ModuleRules
{
	public Ubisoft_3D_Art(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
