// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GIS_Demo : ModuleRules
{
	public GIS_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
