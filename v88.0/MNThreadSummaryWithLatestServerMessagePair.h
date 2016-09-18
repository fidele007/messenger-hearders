/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, FBMMessage;

@interface MNThreadSummaryWithLatestServerMessagePair : FBValueObject <NSCopying> {

	FBMThreadSummary* _summary;
	FBMMessage* _latestServerMessage;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) FBMMessage * latestServerMessage;              //@synthesize latestServerMessage=_latestServerMessage - In the implementation block
-(FBMMessage *)latestServerMessage;
-(id)initWithSummary:(id)arg1 latestServerMessage:(id)arg2 ;
-(FBMThreadSummary *)summary;
@end

