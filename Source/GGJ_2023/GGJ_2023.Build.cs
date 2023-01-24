// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GGJ_2023 : ModuleRules
{
	public GGJ_2023(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
