// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathZone.h"
#include "Rogue.h"

// Sets default values
ADeathZone::ADeathZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DeathBox = CreateDefaultSubobject<UBoxComponent>("DeathBox");
	DeathBox->SetCollisionProfileName(TEXT("DeathZone"));
}

// Called when the game starts or when spawned
void ADeathZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

