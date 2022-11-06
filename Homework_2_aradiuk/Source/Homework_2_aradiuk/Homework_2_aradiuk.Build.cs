// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework_2_aradiuk : ModuleRules
{
	public Homework_2_aradiuk(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
