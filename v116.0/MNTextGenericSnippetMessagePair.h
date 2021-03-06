/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAppMessage;

@interface MNTextGenericSnippetMessagePair : FBValueObject <NSCopying> {

	MNAppMessage* _latestMessageForTextSnippet;
	MNAppMessage* _latestMessageForGenericSnippet;

}

@property (nonatomic,copy,readonly) MNAppMessage * latestMessageForTextSnippet;                 //@synthesize latestMessageForTextSnippet=_latestMessageForTextSnippet - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * latestMessageForGenericSnippet;              //@synthesize latestMessageForGenericSnippet=_latestMessageForGenericSnippet - In the implementation block
-(MNAppMessage *)latestMessageForGenericSnippet;
-(MNAppMessage *)latestMessageForTextSnippet;
-(id)initWithLatestMessageForTextSnippet:(id)arg1 latestMessageForGenericSnippet:(id)arg2 ;
@end

