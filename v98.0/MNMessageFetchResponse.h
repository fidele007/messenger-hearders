/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, FBMIndexedMessageSet;

@interface MNMessageFetchResponse : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	FBMIndexedMessageSet* _messageSet;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                 //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedMessageSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
-(FBMIndexedMessageSet *)messageSet;
-(id)initWithThreadKey:(id)arg1 messageSet:(id)arg2 ;
-(FBMSyncedThreadKey *)threadKey;
@end

