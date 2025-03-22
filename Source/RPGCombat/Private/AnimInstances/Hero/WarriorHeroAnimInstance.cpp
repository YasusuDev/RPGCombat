#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"

#include "Characters/WarriorHeroCharacter.h"

void UWarriorHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (OwningCharacter)
	{
		OwningHeroCharacter = Cast<AWarriorHeroCharacter>(OwningHeroCharacter);
	}
}

void UWarriorHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	if (bHasAcceleration)
	{
		IdleElapsedTimeTime = 0.f;
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElapsedTimeTime += DeltaSeconds;
		bShouldEnterRelaxState = IdleElapsedTimeTime >= EnterRelaxStateThreshold;
	}
}
