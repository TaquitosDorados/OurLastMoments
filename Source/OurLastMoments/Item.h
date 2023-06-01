// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USphereComponent;
UCLASS()
class OURLASTMOMENTS_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Cake")
	bool Cake;
	UPROPERTY(VisibleAnywhere, Category = "Guitar")
	bool Guitar;
	UPROPERTY(VisibleAnywhere, Category = "Photo")
	bool Photo;
	UPROPERTY(VisibleAnywhere, Category = "Book")
	bool Book;
	
public:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
