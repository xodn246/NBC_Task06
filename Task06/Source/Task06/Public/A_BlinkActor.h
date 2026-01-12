// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "A_BlinkActor.generated.h"

UCLASS()
class TASK06_API AA_BlinkActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AA_BlinkActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BlinkActor|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlinkActor|Component")
	UStaticMeshComponent* MeshComp;


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void ToggleVisible();
	void ToggleInvisible();
	void SetPlatformActive(bool isActive);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BlinkActor|Property")
	bool IsBlink;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlinkActor|Property")
	float VisibleTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlinkActor|Property")
	float InVisibleTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlinkActor|Property")
	float StartDelay;

private:
	FTimerHandle BlinkToggleTimeHandle;
};
