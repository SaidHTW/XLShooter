// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"

UCLASS()
class FPSPROJECT_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// ������ײ�����
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComponent;
	
	// �������˶������
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	// �ڷ��䷽�������÷�������ٶȵĺ�����
	void FireInDirection(const FVector& ShootDirection);

	// ��������������ʱ���õĺ�����
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, 
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		FVector NormalImpulse, const FHitResult& Hit);

};
