// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 *
 */
UCLASS()
class MULTIPLAYERTEST_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AMovingPlatform();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void AddActiveTrigger();
	void RemoveActiveTrigger();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 ActiveTriggers = 1;
private:

	UPROPERTY(EditAnywhere)
		float Speed = 20;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
		FVector TargetLocation;

	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;
};
