// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_MoveActor.generated.h"

UCLASS()
class TASK06_API AA_MoveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AA_MoveActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MoveActor|Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Component")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	bool RandomActor = false;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MaxSpeed = 2000;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MinSpeed = 500;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MaxRange = 1000;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MinRange = 1000;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MaxMoveTime = 5;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MinMoveTime = 3;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MaxStopTime = 2;
	UPROPERTY(EditAnywhere, Category = "MoveActor|Property|Random")
	float Random_MinStopTime = 0;

	FVector InitLocate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	FVector MoveDir;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	float MaxRange;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveActor|Property")
	bool IsMove = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MoveActor|Property")
	float moveTime;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MoveActor|Property")
	float stopTime;

	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Move(float deltatime);
	float GetMoveDistance() const;
	void Flip();
	void ToggleMove();
	void ToggleStop();
	void SetRandomParameters();

private:
	FTimerHandle MoveToggleTimeHandle;
};
