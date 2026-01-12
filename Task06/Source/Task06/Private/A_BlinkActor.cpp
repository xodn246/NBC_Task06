// Fill out your copyright notice in the Description page of Project Settings.


#include "A_BlinkActor.h"

AA_BlinkActor::AA_BlinkActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(SceneRoot);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	MeshComp->SetupAttachment(SceneRoot);

}

void AA_BlinkActor::BeginPlay()
{
	Super::BeginPlay();
	
	IsBlink = false;
	GetWorldTimerManager().SetTimer(BlinkToggleTimeHandle, this, &AA_BlinkActor::ToggleVisible, StartDelay, false);

}

void AA_BlinkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AA_BlinkActor::ToggleVisible()
{
	GetWorldTimerManager().SetTimer(BlinkToggleTimeHandle, this, &AA_BlinkActor::ToggleInvisible, VisibleTime, false);
	IsBlink = true;
	SetPlatformActive(IsBlink);
}

void AA_BlinkActor::ToggleInvisible()
{
	GetWorldTimerManager().SetTimer(BlinkToggleTimeHandle, this, &AA_BlinkActor::ToggleVisible, InVisibleTime, false);
	IsBlink = false;
	SetPlatformActive(IsBlink);
}

void AA_BlinkActor::SetPlatformActive(bool isActive) {
	MeshComp->SetVisibility(isActive, true);
	MeshComp->SetCollisionEnabled(isActive ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
}
