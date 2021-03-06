/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFeedEdgeSource : FBValueObject <NSCopying> {

	NSString* _loadRequestUUID;
	NSString* _responseUUID;

}

@property (nonatomic,copy,readonly) NSString * loadRequestUUID;              //@synthesize loadRequestUUID=_loadRequestUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                 //@synthesize responseUUID=_responseUUID - In the implementation block
-(NSString *)responseUUID;
-(NSString *)loadRequestUUID;
-(id)initWithLoadRequestUUID:(id)arg1 responseUUID:(id)arg2 ;
@end

