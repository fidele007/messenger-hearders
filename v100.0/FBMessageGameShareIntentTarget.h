/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSNumber, NSURL;

@interface FBMessageGameShareIntentTarget : FBIntentTarget {

	NSString* _gameShareType;
	NSString* _gameId;
	NSNumber* _gameScore;

}

@property (nonatomic,copy,readonly) NSString * gameShareType;              //@synthesize gameShareType=_gameShareType - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameId;                     //@synthesize gameId=_gameId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * gameScore;                  //@synthesize gameScore=_gameScore - In the implementation block
@property (nonatomic,readonly) NSURL * messengerRedirectURL; 
+(id)gameShareIntentTargetForGameShareType:(id)arg1 gameId:(id)arg2 gameScore:(id)arg3 ;
-(id)fallbackURLs;
-(NSString *)gameId;
-(NSURL *)messengerRedirectURL;
-(NSString *)gameShareType;
-(NSNumber *)gameScore;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
