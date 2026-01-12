// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_RotationActor.generated.h"

UCLASS()
class TASK06_API AA_RotationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AA_RotationActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RotateActor|Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Component")
	UStaticMeshComponent* MeshComp;
	FQuat CurrentRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	bool ActiveRoll;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	bool ActivePitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	bool ActiveYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	float RollSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	float PitchSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateActor|Property")
	float YawSpeed;
	

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Rotate(float deltaTime);
};
