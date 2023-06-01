// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cake.generated.h"

UCLASS()
class OURLASTMOMENTS_API ACake : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACake();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
