// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Avatar.generated.h"

UCLASS()
class GOLDENEGG_API AAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAvatar();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// Sensitivity
	float Sensitivity;

private:
	void MoveForward(float amount);
	void MoveStrafe(float amount);
	void Yaw(float amount);
	void Pitch(float amount);

	// adjusts controller input amount by delta time and sensitivity
	inline float AdjustControllerAmount(float amount);
};
