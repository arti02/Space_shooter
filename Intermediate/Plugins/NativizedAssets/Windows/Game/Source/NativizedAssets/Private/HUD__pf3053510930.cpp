#include "NativizedAssets.h"
#include "HUD__pf3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "bpGameMod__pf1380491225.h"
#include "bpPlayer__pf1380491225.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/Subsystem.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UHUD_C__pf3053510930::UHUD_C__pf3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__HealthBar__pf = nullptr;
	bpv__TextBlock_1__pf = nullptr;
	bpv__TextBlock_97__pf = nullptr;
	bpv__BpxPlayer__pfT = nullptr;
	bpv__BpxGamexMod__pfTT = nullptr;
	bpv__HP__pf = 0.000000f;
	bpv__CurrentCoins__pf = 0;
	bpv__CurrentScore__pf = 0;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHUD_C__pf3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UHUD_C__pf3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AbpGameMod_C__pf1380491225::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AbpPlayer_C__pf1380491225::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(3);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Left = 100.000000f;
	__Local__3->LayoutData.Offsets.Top = 80.000000f;
	__Local__3->LayoutData.Offsets.Right = 500.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UHorizontalBox>(__Local__0, TEXT("HealthBox"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UHorizontalBoxSlot>(__Local__4, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__6->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_63"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UVerticalBoxSlot>(__Local__7, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__9->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UProgressBar>(__Local__0, TEXT("HealthBar"), (EObjectFlags)0x00280008);
	__Local__10->Percent = 1.000000f;
	__Local__10->FillColorAndOpacity = FLinearColor(0.929167, 0.220786, 0.000000, 1.000000);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__11->LayoutData.Offsets.Left = 100.000000f;
	__Local__11->LayoutData.Offsets.Top = 180.000000f;
	__Local__11->LayoutData.Offsets.Right = 500.000000f;
	__Local__11->Parent = __Local__1;
	auto __Local__12 = NewObject<UHorizontalBox>(__Local__0, TEXT("ScoreBox"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(2);
	auto __Local__14 = NewObject<UHorizontalBoxSlot>(__Local__12, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_52"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3C013A94DA84E92A07A75BD52AF949F]\", \"35819752499B3F7EC22819939D7E282E\", \"Score: \")")	);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__16 = NewObject<UHorizontalBoxSlot>(__Local__12, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__16->Parent = __Local__12;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_97"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3C013A94DA84E92A07A75BD52AF949F]\", \"CC513FFB42C66E4E9E3FE1AB70FD4717\", \"0\")")	);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__13.Add(__Local__16);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__2.Add(__Local__11);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 100.000000f;
	__Local__18->LayoutData.Offsets.Top = 230.000000f;
	__Local__18->LayoutData.Offsets.Right = 500.000000f;
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UHorizontalBox>(__Local__0, TEXT("CoinBox"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(2);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__19, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3C013A94DA84E92A07A75BD52AF949F]\", \"9430682849E491F37910CB9D2EF61B00\", \"Coins: \")")	);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__19, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__23->Parent = __Local__19;
	auto __Local__24 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__24->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3C013A94DA84E92A07A75BD52AF949F]\", \"CC513FFB42C66E4E9E3FE1AB70FD4717\", \"0\")")	);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__20.Add(__Local__23);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__2.Add(__Local__18);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHUD_C__pf3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__25;
	SlotNames.Append(__Local__25);
}
void UHUD_C__pf3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__26;
	TArray<FDelegateRuntimeBinding>  __Local__27;
	__Local__27.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__27.GetData(), 3);
	auto& __Local__28 = __Local__27[0];
	__Local__28.ObjectName = FString(TEXT("TextBlock_1"));
	__Local__28.PropertyName = FName(TEXT("Text"));
	__Local__28.FunctionName = FName(TEXT("CoinBind"));
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__28.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__29 = TArray<FPropertyPathSegment> ();
	__Local__29.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__29.GetData(), 1);
	auto& __Local__30 = __Local__29[0];
	__Local__30.Name = FName(TEXT("CoinBind"));
	__Local__28.Kind = EBindingKind::Function;
	auto& __Local__31 = __Local__27[1];
	__Local__31.ObjectName = FString(TEXT("TextBlock_97"));
	__Local__31.PropertyName = FName(TEXT("Text"));
	__Local__31.FunctionName = FName(TEXT("ScoreBind"));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__31.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__32 = TArray<FPropertyPathSegment> ();
	__Local__32.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__32.GetData(), 1);
	auto& __Local__33 = __Local__32[0];
	__Local__33.Name = FName(TEXT("ScoreBind"));
	__Local__31.Kind = EBindingKind::Function;
	auto& __Local__34 = __Local__27[2];
	__Local__34.ObjectName = FString(TEXT("HealthBar"));
	__Local__34.PropertyName = FName(TEXT("Percent"));
	__Local__34.FunctionName = FName(TEXT("HealthBind"));
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__34.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__35 = TArray<FPropertyPathSegment> ();
	__Local__35.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__35.GetData(), 1);
	auto& __Local__36 = __Local__35[0];
	__Local__36.Name = FName(TEXT("HealthBind"));
	__Local__34.Kind = EBindingKind::Function;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UHUD_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__26, __Local__27);
}
void UHUD_C__pf3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UHUD_C__pf3053510930::bpf__ExecuteUbergraph_HUD__pf_0(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
	b0l__K2Node_DynamicCast_AsBp_Player__pf = Cast<AbpPlayer_C__pf1380491225>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBp_Player__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__BpxPlayer__pfT = b0l__K2Node_DynamicCast_AsBp_Player__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = Cast<AbpGameMod_C__pf1380491225>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__BpxGamexMod__pfTT = b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	return; // KCST_GotoReturn
}
void UHUD_C__pf3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_HUD__pf_0(3);
}
float  UHUD_C__pf3053510930::bpf__HealthBind__pf()
{
	float bpp__ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BpxPlayer__pfT);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				float  __Local__37 = 0.000000;
				float  __Local__38 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(((::IsValid(bpv__BpxPlayer__pfT)) ? (bpv__BpxPlayer__pfT->bpv__Health__pf) : (__Local__37)), ((::IsValid(bpv__BpxPlayer__pfT)) ? (bpv__BpxPlayer__pfT->bpv__MaxHealth__pf) : (__Local__38)));
				bpv__HP__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
			}
		case 3:
			{
				bpp__ReturnValue__pf = bpv__HP__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUD_C__pf3053510930::bpf__CoinBind__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32  __Local__39 = 0;
	bpv__CurrentCoins__pf = ((::IsValid(bpv__BpxGamexMod__pfTT)) ? (bpv__BpxGamexMod__pfTT->bpv__Coins__pf) : (__Local__39));
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__CurrentCoins__pf, false, true, 1, 324);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
FText  UHUD_C__pf3053510930::bpf__ScoreBind__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32  __Local__40 = 0;
	bpv__CurrentScore__pf = ((::IsValid(bpv__BpxGamexMod__pfTT)) ? (bpv__BpxGamexMod__pfTT->bpv__Score__pf) : (__Local__40));
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__CurrentScore__pf, false, true, 1, 324);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UHUD_C__pf3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UHUD_C__pf3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{87, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/enemyShip2.enemyShip2 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pPlayerThurster.pPlayerThurster 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Realistic_Starter_VFX_Pack_Vol2/Particles/Explosion/P_Explosion_Big_A.P_Explosion_Big_A 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Audio/Explosion.Explosion 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Audio/Shot.Shot 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectilePlayerPowered.bpProjectilePlayerPowered_C 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpProjectilePlayerPowered_C /Game/Blueprints/Projectiles/bpProjectilePlayerPowered.Default__bpProjectilePlayerPowered_C 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectilePlayerPrimary.bpProjectilePlayerPrimary_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpProjectilePlayerPrimary_C /Game/Blueprints/Projectiles/bpProjectilePlayerPrimary.Default__bpProjectilePlayerPrimary_C 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Realistic_Starter_VFX_Pack_Vol2/Particles/Explosion/P_Explosion_Big_B.P_Explosion_Big_B 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpCameraCheckExplosion.bpCameraCheckExplosion_C 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpCameraCheckExplosion_C /Game/Blueprints/Misc/bpCameraCheckExplosion.Default__bpCameraCheckExplosion_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/PowerUp.PowerUp 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RotatingMovementComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Materials/mPlayer.mPlayer 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Coin.Coin 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree4.tree4 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Button.Button 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ButtonDown.ButtonDown 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Audio/action.action 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EEndPlayReason 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraShakeBase 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Island.Island 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree.tree 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree2.tree2 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree3.tree3 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Projectile.Projectile 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pHitPlayer.pHitPlayer 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpCameraShakeCollision.bpCameraShakeCollision_C 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpCameraShakeCollision_C /Game/Blueprints/Misc/bpCameraShakeCollision.Default__bpCameraShakeCollision_C 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pHitEnemy.pHitEnemy 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpGameMod.bpGameMod_C 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpPlayer.bpPlayer_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UHUD_C__pf3053510930
{
	FRegisterHelper__UHUD_C__pf3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/UI/HUD"), &UHUD_C__pf3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UHUD_C__pf3053510930 Instance;
};
FRegisterHelper__UHUD_C__pf3053510930 FRegisterHelper__UHUD_C__pf3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
