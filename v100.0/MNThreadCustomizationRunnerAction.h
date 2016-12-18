/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface MNThreadCustomizationRunnerAction : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	UIColor* _updateThemeColor_themeColor;
	unsigned long long _updateThemeColor_source;
	NSString* _updateEmoji_emoji;
	unsigned long long _updateEmoji_source;
	NSString* _updateNickname_nickname;
	NSString* _updateNickname_participantId;
	unsigned long long _updateNickname_source;
	NSString* _subscribeBot_botId;
	BOOL _subscribeBot_isSubscribing;
	unsigned long long _subscribeBot_source;

}
+(id)subscribeBotWithBotId:(id)arg1 isSubscribing:(BOOL)arg2 source:(unsigned long long)arg3 ;
+(id)updateEmojiWithEmoji:(id)arg1 source:(unsigned long long)arg2 ;
+(id)updateNicknameWithNickname:(id)arg1 participantId:(id)arg2 source:(unsigned long long)arg3 ;
+(id)updateThemeColorWithThemeColor:(id)arg1 source:(unsigned long long)arg2 ;
-(void)matchUpdateThemeColor:(/*^block*/id)arg1 updateEmoji:(/*^block*/id)arg2 updateNickname:(/*^block*/id)arg3 subscribeBot:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

