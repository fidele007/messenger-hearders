/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, UIColor, FBMEventReminder;

@interface FBMAdminTextBuilder : NSObject {

	NSString* _genericAdminTextType;
	NSArray* _colorChoices;
	NSArray* _emojiChoices;
	NSArray* _botChoices;
	NSDictionary* _nicknameChoices;
	NSString* _threadIcon;
	UIColor* _themeColor;
	NSString* _participantID;
	NSString* _nickname;
	NSString* _event;
	NSString* _serverInfoData;
	BOOL _isVideoCall;
	NSString* _providerName;
	NSString* _adPreferencesLink;
	NSArray* _adProperties;
	NSString* _intentID;
	NSString* _gameType;
	long long _gameScore;
	BOOL _gameIsNewHighScore;
	unsigned long long _joinableModeUpdate;
	NSString* _smsParticipantPhoneNumber;
	NSString* _instantGameAppId;
	NSString* _bookingRequestId;
	FBMEventReminder* _eventReminder;
	NSString* _favoritedItemURL;

}
+(id)adminText;
+(id)adminTextFromExistingAdminText:(id)arg1 ;
-(id)withThemeColor:(id)arg1 ;
-(id)withGenericAdminTextType:(id)arg1 ;
-(id)withColorChoices:(id)arg1 ;
-(id)withEmojiChoices:(id)arg1 ;
-(id)withBotChoices:(id)arg1 ;
-(id)withNicknameChoices:(id)arg1 ;
-(id)withThreadIcon:(id)arg1 ;
-(id)withParticipantID:(id)arg1 ;
-(id)withNickname:(id)arg1 ;
-(id)withEvent:(id)arg1 ;
-(id)withServerInfoData:(id)arg1 ;
-(id)withIsVideoCall:(BOOL)arg1 ;
-(id)withProviderName:(id)arg1 ;
-(id)withAdPreferencesLink:(id)arg1 ;
-(id)withAdProperties:(id)arg1 ;
-(id)withIntentID:(id)arg1 ;
-(id)withGameType:(id)arg1 ;
-(id)withGameScore:(long long)arg1 ;
-(id)withGameIsNewHighScore:(BOOL)arg1 ;
-(id)withJoinableModeUpdate:(unsigned long long)arg1 ;
-(id)withSmsParticipantPhoneNumber:(id)arg1 ;
-(id)withInstantGameAppId:(id)arg1 ;
-(id)withBookingRequestId:(id)arg1 ;
-(id)withEventReminder:(id)arg1 ;
-(id)withFavoritedItemURL:(id)arg1 ;
-(id)build;
@end

