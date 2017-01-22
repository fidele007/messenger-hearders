/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNParticleEvent.h>

@class NSString;

@interface MNParticleSound : NSObject <MNParticleEvent> {

	long long _soundName;

}

@property (nonatomic,readonly) long long soundName;                 //@synthesize soundName=_soundName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)delayUntilNextEvent;
-(id)initWithSoundName:(long long)arg1 ;
-(long long)soundName;
@end
