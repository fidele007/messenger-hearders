/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBDiodeUnreadThreadViewModel : FBValueObject <NSCopying> {

	BOOL _isCanonicalThread;
	NSArray* _otherParticipants;
	long long _unreadCount;

}

@property (nonatomic,readonly) BOOL isCanonicalThread;                        //@synthesize isCanonicalThread=_isCanonicalThread - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherParticipants;              //@synthesize otherParticipants=_otherParticipants - In the implementation block
@property (nonatomic,readonly) long long unreadCount;                         //@synthesize unreadCount=_unreadCount - In the implementation block
-(BOOL)isCanonicalThread;
-(id)initWithIsCanonicalThread:(BOOL)arg1 otherParticipants:(id)arg2 unreadCount:(long long)arg3 ;
-(NSArray *)otherParticipants;
-(long long)unreadCount;
@end

