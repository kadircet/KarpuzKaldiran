// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KarpuzKaldiranEditorTarget : TargetRules
{
	public KarpuzKaldiranEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("KarpuzKaldiran");
	}
}
