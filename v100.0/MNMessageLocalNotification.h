/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessage, FBMThreadSummary, FBMUser, MNMessageLocalNotificationContent, MNExtensionThreadData;

@interface MNMessageLocalNotification : FBValueObject <NSCopying> {

	FBMMessage* _message;
	FBMThreadSummary* _threadSummary;
	FBMUser* _sender;
	MNMessageLocalNotificationContent* _content;
	long long _action;
	MNExtensionThreadData* _extensionThreadData;

}

@property (nonatomic,copy,readonly) FBMMessage * message;                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadSummary * threadSummary;                         //@synthesize threadSummary=_threadSummary - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * sender;                                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) MNMessageLocalNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) MNExtensionThreadData * extensionThreadData;              //@synthesize extensionThreadData=_extensionThreadData - In the implementation block
-(FBMThreadSummary *)threadSummary;
-(MNExtensionThreadData *)extensionThreadData;
-(id)initWithMessage:(id)arg1 threadSummary:(id)arg2 sender:(id)arg3 content:(id)arg4 action:(long long)arg5 extensionThreadData:(id)arg6 ;
-(long long)action;
-(FBMMessage *)message;
-(FBMUser *)sender;
-(MNMessageLocalNotificationContent *)content;
@end

