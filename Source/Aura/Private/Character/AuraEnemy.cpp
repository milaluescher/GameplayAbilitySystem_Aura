// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"
#include "Aura/Aura.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"



AAuroEnemy::AAuroEnemy()
{
    GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
    AbilitySystemComponent->SetIsReplicated(true);  // Server will replicate to clients

    AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

}

void AAuroEnemy::HighlightActor()
{
    GetMesh()->SetRenderCustomDepth(true);
    GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
    Weapon->SetRenderCustomDepth(true);
    Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuroEnemy::UnHighlightActor()
{
    GetMesh()->SetRenderCustomDepth(false);
    Weapon->SetRenderCustomDepth(false);
}

