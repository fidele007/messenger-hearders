/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMIndexedUserSet, FBMThreadSummary;

@interface MNGroupsThreadViewModel : FBValueObject <NSCopying> {

	FBMIndexedUserSet* _users;
	FBMThreadSummary* _threadSummary;

}

@property (nonatomic,copy,readonly) FBMIndexedUserSet * users;                     //@synthesize users=_users - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadSummary * threadSummary;              //@synthesize threadSummary=_threadSummary - In the implementation block
-(id)initWithUsers:(id)arg1 threadSummary:(id)arg2 ;
-(FBMThreadSummary *)threadSummary;
-(FBMIndexedUserSet *)users;
@end

