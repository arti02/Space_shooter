using UnrealBuildTool;

public class SpaceShooterTemplateTarget : TargetRules
{
	public SpaceShooterTemplateTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SpaceShooterTemplate");
	}
}
