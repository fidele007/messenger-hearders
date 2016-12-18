/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface MNBotsGetStartedIntentTarget : FBIntentTarget {

	NSString* _ctaID;
	NSString* _pageID;

}

@property (nonatomic,copy,readonly) NSString * ctaID;               //@synthesize ctaID=_ctaID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;              //@synthesize pageID=_pageID - In the implementation block
+(id)businessFireCTAIntentTargetWithCtaID:(id)arg1 pageID:(id)arg2 ;
-(NSString *)ctaID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)pageID;
@end

