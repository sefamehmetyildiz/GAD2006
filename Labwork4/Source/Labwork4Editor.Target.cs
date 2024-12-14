// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Labwork4EditorTarget : TargetRules
{
	public Labwork4EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange(new[] { "Labwork4" });
	}
}