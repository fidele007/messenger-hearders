/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNInboxUnreadMessagesViewModel : FBValueObject <NSCopying> {

	unsigned long long _numberOfUnreadMessages;

}

@property (nonatomic,readonly) unsigned long long numberOfUnreadMessages;              //@synthesize numberOfUnreadMessages=_numberOfUnreadMessages - In the implementation block
-(id)initWithNumberOfUnreadMessages:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUnreadMessages;
@end

