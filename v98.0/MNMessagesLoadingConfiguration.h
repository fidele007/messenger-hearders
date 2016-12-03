/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesLoadingConfiguration : FBValueObject <NSCopying> {

	unsigned long long _totalNumberOfMessagesRequested;

}

@property (nonatomic,readonly) unsigned long long totalNumberOfMessagesRequested;              //@synthesize totalNumberOfMessagesRequested=_totalNumberOfMessagesRequested - In the implementation block
-(id)initWithTotalNumberOfMessagesRequested:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfMessagesRequested;
@end
