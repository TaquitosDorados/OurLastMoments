// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

#include "OurLastMomentsCharacter.h"
#include "Components/SphereComponent.h"

// Sets default values
AItem::AItem()
{
 	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AOurLastMomentsCharacter* MyCharacter = Cast<AOurLastMomentsCharacter>(OtherActor);
	
	if(MyCharacter)
	{
		/*
		MyCharacter.cakeTaken = false;
		MyCharacter.guitarTaken = false;
		MyCharacter.photoTaken = false;
		MyCharacter.bookTaken = false;

		if(Cake)
		{
			MyCharacter.cakeTaken = true;
		}
		Destroy();
		*/
	} 
}