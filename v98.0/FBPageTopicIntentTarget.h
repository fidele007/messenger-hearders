/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemPageTopic;

@interface FBPageTopicIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemPageTopic * pageTopic; 
@property (nonatomic,copy,readonly) NSString * FBID;                    //@synthesize FBID=_FBID - In the implementation block
+(id)pageTopicTargetWithFBID:(id)arg1 ;
+(id)pageTopicTargetWithPageTopic:(id)arg1 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(FBMemPageTopic *)pageTopic;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
