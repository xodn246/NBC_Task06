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

	FVector InitLocate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	FVector MoveDir;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor|Property")
	float MaxRange;

	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Move(float deltatime);
	float GetMoveDistance() const;
	void Flip();
};
