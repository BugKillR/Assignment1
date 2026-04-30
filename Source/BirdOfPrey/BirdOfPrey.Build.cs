using UnrealBuildTool;

public class BirdOfPrey : ModuleRules
{
    public BirdOfPrey(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // UE 5.7 ve versiyon geçişleri için gerekli tüm temel modüller
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "NavigationSystem",
            "AIModule"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}