/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerPostPromptPayload : FBValueObject <NSCopying> {

	NSString* _promptID;
	NSString* _promptTrackingString;
	NSString* _promptType;

}

@property (nonatomic,copy,readonly) NSString * promptID;                          //@synthesize promptID=_promptID - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTrackingString;              //@synthesize promptTrackingString=_promptTrackingString - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptType;                        //@synthesize promptType=_promptType - In the implementation block
-(NSString *)promptID;
-(id)initWithPromptID:(id)arg1 promptTrackingString:(id)arg2 promptType:(id)arg3 ;
-(NSString *)promptTrackingString;
-(NSString *)promptType;
@end

