/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMThreadMuteSettingsBuilder : NSObject {

	long long _mutedUntil;
	unsigned long long _reactionMuteSetting;
	unsigned long long _mentionMuteSetting;

}
+(id)threadMuteSettingsFromExistingThreadMuteSettings:(id)arg1 ;
+(id)threadMuteSettings;
-(id)withMutedUntil:(long long)arg1 ;
-(id)withMentionMuteSetting:(unsigned long long)arg1 ;
-(id)withReactionMuteSetting:(unsigned long long)arg1 ;
-(id)build;
@end

