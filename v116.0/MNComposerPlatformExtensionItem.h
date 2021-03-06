/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FBMemMessengerCallToAction;

@interface MNComposerPlatformExtensionItem : FBValueObject <NSCopying> {

	BOOL _hasDotBadge;
	NSString* _pageID;
	NSString* _name;
	NSURL* _profileImageUrl;
	NSString* _category;
	FBMemMessengerCallToAction* _memCallToAction;

}

@property (nonatomic,copy,readonly) NSString * pageID;                                         //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profileImageUrl;                                   //@synthesize profileImageUrl=_profileImageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                       //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasDotBadge;                                               //@synthesize hasDotBadge=_hasDotBadge - In the implementation block
@property (nonatomic,copy,readonly) FBMemMessengerCallToAction * memCallToAction;              //@synthesize memCallToAction=_memCallToAction - In the implementation block
-(FBMemMessengerCallToAction *)memCallToAction;
-(BOOL)hasDotBadge;
-(id)initWithPageID:(id)arg1 name:(id)arg2 profileImageUrl:(id)arg3 category:(id)arg4 hasDotBadge:(BOOL)arg5 memCallToAction:(id)arg6 ;
-(NSString *)name;
-(NSString *)category;
-(NSURL *)profileImageUrl;
-(NSString *)pageID;
@end

