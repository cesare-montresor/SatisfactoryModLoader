// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGColoredInstanceManager.h"

UFGColoredInstanceManager::UFGColoredInstanceManager(){ }
void UFGColoredInstanceManager::OnUnregister(){ Super::OnUnregister(); }
void UFGColoredInstanceManager::OnRegister(){ Super::OnRegister(); }
void UFGColoredInstanceManager::ClearInstances(){ }
void UFGColoredInstanceManager::AddInstance(const FTransform& transform, InstanceHandle& handle, uint8 colorIndex){ }
void UFGColoredInstanceManager::RemoveInstance(InstanceHandle& handle){ }
void UFGColoredInstanceManager::MoveInstance(const FTransform& transform, InstanceHandle& handle, uint8 newColorIndex){ }
void UFGColoredInstanceManager::SetupInstanceLists(UStaticMesh* staticMesh, bool makeCingleColor){ }
void UFGColoredInstanceManager::UpdateMaterialColors(){ }
UHierarchicalInstancedStaticMeshComponent* UFGColoredInstanceManager::GetHierarchicalMesh(uint8 colorIndex){ return nullptr; }
