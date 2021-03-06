/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIColor;

@interface MNGameAdminMessageViewModel : FBValueObject <NSCopying> {

	NSString* _gameAppID;
	NSString* _threadFBID;
	NSString* _messageID;
	NSString* _senderID;
	NSString* _unfoldCTA;
	NSString* _foldedText;
	NSString* _gameName;
	NSString* _gameImageUri;
	NSString* _unfoldedText;
	NSArray* _leaderboardItems;
	NSString* _leaderboardMoment;
	NSString* _playCTA;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) NSString * gameAppID;                      //@synthesize gameAppID=_gameAppID - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID;                     //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderID;                       //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfoldCTA;                      //@synthesize unfoldCTA=_unfoldCTA - In the implementation block
@property (nonatomic,copy,readonly) NSString * foldedText;                     //@synthesize foldedText=_foldedText - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameName;                       //@synthesize gameName=_gameName - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameImageUri;                   //@synthesize gameImageUri=_gameImageUri - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfoldedText;                   //@synthesize unfoldedText=_unfoldedText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * leaderboardItems;                //@synthesize leaderboardItems=_leaderboardItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * leaderboardMoment;              //@synthesize leaderboardMoment=_leaderboardMoment - In the implementation block
@property (nonatomic,copy,readonly) NSString * playCTA;                        //@synthesize playCTA=_playCTA - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                      //@synthesize themeColor=_themeColor - In the implementation block
-(NSString *)gameAppID;
-(id)initWithGameAppID:(id)arg1 threadFBID:(id)arg2 messageID:(id)arg3 senderID:(id)arg4 unfoldCTA:(id)arg5 foldedText:(id)arg6 gameName:(id)arg7 gameImageUri:(id)arg8 unfoldedText:(id)arg9 leaderboardItems:(id)arg10 leaderboardMoment:(id)arg11 playCTA:(id)arg12 themeColor:(id)arg13 ;
-(NSString *)unfoldCTA;
-(NSString *)foldedText;
-(NSString *)gameImageUri;
-(NSString *)unfoldedText;
-(NSArray *)leaderboardItems;
-(NSString *)playCTA;
-(NSString *)threadFBID;
-(NSString *)leaderboardMoment;
-(NSString *)senderID;
-(UIColor *)themeColor;
-(NSString *)gameName;
-(NSString *)messageID;
@end

