/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

