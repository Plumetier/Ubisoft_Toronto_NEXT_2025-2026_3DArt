// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ubisoft_3D_Art : ModuleRules
{
	public Ubisoft_3D_Art(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Ubisoft_3D_Art",
			"Ubisoft_3D_Art/Variant_Platforming",
			"Ubisoft_3D_Art/Variant_Platforming/Animation",
			"Ubisoft_3D_Art/Variant_Combat",
			"Ubisoft_3D_Art/Variant_Combat/AI",
			"Ubisoft_3D_Art/Variant_Combat/Animation",
			"Ubisoft_3D_Art/Variant_Combat/Gameplay",
			"Ubisoft_3D_Art/Variant_Combat/Interfaces",
			"Ubisoft_3D_Art/Variant_Combat/UI",
			"Ubisoft_3D_Art/Variant_SideScrolling",
			"Ubisoft_3D_Art/Variant_SideScrolling/AI",
			"Ubisoft_3D_Art/Variant_SideScrolling/Gameplay",
			"Ubisoft_3D_Art/Variant_SideScrolling/Interfaces",
			"Ubisoft_3D_Art/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
