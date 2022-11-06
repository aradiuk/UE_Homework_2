// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Radio_Parent.h"
#include "MyRadio_Overlap.generated.h"

/**
 * 
 */
UCLASS()
class HOMEWORK_2_ARADIUK_API AMyRadio_Overlap : public ARadio_Parent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyRadio_Overlap();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* BoxCollision;

	UFUNCTION(BlueprintCallable)
	void TurnSound(AActor* overlappingActor, bool isPaused);
};
