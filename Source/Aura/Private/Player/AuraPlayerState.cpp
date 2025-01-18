// Copyright Zhou


#include "Player/AuraPlayerState.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"
AAuraPlayerState::AAuraPlayerState()
{
	NetUpdateFrequency=100.f;

	AbilitySystemComponnent=CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");

	AbilitySystemComponnent->SetIsReplicated(true);
	AbilitySystemComponnent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet=CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponnent;
}
