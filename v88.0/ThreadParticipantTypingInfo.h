/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ThreadParticipantTypingInfo : NSObject {

	int _lastTypingReceivedState;
	double _lastTypingReceivedTime;

}

@property (nonatomic,readonly) int lastTypingReceivedState;                //@synthesize lastTypingReceivedState=_lastTypingReceivedState - In the implementation block
@property (nonatomic,readonly) double lastTypingReceivedTime;              //@synthesize lastTypingReceivedTime=_lastTypingReceivedTime - In the implementation block
-(double)lastTypingReceivedTime;
-(int)lastTypingReceivedState;
-(id)initWithTypingState:(int)arg1 receivedTime:(double)arg2 ;
@end

