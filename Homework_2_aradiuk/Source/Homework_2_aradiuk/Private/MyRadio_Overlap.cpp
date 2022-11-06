// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRadio_Overlap.h"

AMyRadio_Overlap::AMyRadio_Overlap()
{
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxCollision->SetupAttachment(Audio);
}

void AMyRadio_Overlap::TurnSound(AActor* overlappingActor, bool isPaused)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		SwitchRadio(isPaused);
	}
}
