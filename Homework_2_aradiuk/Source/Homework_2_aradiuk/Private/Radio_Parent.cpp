// Fill out your copyright notice in the Description page of Project Settings.


#include "Radio_Parent.h"

// Sets default values
ARadio_Parent::ARadio_Parent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	Scene->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Scene);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Mesh);
	Audio->SetPaused(true);
}

// Called when the game starts or when spawned
void ARadio_Parent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARadio_Parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARadio_Parent::SwitchRadio_Implementation(bool isPaused)
{
	Audio->SetPaused(isPaused);
}