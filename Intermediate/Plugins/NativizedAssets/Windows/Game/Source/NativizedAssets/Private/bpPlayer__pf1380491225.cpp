#include "NativizedAssets.h"
#include "bpPlayer__pf1380491225.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "HUD__pf3053510930.h"
#include "QuitGame__pf3053510930.h"
#include "bpGameMod__pf1380491225.h"
#include "BpEnemyBase__pf2680686903.h"
#include "bpProjectileEnemy__pf4197612240.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "bpProjectilePlayerRocket__pf4197612240.h"
#include "bpProjectilePlayerBase__pf4197612240.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AbpPlayer_C__pf1380491225::AbpPlayer_C__pf1380491225(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__PlayerCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerCollision"));
	bpv__RotationOffset__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RotationOffset"));
	bpv__playerMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("playerMesh"));
	bpv__ProjectileSpawn__pf = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawn"));
	bpv__ParticleSystem__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	RootComponent = bpv__PlayerCollision__pf;
	bpv__PlayerCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__PlayerCollision__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__0 = FVector(120.315681, 288.115753, 89.151466);
	bpv__PlayerCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__1 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__PlayerCollision__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__1 = ECollisionChannel::ECC_Pawn;
	auto& __Local__2 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__PlayerCollision__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__2), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__3 = TArray<FResponseChannel> ();
	__Local__3.AddUninitialized(5);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__3.GetData(), 5);
	auto& __Local__4 = __Local__3[0];
	__Local__4.Channel = FName(TEXT("Visibility"));
	__Local__4.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__5 = __Local__3[1];
	__Local__5.Channel = FName(TEXT("Camera"));
	__Local__5.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__6 = __Local__3[2];
	__Local__6.Channel = FName(TEXT("Enemy"));
	__Local__6.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__7 = __Local__3[3];
	__Local__7.Channel = FName(TEXT("Projectile"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__8 = __Local__3[4];
	__Local__8.Channel = FName(TEXT("Pickup"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	bpv__PlayerCollision__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	static TWeakFieldPtr<FProperty> __Local__10{};
	const FProperty* __Local__9 = __Local__10.Get();
	if (nullptr == __Local__9)
	{
		__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__9);
		__Local__10 = __Local__9;
	}
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__PlayerCollision__pf), true, 0));
	bpv__RotationOffset__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RotationOffset__pf->AttachToComponent(bpv__PlayerCollision__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<FRotator >((bpv__RotationOffset__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__11 = FRotator(0.000000, 180.000000, 0.000000);
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__RotationOffset__pf), false, 0));
	bpv__playerMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__playerMesh__pf->AttachToComponent(bpv__RotationOffset__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__playerMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__playerMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__playerMesh__pf->OverrideMaterials.Reserve(1);
	bpv__playerMesh__pf->OverrideMaterials.Add(nullptr);
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__playerMesh__pf), true, 0));
	bpv__ProjectileSpawn__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProjectileSpawn__pf->AttachToComponent(bpv__PlayerCollision__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__ProjectileSpawn__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(0.000000, 560.000000, 0.000000);
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__ProjectileSpawn__pf), false, 0));
	bpv__ParticleSystem__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ParticleSystem__pf->AttachToComponent(bpv__PlayerCollision__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ParticleSystem__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__ParticleSystem__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000000, -400.000000, 0.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<FRotator >((bpv__ParticleSystem__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__15 = FRotator(0.000000, 0.000000, -90.000000);
	bpv__ParticleSystem__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__ParticleSystem__pf), false, 0));
	bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf = 0.000000f;
	bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf = ETimelineDirection::Type::Forward;
	bpv__SpawnAnimation__pf = nullptr;
	bpv__bHasPower__pf = false;
	bpv__bMovementEnabled__pf = false;
	bpv__bHasRockets__pf = false;
	bpv__vSpawnLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__MovementSpeed__pf = 4000.000000f;
	bpv__CurrentSpeed__pf = 0.000000f;
	bpv__DeltaSeconds__pf = 0.000000f;
	bpv__HorizontalSpeed__pf = 0.000000f;
	bpv__VerticalSpeed__pf = 0.000000f;
	bpv__Pitch__pf = 0.000000f;
	bpv__MaxHealth__pf = 100.000000f;
	bpv__Health__pf = 0.000000f;
	bpv__PrimaryFireRateBase__pf = 0.200000f;
	bpv__PrimaryFireRate__pf = 0.000000f;
	bpv__RocketFireRateBase__pf = 1.000000f;
	bpv__RocketFireRate__pf = 1.000000f;
	bpv__rSpawnRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__AnimationPitch__pf = 720.000000f;
	bpv__iRocketShots__pf = 1;
	bpv__HUDreference__pf = nullptr;
	bpv__GameOverReverence__pf = nullptr;
	auto& __Local__16 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__16 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AbpPlayer_C__pf1380491225::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__PlayerCollision__pf)
	{
		bpv__PlayerCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RotationOffset__pf)
	{
		bpv__RotationOffset__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__playerMesh__pf)
	{
		bpv__playerMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ProjectileSpawn__pf)
	{
		bpv__ProjectileSpawn__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ParticleSystem__pf)
	{
		bpv__ParticleSystem__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AbpPlayer_C__pf1380491225::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UHUD_C__pf3053510930::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UQuitGame_C__pf3053510930::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AbpGameMod_C__pf1380491225::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABpEnemyBase_C__pf2680686903::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AbpProjectileEnemy_C__pf4197612240::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AbpProjectilePlayerRocket_C__pf4197612240::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__17 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__17);
	auto __Local__18 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("SpawnAnimation_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__18);
	auto __Local__19 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__19);
	auto __Local__20 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__20);
	auto __Local__21 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__21);
	static TWeakFieldPtr<FProperty> __Local__23{};
	const FProperty* __Local__22 = __Local__23.Get();
	if (nullptr == __Local__22)
	{
		__Local__22 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__22);
		__Local__23 = __Local__22;
	}
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((__Local__17), false, 0));
	__Local__18->TimelineLength = 1.000000f;
	__Local__18->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__18->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__18->FloatTracks.GetData(), 1);
	auto& __Local__24 = __Local__18->FloatTracks[0];
	auto __Local__25 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__25);
	__Local__25->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__25->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__25->FloatCurve.Keys.GetData(), 2);
	auto& __Local__26 = __Local__25->FloatCurve.Keys[0];
	__Local__26.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__26.TangentMode = ERichCurveTangentMode::RCTM_User;
	__Local__26.ArriveTangent = 2.580223f;
	__Local__26.LeaveTangent = 2.580223f;
	auto& __Local__27 = __Local__25->FloatCurve.Keys[1];
	__Local__27.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__27.Time = 1.000000f;
	__Local__27.Value = 1.000000f;
	__Local__24.CurveFloat = __Local__25;
	auto& __Local__28 = (*(AccessPrivateProperty<FName >(&(__Local__24), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__28 = FName(TEXT("SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04"));
	auto& __Local__29 = (*(AccessPrivateProperty<FName >(&(__Local__24), FTTTrackBase::__PPO__TrackName() )));
	__Local__29 = FName(TEXT("Spawn"));
	__Local__18->TimelineGuid = FGuid(0x2153BADE, 0x47325A13, 0xE9CCE8A0, 0xC577AC04);
	auto& __Local__30 = (*(AccessPrivateProperty<FName >((__Local__18), UTimelineTemplate::__PPO__VariableName() )));
	__Local__30 = FName(TEXT("SpawnAnimation"));
	auto& __Local__31 = (*(AccessPrivateProperty<FName >((__Local__18), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__31 = FName(TEXT("SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04"));
	auto& __Local__32 = (*(AccessPrivateProperty<FName >((__Local__18), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__32 = FName(TEXT("SpawnAnimation__UpdateFunc"));
	auto& __Local__33 = (*(AccessPrivateProperty<FName >((__Local__18), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__33 = FName(TEXT("SpawnAnimation__FinishedFunc"));
	__Local__19->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__19->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__19->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__34 = __Local__19->ComponentDelegateBindings[0];
	__Local__34.ComponentPropertyName = FName(TEXT("PlayerCollision"));
	__Local__34.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__34.FunctionNameToBind = FName(TEXT("BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
	__Local__20->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__20->InputActionDelegateBindings.AddUninitialized(4);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__20->InputActionDelegateBindings.GetData(), 4);
	auto& __Local__35 = __Local__20->InputActionDelegateBindings[0];
	__Local__35.InputActionName = FName(TEXT("PtimaryFire"));
	__Local__35.InputKeyEvent = EInputEvent::IE_Released;
	__Local__35.FunctionNameToBind = FName(TEXT("InpActEvt_PtimaryFire_K2Node_InputActionEvent_1"));
	auto& __Local__36 = __Local__20->InputActionDelegateBindings[1];
	__Local__36.InputActionName = FName(TEXT("PtimaryFire"));
	__Local__36.FunctionNameToBind = FName(TEXT("InpActEvt_PtimaryFire_K2Node_InputActionEvent_0"));
	auto& __Local__37 = __Local__20->InputActionDelegateBindings[2];
	__Local__37.InputActionName = FName(TEXT("RocketFire"));
	__Local__37.InputKeyEvent = EInputEvent::IE_Released;
	__Local__37.FunctionNameToBind = FName(TEXT("InpActEvt_RocketFire_K2Node_InputActionEvent_3"));
	auto& __Local__38 = __Local__20->InputActionDelegateBindings[3];
	__Local__38.InputActionName = FName(TEXT("RocketFire"));
	__Local__38.FunctionNameToBind = FName(TEXT("InpActEvt_RocketFire_K2Node_InputActionEvent_2"));
	__Local__21->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__21->InputAxisDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__21->InputAxisDelegateBindings.GetData(), 2);
	auto& __Local__39 = __Local__21->InputAxisDelegateBindings[0];
	__Local__39.InputAxisName = FName(TEXT("MoveUp"));
	__Local__39.bOverrideParentBinding = false;
	auto& __Local__40 = __Local__21->InputAxisDelegateBindings[1];
	__Local__40.InputAxisName = FName(TEXT("MoveRight"));
	__Local__40.bOverrideParentBinding = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 87:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_ComponentBoundEvent_Hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				UKismetMathLibrary::BreakVector(b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpv__VerticalSpeed__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, 1.500000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				bpv__VerticalSpeed__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf;
				__CurrentState = -1;
				break;
			}
		case 108:
			{
				__CurrentState = 109;
				break;
			}
		case 109:
			{
				b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf = Cast<AbpProjectileEnemy_C__pf4197612240>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 111;
					break;
				}
			}
		case 110:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_ComponentBoundEvent_Hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpv__HorizontalSpeed__pf);
				UKismetMathLibrary::BreakVector(b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 1.500000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_BreakVector_Y__pf);
				bpv__HorizontalSpeed__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf;
				__CurrentState = 87;
				break;
			}
		case 111:
			{
				b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf = Cast<ABpEnemyBase_C__pf2680686903>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 110;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				__StateStack.Push(21);
			}
		case 19:
			{
				__StateStack.Push(27);
			}
		case 20:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				bpv__PrimaryFireRate__pf = bpv__PrimaryFireRateBase__pf;
			}
		case 23:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__bHasPower__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 24:
			{
				bpf__PrimaryFire__pf(bpv__ProjectileSpawn__pf);
			}
		case 25:
			{
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpf__PowerUpFire__pf(4, bpv__ProjectileSpawn__pf);
				__CurrentState = 25;
				break;
			}
		case 27:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_2__pf)
				{
					__CurrentState = 28;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
			}
		case 29:
			{
				if (!true)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 30:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
			}
		case 33:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 1;
				break;
			}
		case 36:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 35;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				__StateStack.Push(38);
				__CurrentState = 19;
				break;
			}
		case 38:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				__StateStack.Push(40);
				__CurrentState = 19;
				break;
			}
		case 40:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				__CurrentState = 42;
				break;
			}
		case 42:
			{
				b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
			}
		case 43:
			{
				__StateStack.Push(50);
			}
		case 44:
			{
				__StateStack.Push(45);
				__CurrentState = 36;
				break;
			}
		case 45:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 46;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 47:
			{
				if (!true)
				{
					__CurrentState = 49;
					break;
				}
			}
		case 48:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				__StateStack.Push(52);
				__CurrentState = 44;
				break;
			}
		case 52:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 53:
			{
				bpv__RocketFireRate__pf = bpv__RocketFireRateBase__pf;
			}
		case 54:
			{
				if (!bpv__bHasRockets__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				bpf__RocketFire__pf(bpv__iRocketShots__pf, ((USceneComponent*)nullptr));
			}
		case 56:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__HorizontalSpeed__pf, 20.000000);
				bpv__HorizontalSpeed__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				__StateStack.Push(57);
				__CurrentState = 44;
				break;
			}
		case 59:
			{
				__CurrentState = 60;
				break;
			}
		case 60:
			{
				b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
				__CurrentState = 58;
				break;
			}
		case 89:
			{
				__CurrentState = 90;
				break;
			}
		case 90:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key__pf;
				__CurrentState = 37;
				break;
			}
		case 91:
			{
				__StateStack.Push(94);
			}
		case 92:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PrimaryFireRate__pf, bpv__DeltaSeconds__pf);
				bpv__PrimaryFireRate__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 93:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__PrimaryFireRate__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 18;
				break;
			}
		case 94:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__RocketFireRate__pf, bpv__DeltaSeconds__pf);
				bpv__RocketFireRate__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf;
			}
		case 95:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__RocketFireRate__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 51;
				break;
			}
		case 103:
			{
				__CurrentState = 91;
				break;
			}
		case 104:
			{
				__CurrentState = 105;
				break;
			}
		case 105:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
				__CurrentState = 39;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_2(int32 bpp__EntryPoint__pf)
{
	UQuitGame_C__pf3053510930* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 96);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, b0l__K2Node_Event_Damage__pf);
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf, 0.000000, bpv__MaxHealth__pf);
	bpv__Health__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Health__pf, 0.000000);
	if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = Cast<AbpGameMod_C__pf1380491225>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf))
	{
		b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf->bpv__bPlayerDead__pf = true;
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<UQuitGame_C__pf3053510930>(UWidgetBlueprintLibrary::Create(this, UQuitGame_C__pf3053510930::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpv__GameOverReverence__pf = bpfv__CallFunc_Create_ReturnValue_1__pf;
	if(::IsValid(bpv__GameOverReverence__pf))
	{
		bpv__GameOverReverence__pf->UUserWidget::AddToViewport(0);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpfv__CallFunc_Create_ReturnValue_1__pf, EMouseLockMode::DoNotLock, false);
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), true, EPSCPoolMethod::None, true);
	UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	K2_DestroyActor();
	return; //KCST_EndOfThread
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 107);
	// optimized KCST_UnconditionalGoto
	bpv__bMovementEnabled__pf = true;
	return; //KCST_EndOfThread
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RLerp_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue_2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 61:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 62;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 63:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue_1__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf = Cast<AbpGameMod_C__pf1380491225>(bpfv__CallFunc_GetGameMode_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 64:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf))
				{
					b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf->bpf__SpawnIsland__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				__StateStack.Push(61);
			}
		case 67:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_2__pf)
				{
					__CurrentState = 68;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = true;
			}
		case 69:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 65;
				break;
			}
		case 101:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__AnimationPitch__pf, bpv__Pitch__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_RLerp_ReturnValue__pf = UKismetMathLibrary::RLerp(bpv__rSpawnRotation__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf, false);
				if(::IsValid(bpv__playerMesh__pf))
				{
					bpv__playerMesh__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_RLerp_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf, false);
				}
				__CurrentState = 66;
				break;
			}
		case 102:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__vSpawnLocation__pf, FVector(0.000000,1000.000000,0.000000));
				bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(bpv__vSpawnLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf);
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue_2__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_VLerp_ReturnValue__pf, true, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf, false);
				__CurrentState = 101;
				break;
			}
		case 106:
			{
				__CurrentState = 102;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_5(int32 bpp__EntryPoint__pf)
{
	UHUD_C__pf3053510930* bpfv__CallFunc_Create_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UHUD_C__pf3053510930>(UWidgetBlueprintLibrary::Create(this, UHUD_C__pf3053510930::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				bpv__HUDreference__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 5:
			{
				if(::IsValid(bpv__HUDreference__pf))
				{
					bpv__HUDreference__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 6:
			{
				FRotator  __Local__41 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((::IsValid(bpv__playerMesh__pf)) ? ((*(AccessPrivateProperty<FRotator >((bpv__playerMesh__pf), USceneComponent::__PPO__RelativeRotation() )))) : (__Local__41)), /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpv__Pitch__pf = b0l__CallFunc_BreakRotator_Pitch__pf;
			}
		case 7:
			{
				if(::IsValid(bpv__playerMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__playerMesh__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpv__rSpawnRotation__pf = bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf;
			}
		case 8:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpv__vSpawnLocation__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
			}
		case 9:
			{
				if(::IsValid(bpv__SpawnAnimation__pf))
				{
					bpv__SpawnAnimation__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 70:
			{
				__CurrentState = 71;
				break;
			}
		case 71:
			{
				bpv__Health__pf = bpv__MaxHealth__pf;
			}
		case 72:
			{
				bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
			}
		case 73:
			{
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf, FString(TEXT("Menu")));
				if (!bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__ExecuteUbergraph_bpPlayer__pf_6(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RInterpTo_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				bpv__DeltaSeconds__pf = b0l__K2Node_Event_DeltaSeconds__pf;
			}
		case 76:
			{
				if (!bpv__bMovementEnabled__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 77:
			{
				bpf__FireRateControl__pf();
			}
		case 78:
			{
				__StateStack.Push(81);
				__StateStack.Push(85);
			}
		case 79:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf = AActor::GetInputAxisValue(FName(TEXT("MoveUp")));
				bpf__GetDirection__pf(bpv__VerticalSpeed__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf, /*out*/ b0l__CallFunc_GetDirection_ReturnDirection_1__pf);
			}
		case 80:
			{
				bpv__VerticalSpeed__pf = b0l__CallFunc_GetDirection_ReturnDirection_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 81:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__VerticalSpeed__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf, bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue_1__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, true, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf, false);
			}
		case 82:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, bpv__HorizontalSpeed__pf, 0.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, true, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
			}
		case 83:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__Health__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 84:
			{
				bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
				bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, bpv__VerticalSpeed__pf, 0.000000);
				bpfv__CallFunc_RInterpTo_ReturnValue__pf = UKismetMathLibrary::RInterpTo(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue_1__pf, bpv__DeltaSeconds__pf, 80.000000);
				if(::IsValid(bpv__playerMesh__pf))
				{
					bpv__playerMesh__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_RInterpTo_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 85:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MoveRight")));
				bpf__GetDirection__pf(bpv__HorizontalSpeed__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, /*out*/ b0l__CallFunc_GetDirection_ReturnDirection__pf);
			}
		case 86:
			{
				bpv__HorizontalSpeed__pf = b0l__CallFunc_GetDirection_ReturnDirection__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__42;
	T__Local__42& bpp__Hit__pf = *const_cast<T__Local__42 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_0(108);
}
void AbpPlayer_C__pf1380491225::bpf__FireRateControl__pf()
{
	bpf__ExecuteUbergraph_bpPlayer__pf_1(103);
}
void AbpPlayer_C__pf1380491225::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__43;
	T__Local__43& bpp__DamageType__pf = *const_cast<T__Local__43 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_2(96);
}
void AbpPlayer_C__pf1380491225::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_6(74);
}
void AbpPlayer_C__pf1380491225::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_bpPlayer__pf_5(70);
}
void AbpPlayer_C__pf1380491225::bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_1(89);
}
void AbpPlayer_C__pf1380491225::bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_1(104);
}
void AbpPlayer_C__pf1380491225::bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_1(41);
}
void AbpPlayer_C__pf1380491225::bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_bpPlayer__pf_1(59);
}
void AbpPlayer_C__pf1380491225::bpf__SpawnAnimation__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_bpPlayer__pf_4(106);
}
void AbpPlayer_C__pf1380491225::bpf__SpawnAnimation__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_bpPlayer__pf_3(107);
}
void AbpPlayer_C__pf1380491225::bpf__GetDirection__pf(float bpp__fSpeed__pf, float bpp__fDirection__pf, /*out*/ float& bpp__ReturnDirection__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_FInterpTo_ReturnValue__pf{};
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__fDirection__pf, bpv__MovementSpeed__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__DeltaSeconds__pf);
	bpfv__CallFunc_FInterpTo_ReturnValue__pf = UKismetMathLibrary::FInterpTo(bpp__fSpeed__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__DeltaSeconds__pf, 4.000000);
	bpv__CurrentSpeed__pf = bpfv__CallFunc_FInterpTo_ReturnValue__pf;
	bpp__ReturnDirection__pf = bpv__CurrentSpeed__pf;
}
void AbpPlayer_C__pf1380491225::bpf__PrimaryFire__pf(USceneComponent* bpp__SpawnLocation__pf)
{
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AbpProjectilePlayerBase_C__pf4197612240* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-5.000000, 5.000000);
	if(::IsValid(bpp__SpawnLocation__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__SpawnLocation__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(-140.000000, 140.000000);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-5.000000, 5.000000);
	if(::IsValid(bpp__SpawnLocation__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__SpawnLocation__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(-140.000000, 140.000000);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AbpProjectilePlayerBase_C__pf4197612240>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
}
void AbpPlayer_C__pf1380491225::bpf__PowerUpFire__pf(int32 bpp__ShotNum__pf, USceneComponent* bpp__SpawnLocation__pf)
{
	int32 bpfv__Offset__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AbpProjectilePlayerBase_C__pf4197612240* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(bpp__ShotNum__pf, -2);
				bpfv__Offset__pf = bpfv__CallFunc_Divide_IntInt_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpp__ShotNum__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(8);
			}
		case 5:
			{
				if(::IsValid(bpp__SpawnLocation__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__SpawnLocation__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Offset__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AbpPlayer_C__pf1380491225::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 6:
			{
				if(::IsValid(bpp__SpawnLocation__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__SpawnLocation__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Offset__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AbpProjectilePlayerBase_C__pf4197612240>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Offset__pf, 1);
				bpfv__Offset__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AbpPlayer_C__pf1380491225::bpf__RocketFire__pf(int32 bpp__ShotNum__pf, USceneComponent* bpp__SpawnLocation__pf)
{
	int32 bpfv__Offset__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AbpProjectilePlayerRocket_C__pf4197612240* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__ShotNum__pf, 1);
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, -1);
				bpfv__Offset__pf = bpfv__CallFunc_Divide_IntInt_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpp__ShotNum__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(8);
			}
		case 5:
			{
				if(::IsValid(bpv__ProjectileSpawn__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__ProjectileSpawn__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Offset__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AbpProjectilePlayerRocket_C__pf4197612240::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 6:
			{
				if(::IsValid(bpv__ProjectileSpawn__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__ProjectileSpawn__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Offset__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AbpProjectilePlayerRocket_C__pf4197612240>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Offset__pf, 4);
				bpfv__Offset__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AbpPlayer_C__pf1380491225::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/enemyShip2.enemyShip2 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pPlayerThurster.pPlayerThurster 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Audio/Shot.Shot 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Realistic_Starter_VFX_Pack_Vol2/Particles/Explosion/P_Explosion_Big_A.P_Explosion_Big_A 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Audio/Explosion.Explosion 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectilePlayerPrimary.bpProjectilePlayerPrimary_C 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectilePlayerPowered.bpProjectilePlayerPowered_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AbpPlayer_C__pf1380491225::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{55, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{57, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpProjectilePlayerPowered_C /Game/Blueprints/Projectiles/bpProjectilePlayerPowered.Default__bpProjectilePlayerPowered_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpProjectilePlayerPrimary_C /Game/Blueprints/Projectiles/bpProjectilePlayerPrimary.Default__bpProjectilePlayerPrimary_C 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Realistic_Starter_VFX_Pack_Vol2/Particles/Explosion/P_Explosion_Big_B.P_Explosion_Big_B 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpCameraCheckExplosion.bpCameraCheckExplosion_C 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpCameraCheckExplosion_C /Game/Blueprints/Misc/bpCameraCheckExplosion.Default__bpCameraCheckExplosion_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/PowerUp.PowerUp 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Projectile.Projectile 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RotatingMovementComponent 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pHitEnemy.pHitEnemy 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpCameraShakeCollision.bpCameraShakeCollision_C 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  bpCameraShakeCollision_C /Game/Blueprints/Misc/bpCameraShakeCollision.Default__bpCameraShakeCollision_C 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree4.tree4 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Button.Button 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ButtonDown.ButtonDown 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
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
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Island.Island 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree.tree 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree2.tree2 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/tree3.tree3 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Materials/mPlayer.mPlayer 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Models/Coin.Coin 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Particles/pHitPlayer.pHitPlayer 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/UI/HUD.HUD_C 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/UI/QuitGame.QuitGame_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Misc/bpGameMod.bpGameMod_C 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Enemies/BpEnemyBase.BpEnemyBase_C 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectileEnemy.bpProjectileEnemy_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Projectiles/bpProjectilePlayerRocket.bpProjectilePlayerRocket_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AbpPlayer_C__pf1380491225
{
	FRegisterHelper__AbpPlayer_C__pf1380491225()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Misc/bpPlayer"), &AbpPlayer_C__pf1380491225::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AbpPlayer_C__pf1380491225 Instance;
};
FRegisterHelper__AbpPlayer_C__pf1380491225 FRegisterHelper__AbpPlayer_C__pf1380491225::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
