// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResearchTree.h"

#if WITH_EDITOR
void UFGResearchTree::PreSave( const  ITargetPlatform* targetPlatform){ }
#endif 
#if WITH_EDITOR
void UFGResearchTree::UpdateAssetBundleData(){ }
#endif 
void UFGResearchTree::PostLoad(){ Super::PostLoad(); }
FPrimaryAssetId UFGResearchTree::GetPrimaryAssetId() const{ return FPrimaryAssetId(); }
FText UFGResearchTree::GetPreUnlockDisplayName( TSubclassOf< UFGResearchTree > inClass){ return FText(); }
FText UFGResearchTree::GetDisplayName( TSubclassOf< UFGResearchTree > inClass){ return FText(); }
FText UFGResearchTree::GetPreUnlockDescription( TSubclassOf< UFGResearchTree > inClass){ return FText(); }
FText UFGResearchTree::GetPostUnlockDescription( TSubclassOf< UFGResearchTree > inClass){ return FText(); }
FSlateBrush UFGResearchTree::GetResearchTreeIcon( TSubclassOf< UFGResearchTree > inClass){ return FSlateBrush(); }
void UFGResearchTree::SetNodes( TSubclassOf <UFGResearchTree> inClass, TArray<  UFGResearchTreeNode* > nodes){ }
TArray< class UFGResearchTreeNode* > UFGResearchTree::GetNodes( TSubclassOf <UFGResearchTree> inClass){ return TArray<class UFGResearchTreeNode*>(); }
bool UFGResearchTree::IsUnlocked( UObject* worldContext, TSubclassOf <UFGResearchTree> inClass){ return bool(); }
bool UFGResearchTree::IsVisible( UObject* worldContext, TSubclassOf <UFGResearchTree> inClass){ return bool(); }
TArray<class UFGAvailabilityDependency *> UFGResearchTree::GetUnlockDependencies( TSubclassOf <UFGResearchTree> inClass){ return TArray<class UFGAvailabilityDependency*>(); }
TArray<class UFGAvailabilityDependency *> UFGResearchTree::GetVisibilityDependencies( TSubclassOf <UFGResearchTree> inClass){ return TArray<class UFGAvailabilityDependency*>(); }