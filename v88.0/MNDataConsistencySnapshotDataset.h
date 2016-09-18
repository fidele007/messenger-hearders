/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MNDataConsistencySnapshotDataset : FBValueObject <NSCopying> {

	NSDictionary* _inbox;
	NSDictionary* _messages;
	long long _sequenceId;

}

@property (nonatomic,copy,readonly) NSDictionary * inbox;                 //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                      //@synthesize sequenceId=_sequenceId - In the implementation block
-(long long)sequenceId;
-(id)initWithInbox:(id)arg1 messages:(id)arg2 sequenceId:(long long)arg3 ;
-(NSDictionary *)inbox;
-(NSDictionary *)messages;
@end

