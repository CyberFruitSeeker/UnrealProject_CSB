// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPawn_001.h"

// Sets default values
ATestPawn_001::ATestPawn_001()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPawn_001::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPawn_001::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestPawn_001::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

