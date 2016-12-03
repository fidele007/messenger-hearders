/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNInboxTruncationViewModel : FBValueObject <NSCopying> {

	unsigned long long _timestampOfCutoffMessages;
	unsigned long long _numberOfMessagesAfterCutoffToShow;

}

@property (nonatomic,readonly) unsigned long long timestampOfCutoffMessages;                      //@synthesize timestampOfCutoffMessages=_timestampOfCutoffMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMessagesAfterCutoffToShow;              //@synthesize numberOfMessagesAfterCutoffToShow=_numberOfMessagesAfterCutoffToShow - In the implementation block
-(unsigned long long)numberOfMessagesAfterCutoffToShow;
-(unsigned long long)timestampOfCutoffMessages;
-(id)initWithTimestampOfCutoffMessages:(unsigned long long)arg1 numberOfMessagesAfterCutoffToShow:(unsigned long long)arg2 ;
@end
