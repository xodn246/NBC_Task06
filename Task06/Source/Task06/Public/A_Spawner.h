// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_Spawner.generated.h"

class UBoxComponent;

UCLASS()
class TASK06_API AA_Spawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AA_Spawner();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Spawner|Component")
	USceneComponent* RootComp;
	UPROPERTY(EditAnywhere, Category = "Spawner|Component")
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, Category = "Spawner|Property")
	TArray<TSubclassOf<AActor>> SpawnActorClass;
	UPROPERTY(EditAnywhere, Category = "Spawner|Property")
	int SpawnCount = 5;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	FVector GetRandomPoint() const;
	void SpawnActor();
};
