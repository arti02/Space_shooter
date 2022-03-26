#include "NativizedAssets.h"
#include "BP_DemoRoom__pf2841444455.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
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
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_DemoRoom_C__pf2841444455::ABP_DemoRoom_C__pf2841444455(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Scene1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene1"));
	RootComponent = bpv__Scene1__pf;
	bpv__Scene1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene1__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Scene1__pf), false, 0));
	bpv__RoomSize__pf = 4;
	bpv__SectionWidth__pf = FVector(1000.000000, 0.000000, 0.000000);
	bpv__TrimWidth__pf = FVector(300.000000, 0.000000, 0.000000);
	bpv__MirrorRoom__pf = false;
	bpv__Lights__pf = true;
	bpv__LightRadius__pf = 3000.000000f;
	bpv__Brightness__pf = 4.000000f;
	bpv__DoubleHeight__pf = false;
	bpv__LoopMesh__pf = nullptr;
	bpv__OpenRoof__pf = false;
	bpv__NumberofRooms__pf = 1;
	bpv__SwitchColor__pf = false;
	bpv__GlassWalls__pf = false;
	bpv__RoomNames__pf = TArray<FString> ();
	bpv__RoomType__pf = TArray<E__BP_DemoRoom_Enum__pf> ();
	bpv__FrontDoor__pf = false;
	bpv__OpenBack__pf = false;
	bpv__CastShadows__pf = true;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_DemoRoom_C__pf2841444455::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene1__pf)
	{
		bpv__Scene1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_DemoRoom_C__pf2841444455::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum.BP_DemoRoom_Enum")));
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-1"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-2"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-3"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__6);
	auto __Local__7 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-4"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__7);
	auto __Local__8 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-5"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__8);
	auto __Local__9 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-6"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__9);
	auto __Local__10 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-7"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-8"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-9"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__12);
	auto __Local__13 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-10"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__13);
	auto __Local__14 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-11"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__14);
	auto __Local__15 = NewObject<UPointLightComponent>(InDynamicClass, UPointLightComponent::StaticClass(), TEXT("NODE_AddPointLightComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__15);
	auto __Local__16 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-12"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__16);
	auto __Local__17 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-13"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__17);
	auto __Local__18 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-14"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__18);
	auto __Local__19 = NewObject<UTextRenderComponent>(InDynamicClass, UTextRenderComponent::StaticClass(), TEXT("NODE_AddTextRenderComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__19);
	auto __Local__20 = NewObject<UTextRenderComponent>(InDynamicClass, UTextRenderComponent::StaticClass(), TEXT("NODE_AddTextRenderComponent-1"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__20);
	auto __Local__21 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto& __Local__22 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__3), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__22 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__3->bCastShadowAsTwoSided = true;
	auto& __Local__23 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__3->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__23 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__24 = (*(AccessPrivateProperty<FName >(&(__Local__3->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__24 = FName(TEXT("BlockAll"));
	__Local__3->BodyInstance.bAutoWeld = false;
	__Local__3->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__26{};
	const FProperty* __Local__25 = __Local__26.Get();
	if (nullptr == __Local__25)
	{
		__Local__25 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__25);
		__Local__26 = __Local__25;
	}
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__3), true, 0));
	auto& __Local__27 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__4), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__27 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__4->bCastShadowAsTwoSided = true;
	auto& __Local__28 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__28 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__29 = (*(AccessPrivateProperty<FName >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__29 = FName(TEXT("BlockAll"));
	__Local__4->BodyInstance.bAutoWeld = false;
	__Local__4->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__4), true, 0));
	auto& __Local__30 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__5), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__30 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__5->bReceivesDecals = false;
	__Local__5->bCastShadowAsTwoSided = true;
	auto& __Local__31 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__5->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__31 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__32 = (*(AccessPrivateProperty<FName >(&(__Local__5->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__32 = FName(TEXT("BlockAll"));
	__Local__5->BodyInstance.bAutoWeld = false;
	__Local__5->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__5), true, 0));
	auto& __Local__33 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__6), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__33 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__6->bReceivesDecals = false;
	__Local__6->bCastShadowAsTwoSided = true;
	auto& __Local__34 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__34 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__35 = (*(AccessPrivateProperty<FName >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__35 = FName(TEXT("BlockAll"));
	__Local__6->BodyInstance.bAutoWeld = false;
	__Local__6->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__6), true, 0));
	auto& __Local__36 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__7), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__36 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__7->bReceivesDecals = false;
	__Local__7->bCastShadowAsTwoSided = true;
	auto& __Local__37 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__7->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__37 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__38 = (*(AccessPrivateProperty<FName >(&(__Local__7->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__38 = FName(TEXT("BlockAll"));
	__Local__7->BodyInstance.bAutoWeld = false;
	__Local__7->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__7), true, 0));
	auto& __Local__39 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__8), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__39 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__8->bReceivesDecals = false;
	__Local__8->bCastShadowAsTwoSided = true;
	auto& __Local__40 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__8->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__40 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__41 = (*(AccessPrivateProperty<FName >(&(__Local__8->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__41 = FName(TEXT("BlockAll"));
	__Local__8->BodyInstance.bAutoWeld = false;
	__Local__8->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__8), true, 0));
	auto& __Local__42 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__9), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__42 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__9->bCastShadowAsTwoSided = true;
	auto& __Local__43 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__9->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__43 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__44 = (*(AccessPrivateProperty<FName >(&(__Local__9->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__44 = FName(TEXT("BlockAll"));
	__Local__9->BodyInstance.bAutoWeld = false;
	__Local__9->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__9), true, 0));
	auto& __Local__45 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__10), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__45 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__10->bCastShadowAsTwoSided = true;
	auto& __Local__46 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__10->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__46 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__47 = (*(AccessPrivateProperty<FName >(&(__Local__10->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__47 = FName(TEXT("BlockAll"));
	__Local__10->BodyInstance.bAutoWeld = false;
	__Local__10->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__10), true, 0));
	auto& __Local__48 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__11), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__48 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__11->bCastShadowAsTwoSided = true;
	auto& __Local__49 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__11->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__49 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__50 = (*(AccessPrivateProperty<FName >(&(__Local__11->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__50 = FName(TEXT("BlockAll"));
	__Local__11->BodyInstance.bAutoWeld = false;
	__Local__11->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__11), true, 0));
	auto& __Local__51 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__12), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__51 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__12->bCastShadowAsTwoSided = true;
	auto& __Local__52 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__12->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__52 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__53 = (*(AccessPrivateProperty<FName >(&(__Local__12->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__53 = FName(TEXT("BlockAll"));
	__Local__12->BodyInstance.bAutoWeld = false;
	__Local__12->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__12), true, 0));
	auto& __Local__54 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__13), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__54 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__13->bCastShadowAsTwoSided = true;
	auto& __Local__55 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__13->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__55 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__56 = (*(AccessPrivateProperty<FName >(&(__Local__13->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__56 = FName(TEXT("BlockAll"));
	__Local__13->BodyInstance.bAutoWeld = false;
	__Local__13->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__13), true, 0));
	auto& __Local__57 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__14), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__57 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__14->bCastShadowAsTwoSided = true;
	auto& __Local__58 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__14->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__58 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__59 = (*(AccessPrivateProperty<FName >(&(__Local__14->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__59 = FName(TEXT("BlockAll"));
	__Local__14->BodyInstance.bAutoWeld = false;
	__Local__14->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__14), true, 0));
	__Local__15->bUseInverseSquaredFalloff = false;
	__Local__15->LightFalloffExponent = 3.000000f;
	__Local__15->AttenuationRadius = 1024.000000f;
	__Local__15->Intensity = 3.141593f;
	__Local__15->Mobility = EComponentMobility::Type::Stationary;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__15), false, 0));
	auto& __Local__60 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__16), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__60 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__16->bCastShadowAsTwoSided = true;
	auto& __Local__61 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__16->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__61 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__62 = (*(AccessPrivateProperty<FName >(&(__Local__16->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__62 = FName(TEXT("BlockAll"));
	__Local__16->BodyInstance.bAutoWeld = false;
	__Local__16->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__16), true, 0));
	auto& __Local__63 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__17), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__63 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__17->bReceivesDecals = false;
	__Local__17->bCastShadowAsTwoSided = true;
	auto& __Local__64 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__64 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__65 = (*(AccessPrivateProperty<FName >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__65 = FName(TEXT("BlockAll"));
	__Local__17->BodyInstance.bAutoWeld = false;
	__Local__17->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__17), true, 0));
	auto& __Local__66 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__18), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__66 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__18->bReceivesDecals = false;
	__Local__18->bCastShadowAsTwoSided = true;
	auto& __Local__67 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__67 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__68 = (*(AccessPrivateProperty<FName >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__68 = FName(TEXT("BlockAll"));
	__Local__18->BodyInstance.bAutoWeld = false;
	__Local__18->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__18), true, 0));
	__Local__19->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__19->VerticalAlignment = EVerticalTextAligment::EVRTA_TextTop;
	__Local__19->TextRenderColor = FColor(181, 60, 0, 255);
	__Local__19->XScale = 5.000000f;
	__Local__19->YScale = 5.000000f;
	auto& __Local__69 = (*(AccessPrivateProperty<FVector >((__Local__19), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__69 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__19), false, 0));
	__Local__20->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__20->HorizontalAlignment = EHorizTextAligment::EHTA_Right;
	__Local__20->VerticalAlignment = EVerticalTextAligment::EVRTA_TextTop;
	__Local__20->TextRenderColor = FColor(181, 60, 0, 255);
	__Local__20->XScale = 5.000000f;
	__Local__20->YScale = 5.000000f;
	auto& __Local__70 = (*(AccessPrivateProperty<FVector >((__Local__20), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__70 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__20), false, 0));
	(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__21), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_DemoRoom_C__pf2841444455::bpf__UserConstructionScript__pf()
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpv__NumberofRooms__pf, 1, 30);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Clamp_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				__StateStack.Push(15);
			}
		case 4:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddRoomNames__pf(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
			}
		case 5:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddLoopSections__pf(FVector(1.000000,1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
			}
		case 6:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddTrim__pf(FVector(1.000000,1.000000,1.000000), bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
			}
		case 7:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddWall__pf(FVector(1.000000,1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
			}
		case 8:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddLights__pf(0, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
			}
		case 9:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddOpenTrim__pf(FVector(1.000000,1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
			}
		case 10:
			{
				if (!bpv__MirrorRoom__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 11:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddLoopSections__pf(FVector(1.000000,-1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
			}
		case 12:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddTrim__pf(FVector(1.000000,-1.000000,1.000000), bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
			}
		case 13:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddWall__pf(FVector(1.000000,-1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
			}
		case 14:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddOpenTrim__pf(FVector(1.000000,-1.000000,1.000000), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		case 16:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddBackWall__pf(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
			}
		case 17:
			{
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpf__AddClamp__pf(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddLoopSections__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf)
{
	int32 bpfv__Temp_int_Variable__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	E__BP_DemoRoom_Enum__pf bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue_4__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__RoomSize__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 50);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				__StateStack.Push(12);
			}
		case 4:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpv__TrimWidth__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpp__Scale__pf);
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-0")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpp__Index__pf, bpv__RoomSize__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__RoomType__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpp__Index__pf, bpv__RoomSize__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__RoomType__pf, bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item__pf), static_cast<uint8>(E__BP_DemoRoom_Enum__pf::RoofOpen));
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item__pf), static_cast<uint8>(E__BP_DemoRoom_Enum__pf::RoofwithHole));
				bpfv__CallFunc_SelectObject_ReturnValue_2__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf);
				bpfv__CallFunc_SelectObject_ReturnValue_3__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), bpfv__CallFunc_SelectObject_ReturnValue_2__pf, bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf);
				bpfv__CallFunc_SelectObject_ReturnValue_4__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), bpfv__CallFunc_SelectObject_ReturnValue_3__pf, bpv__DoubleHeight__pf);
				bpfv__CallFunc_SelectObject_ReturnValue_5__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), bpfv__CallFunc_SelectObject_ReturnValue_4__pf, bpv__OpenRoof__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh_1__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue_5__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh_1__pf);
				}
			}
		case 8:
			{
				if (!bpv__SwitchColor__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), FLinearColor(0.030000,0.030000,0.030000,1.000000));
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Roughness")), 0.500000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_SelectObject_ReturnValue__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpv__DoubleHeight__pf);
				bpfv__CallFunc_SelectObject_ReturnValue_1__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), bpfv__CallFunc_SelectObject_ReturnValue__pf, bpv__OpenRoof__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddBackWall__pf(float bpp__Offset__pf)
{
	UObject* bpfv__CallFunc_SelectObject_ReturnValue__pf{};
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RoomSize__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpv__TrimWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FVector(1750.000000,1.000000,1.000000));
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, bpp__Offset__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, 1.000000, 1.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-1")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				bpfv__CallFunc_SelectObject_ReturnValue__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpv__DoubleHeight__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddClamp__pf(float bpp__Offset__pf, int32 bpp__Index__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_SelectObject_ReturnValue__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpv__DoubleHeight__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__Offset__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-2")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
			}
		case 4:
			{
				if (!bpv__OpenBack__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 31);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RoomSize__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__TrimWidth__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-3")), false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpfv__CallFunc_AddComponent_ReturnValue_1__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddTrim__pf(FVector bpp__Scale__pf, int32 bpp__Index__pf, float bpp__Offset__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_SelectObject_ReturnValue__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpv__DoubleHeight__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__Offset__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpp__Scale__pf);
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-4")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
			}
		case 4:
			{
				if (!bpv__OpenBack__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 31);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RoomSize__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__TrimWidth__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, bpp__Offset__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, FRotator(0.000000,0.000000,0.000000), bpp__Scale__pf);
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-5")), false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpfv__CallFunc_AddComponent_ReturnValue_1__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddWall__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf)
{
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_BoolBool_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_BoolBool_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_3__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	UObject* bpfv__CallFunc_SelectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	UStaticMesh* bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_3__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_5__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_SelectObject_ReturnValue__pf = UKismetMathLibrary::SelectObject(CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed), CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), bpv__DoubleHeight__pf);
				bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf = Cast<UStaticMesh>(bpfv__CallFunc_SelectObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				__StateStack.Push(25);
				__StateStack.Push(20);
				__StateStack.Push(11);
			}
		case 3:
			{
				bpfv__CallFunc_NotEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::NotEqual_BoolBool(bpv__FrontDoor__pf, true);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, 0);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, bpfv__CallFunc_NotEqual_BoolBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpp__Offset__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpp__Scale__pf, FVector(-1.000000,1.000000,1.000000));
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_AddComponent_ReturnValue_2__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-6")), false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue_2__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
			}
		case 6:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_2__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 8:
			{
				if (!bpv__GlassWalls__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_2__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_NotEqual_BoolBool_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_BoolBool(bpv__OpenBack__pf, true);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 31);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_NotEqual_BoolBool_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RoomSize__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__TrimWidth__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__TrimWidth__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_X_1__pf, bpp__Offset__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_3__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_2__pf, FRotator(0.000000,0.000000,0.000000), bpp__Scale__pf);
				bpfv__CallFunc_AddComponent_ReturnValue_5__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-7")), false, bpfv__CallFunc_MakeTransform_ReturnValue_3__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 13:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_5__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpfv__CallFunc_AddComponent_ReturnValue_5__pf->SetStaticMesh(bpfv__K2Node_DynamicCast_AsStatic_Mesh__pf);
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_5__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_5__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
				}
			}
		case 15:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_5__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_5__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 17:
			{
				if (!bpv__GlassWalls__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 19:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_5__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_5__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpp__Index__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				if (!bpv__MirrorRoom__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 23:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, 150.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpp__Scale__pf, FVector(-1.000000,1.000000,1.000000));
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-9")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, 150.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpp__Scale__pf, FVector(-1.000000,1.000000,1.000000));
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-8")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				if (!bpv__FrontDoor__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				if (!bpv__MirrorRoom__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(FVector(150.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(-1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue_3__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-11")), false, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, this, false), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(FVector(150.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(-1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue_4__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-10")), false, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, this, false), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_2__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_5__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_5__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DemoRoom_C__pf2841444455::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddLights__pf(int32 bpp__Index__pf, float bpp__Offset__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FVector bpfv__CallFunc_SelectVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Fraction_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	UPointLightComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__Lights__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 1;
			}
		case 3:
			{
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 2000.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_FFloor_ReturnValue__pf, 1, 50);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(10);
			}
		case 5:
			{
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_SelectVector_ReturnValue__pf = UKismetMathLibrary::SelectVector(FVector(0.000000,0.000000,375.000000), FVector(0.000000,-850.000000,375.000000), bpv__MirrorRoom__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 2000.000000);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__RoomSize__pf, 1);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 2000.000000);
				bpfv__CallFunc_Fraction_ReturnValue__pf = UKismetMathLibrary::Fraction(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Fraction_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Fraction_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, 300.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf, bpp__Offset__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_SelectVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UPointLightComponent>(AActor::AddComponent(FName(TEXT("NODE_AddPointLightComponent-0")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__LightRadius__pf, 2.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->ULocalLightComponent::SetAttenuationRadius(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->ULightComponent::SetIntensity(bpv__Brightness__pf);
				}
			}
		case 8:
			{
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(150.000000, bpfv__CallFunc_BreakVector_X_1__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UPointLightComponent::SetSourceRadius(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				}
			}
		case 9:
			{
				if (!bpv__CastShadows__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 11:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->ULightComponentBase::SetCastShadows(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddOpenTrim__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__OpenRoof__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, 300.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, 1.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, 1.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MakeVector_ReturnValue_2__pf);
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-12")), false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				UKismetMathLibrary::BreakVector(bpp__Scale__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__Offset__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-13")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 31);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RoomSize__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__SectionWidth__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__TrimWidth__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_X_1__pf, bpp__Offset__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_3__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue_2__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-14")), false, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, this, false), ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_DemoRoom_C__pf2841444455::bpf__AddRoomNames__pf(int32 bpp__Index__pf, float bpp__Offset__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	UTextRenderComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FString bpfv__CallFunc_Array_Get_Item__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	UTextRenderComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Index__pf, 0);
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(0.000000, -70.000000, bpv__MirrorRoom__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpp__Index__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_2__pf = UKismetMathLibrary::SelectFloat(160.000000, 2.500000, bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_3__pf = UKismetMathLibrary::SelectFloat(2.500000, bpfv__CallFunc_SelectFloat_ReturnValue_2__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, bpfv__CallFunc_SelectFloat_ReturnValue_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf, 475.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(0.500000,0.500000,0.500000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UTextRenderComponent>(AActor::AddComponent(FName(TEXT("NODE_AddTextRenderComponent-0")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				UKismetMathLibrary::BreakVector(bpv__SectionWidth__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(40.000000, -110.000000, bpv__MirrorRoom__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__NumberofRooms__pf, 1);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__RoomSize__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpp__Index__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Less_IntInt_ReturnValue__pf, bpv__OpenBack__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_4__pf = UKismetMathLibrary::SelectFloat(440.000000, 600.000000, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue_4__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.500000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpp__Offset__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf, 475.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, FRotator(0.000000,180.000000,0.000000), FVector(0.500000,0.500000,0.500000));
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<UTextRenderComponent>(AActor::AddComponent(FName(TEXT("NODE_AddTextRenderComponent-1")), false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__RoomNames__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, bpp__Index__pf);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(bpv__RoomNames__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UTextRenderComponent::SetText(bpfv__CallFunc_Array_Get_Item__pf);
				}
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_1__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_1__pf->UTextRenderComponent::SetText(bpfv__CallFunc_Array_Get_Item__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UTextRenderComponent::SetText(FString(TEXT("")));
				}
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue_1__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue_1__pf->UTextRenderComponent::SetText(FString(TEXT("")));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_DemoRoom_C__pf2841444455::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomU.SM_DemoRoomU 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomBackWall.SM_DemoRoomBackWall 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomClamp.SM_DemoRoomClamp 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomTrim.SM_DemoRoomTrim 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_URoom_Wall.SM_URoom_Wall 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoDivider_1.SM_DemoDivider_1 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoDivider_2.SM_DemoDivider_2 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomLTrim.SM_DemoRoomLTrim 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomTrimAdd.SM_DemoRoomTrimAdd 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/DefaultTextMaterialTranslucentUnlit.DefaultTextMaterialTranslucentUnlit 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomL.SM_DemoRoomL 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomU_Hole.SM_DemoRoomU_Hole 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomU2.SM_DemoRoomU2 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/M_DemoRoomTiles_Inst.M_DemoRoomTiles_Inst 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomBackWall2.SM_DemoRoomBackWall2 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomClamp2.SM_DemoRoomClamp2 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_DemoRoomTrim2.SM_DemoRoomTrim2 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Meshes/SM_URoom_Wall2.SM_URoom_Wall2 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/M_DemoWallPattern_NoText.M_DemoWallPattern_NoText 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/M_Glass.M_Glass 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/M_DemoWallPattern_Inst_Mirrored.M_DemoWallPattern_Inst_Mirrored 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/Materials/M_Glass_Inst.M_Glass_Inst 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_DemoRoom_C__pf2841444455::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{153, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LocalLightComponent 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponentBase 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{155, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum.BP_DemoRoom_Enum 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_DemoRoom_C__pf2841444455
{
	FRegisterHelper__ABP_DemoRoom_C__pf2841444455()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom"), &ABP_DemoRoom_C__pf2841444455::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_DemoRoom_C__pf2841444455 Instance;
};
FRegisterHelper__ABP_DemoRoom_C__pf2841444455 FRegisterHelper__ABP_DemoRoom_C__pf2841444455::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
