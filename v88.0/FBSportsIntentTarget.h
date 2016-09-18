/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBSportsIntentTarget : FBIntentTarget {

	BOOL _isSportsV2;
	BOOL _fireVisitListeners;
	NSString* _FBID;
	NSString* _matchName;
	unsigned long long _ref;

}

@property (nonatomic,copy,readonly) NSString * FBID;                   //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchName;              //@synthesize matchName=_matchName - In the implementation block
@property (nonatomic,readonly) BOOL isSportsV2;                        //@synthesize isSportsV2=_isSportsV2 - In the implementation block
@property (nonatomic,readonly) BOOL fireVisitListeners;                //@synthesize fireVisitListeners=_fireVisitListeners - In the implementation block
@property (nonatomic,readonly) unsigned long long ref;                 //@synthesize ref=_ref - In the implementation block
+(id)sportsTargetWithMatchFBID:(id)arg1 referrer:(unsigned long long)arg2 matchName:(id)arg3 ;
+(id)sportsV2TargetWithPageFBID:(id)arg1 fireVisitListeners:(BOOL)arg2 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(NSString *)matchName;
-(BOOL)isSportsV2;
-(BOOL)fireVisitListeners;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)ref;
@end

