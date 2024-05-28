// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlueArchive_UProject : ModuleRules
{
	public BlueArchive_UProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
