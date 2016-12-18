/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString;

@interface FBPublishingAnalyticsPayload : FBValueObject <NSCopying, NSCoding> {

	NSDictionary* _extraDataToIncludeInPublishEvent;
	NSDictionary* _extraDataToIncludeInPublishFailureEvent;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;

}

@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishEvent;                     //@synthesize extraDataToIncludeInPublishEvent=_extraDataToIncludeInPublishEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishFailureEvent;              //@synthesize extraDataToIncludeInPublishFailureEvent=_extraDataToIncludeInPublishFailureEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackSource;                                           //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackReferrer;                                         //@synthesize feedbackReferrer=_feedbackReferrer - In the implementation block
-(NSString *)feedbackSource;
-(NSString *)feedbackReferrer;
-(NSDictionary *)extraDataToIncludeInPublishFailureEvent;
-(NSDictionary *)extraDataToIncludeInPublishEvent;
-(id)initWithExtraDataToIncludeInPublishEvent:(id)arg1 extraDataToIncludeInPublishFailureEvent:(id)arg2 feedbackSource:(id)arg3 feedbackReferrer:(id)arg4 ;
@end
