/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBMobileConfigContextManager, NSSet, NSString;

@interface MNMessagesViewParticleSystemLogic : NSObject <FBClassProvidable> {

	FBMobileConfigContextManager* _configManager;
	NSSet* _heartStickerIds;
	NSSet* _balloonStickerIds;
	NSSet* _snowFallEmojiTriggers;
	NSSet* _snowFallStickerIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldFloatHeartsForMessageRow:(id)arg1 ;
-(BOOL)shouldFloatBalloonsForMessageRow:(id)arg1 ;
-(BOOL)shouldSnowFallForMessageRow:(id)arg1 ;
-(id)moneyAmountToRainForMessageRow:(id)arg1 ;
-(BOOL)_isHeartStickerId:(unsigned long long)arg1 ;
-(BOOL)_isBalloonStickerId:(unsigned long long)arg1 ;
-(BOOL)_isSnowFallStickerId:(unsigned long long)arg1 ;
-(id)_getStickerIds:(unsigned long long)arg1 ;
@end

