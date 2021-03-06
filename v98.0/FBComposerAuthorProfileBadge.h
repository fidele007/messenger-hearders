/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, FBComposerAuthorProfileBadgeFetchStatus;

@interface FBComposerAuthorProfileBadge : FBValueObject <NSCopying, NSCoding> {

	NSURL* _badgeURL;
	NSString* _storyGraphQLID;
	FBComposerAuthorProfileBadgeFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSURL * badgeURL;                                                   //@synthesize badgeURL=_badgeURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyGraphQLID;                                          //@synthesize storyGraphQLID=_storyGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthorProfileBadgeFetchStatus * fetchStatus;              //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(FBComposerAuthorProfileBadgeFetchStatus *)fetchStatus;
-(NSString *)storyGraphQLID;
-(id)initWithBadgeURL:(id)arg1 storyGraphQLID:(id)arg2 fetchStatus:(id)arg3 ;
-(NSURL *)badgeURL;
@end

