// Copyright Zhou

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"
/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase,public IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	AAuraEnemy();
protected:
	virtual void BeginPlay() override;
};
