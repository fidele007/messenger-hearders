/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBMMessageKey;

@interface MNMessageReactionsViewModel : FBValueObject <NSCopying> {

	NSArray* _topReactions;
	unsigned long long _numberOfReactions;
	FBMMessageKey* _messageKey;

}

@property (nonatomic,copy,readonly) NSArray * topReactions;                       //@synthesize topReactions=_topReactions - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfReactions;              //@synthesize numberOfReactions=_numberOfReactions - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                   //@synthesize messageKey=_messageKey - In the implementation block
-(FBMMessageKey *)messageKey;
-(id)initWithTopReactions:(id)arg1 numberOfReactions:(unsigned long long)arg2 messageKey:(id)arg3 ;
-(unsigned long long)numberOfReactions;
-(NSArray *)topReactions;
@end

