// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ubisoft_3D_ArtPickUpComponent.h"

UUbisoft_3D_ArtPickUpComponent::UUbisoft_3D_ArtPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UUbisoft_3D_ArtPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UUbisoft_3D_ArtPickUpComponent::OnSphereBeginOverlap);
}

void UUbisoft_3D_ArtPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AUbisoft_3D_ArtCharacter* Character = Cast<AUbisoft_3D_ArtCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
