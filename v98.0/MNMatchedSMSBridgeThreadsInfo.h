/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray;

@interface MNMatchedSMSBridgeThreadsInfo : FBValueObject <NSCopying> {

	NSSet* _smsParicipantIds;
	NSArray* _matchedThreads;

}

@property (nonatomic,copy,readonly) NSSet * smsParicipantIds;              //@synthesize smsParicipantIds=_smsParicipantIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * matchedThreads;              //@synthesize matchedThreads=_matchedThreads - In the implementation block
-(NSArray *)matchedThreads;
-(id)initWithSmsParicipantIds:(id)arg1 matchedThreads:(id)arg2 ;
-(NSSet *)smsParicipantIds;
@end

