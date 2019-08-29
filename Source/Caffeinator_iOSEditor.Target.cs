// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Caffeinator_iOSEditorTarget : TargetRules
{
	public Caffeinator_iOSEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Caffeinator_iOS" } );
	}
}
