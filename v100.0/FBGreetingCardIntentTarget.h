/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemGreetingCard;

@interface FBGreetingCardIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemGreetingCard * greetingCard; 
@property (nonatomic,copy,readonly) NSString * FBID;                          //@synthesize FBID=_FBID - In the implementation block
+(id)greetingCardTargetWithFBID:(id)arg1 ;
+(id)greetingCardTargetWithGreetingCard:(id)arg1 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(FBMemGreetingCard *)greetingCard;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

