// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Garden.generated.h"

UCLASS()
class GGJ_2023_API AGarden : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGarden();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
