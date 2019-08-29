// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Caffeinator_iOSTarget : TargetRules
{
	public Caffeinator_iOSTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Caffeinator_iOS" } );
	}
}
