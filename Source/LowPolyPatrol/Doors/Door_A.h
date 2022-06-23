// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_A.generated.h"

UCLASS()
class LOWPOLYPATROL_API ADoor_A : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor_A();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
