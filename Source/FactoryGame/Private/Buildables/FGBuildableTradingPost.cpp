// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableTradingPost.h"

AFGBuildableTradingPost::AFGBuildableTradingPost(){ }
void AFGBuildableTradingPost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableTradingPost::BeginPlay(){ }
void AFGBuildableTradingPost::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableTradingPost::Dismantle_Implementation(){ }
void AFGBuildableTradingPost::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableTradingPost::StartIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildableTradingPost::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildableTradingPost::OnTradingPostUpgraded_Implementation(int32 level, bool suppressBuildEffects){ }
void AFGBuildableTradingPost::UpdateGeneratorVisibility(){ }
void AFGBuildableTradingPost::UpdateStorageVisibility(){ }
int32 AFGBuildableTradingPost::GetTradingPostLevel() const{ return int32(); }
void AFGBuildableTradingPost::PlayBuildEffects(AActor* inInstigator){ }
void AFGBuildableTradingPost::ExecutePlayBuildEffects(){ }
void AFGBuildableTradingPost::PlayBuildEffectsOnAllClients(AActor* instigator){ }
bool AFGBuildableTradingPost::AreChildBuildingsLoaded(){ return bool(); }
void AFGBuildableTradingPost::ValidateSubBuildings(){ }
TArray<AActor*> AFGBuildableTradingPost::GetAllActiveSubBuildings(){ return TArray<AActor*>(); }
void AFGBuildableTradingPost::OnBuildEffectFinished(){ }
void AFGBuildableTradingPost::TogglePendingDismantleMaterial(bool enabled){ }
void AFGBuildableTradingPost::OnRep_HAXX_SubbuildingReplicated(){ }
void AFGBuildableTradingPost::AdjustPlayerSpawnsToGround(){ }
AFGSchematicManager* AFGBuildableTradingPost::GetSchematicManager(){ return nullptr; }
void AFGBuildableTradingPost::OnRep_NeedPlayingBuildEffect(){ }
