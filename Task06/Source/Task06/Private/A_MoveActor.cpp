// Fill out your copyright notice in the Description page of Project Settings.


#include "A_MoveActor.h"

// Sets default values
AA_MoveActor::AA_MoveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(SceneRoot);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	MeshComp->SetupAttachment(SceneRoot);
}

// Called when the game starts or when spawned
void AA_MoveActor::BeginPlay()
{
	Super::BeginPlay();

	InitLocate = GetActorLocation();
	ToggleMove();
}

// Called every frame
void AA_MoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(IsMove)
	{
		Move(DeltaTime);
	}
}

void AA_MoveActor::Move(float deltaTime) 
{
	FVector normalDir = MoveDir.GetSafeNormal();
	FVector NewLocation = GetActorLocation() + MoveDir * MoveSpeed * deltaTime;

	SetActorLocation(NewLocation);
	
	if (GetMoveDistance() >= MaxRange) 
	{
		InitLocate = GetActorLocation();
		Flip();
	}
}

float AA_MoveActor::GetMoveDistance() const 
{
	return FVector::Dist(GetActorLocation(), InitLocate);
}

void AA_MoveActor::Flip() 
{
	MoveDir *= -1;
}

void AA_MoveActor::ToggleMove() 
{
	IsMove = true;
	GetWorldTimerManager().SetTimer(MoveToggleTimeHandle, this, &AA_MoveActor::ToggleStop, moveTime, false);

}

void AA_MoveActor::ToggleStop()
{
	IsMove = false;
	GetWorldTimerManager().SetTimer(MoveToggleTimeHandle, this, &AA_MoveActor::ToggleMove, stopTime, false);

}