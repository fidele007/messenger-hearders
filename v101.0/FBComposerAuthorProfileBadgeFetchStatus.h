/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerAuthorProfileBadgeFetchStatus : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasFetchedBadgeURL;
	BOOL _hasFetchedStoryGraphQLID;

}

@property (nonatomic,readonly) BOOL hasFetchedBadgeURL;                    //@synthesize hasFetchedBadgeURL=_hasFetchedBadgeURL - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedStoryGraphQLID;              //@synthesize hasFetchedStoryGraphQLID=_hasFetchedStoryGraphQLID - In the implementation block
-(id)initWithHasFetchedBadgeURL:(BOOL)arg1 hasFetchedStoryGraphQLID:(BOOL)arg2 ;
-(BOOL)hasFetchedBadgeURL;
-(BOOL)hasFetchedStoryGraphQLID;
@end
