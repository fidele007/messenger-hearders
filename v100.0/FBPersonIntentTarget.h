/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemPerson;

@interface FBPersonIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemPerson * person; 
@property (nonatomic,copy,readonly) NSString * commerceSellOptionsID; 
@property (nonatomic,copy,readonly) NSString * referrerType; 
@property (nonatomic,copy,readonly) NSString * referrerTargetID; 
@property (nonatomic,readonly) BOOL isOriginatedFromProfileSurfing; 
@property (nonatomic,copy,readonly) NSString * FBID;                               //@synthesize FBID=_FBID - In the implementation block
+(id)personTargetWithFBID:(id)arg1 ;
+(id)personTargetWithPerson:(id)arg1 ;
+(id)personTargetWithCommerceData:(id)arg1 commerceSellOptionsID:(id)arg2 referrerType:(id)arg3 referrerTargetID:(id)arg4 ;
+(id)personTargetFromProfileSurfing:(id)arg1 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(id)nativeURL;
-(NSString *)commerceSellOptionsID;
-(NSString *)referrerType;
-(NSString *)referrerTargetID;
-(BOOL)isOriginatedFromProfileSurfing;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemPerson *)person;
@end

