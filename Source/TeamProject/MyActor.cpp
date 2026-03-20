// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
	//UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
>>>>>>> b6434f2a08aeb3fc076df3fe131f4db542f2ed81
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

<<<<<<< HEAD
	//UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
>>>>>>> b6434f2a08aeb3fc076df3fe131f4db542f2ed81
}

