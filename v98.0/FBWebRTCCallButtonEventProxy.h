/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebRTCCallButtonEventProxy : NSObject {

	id _sender;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id sender;              //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)forwardEventFromButton:(id)arg1 withEvent:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(id)sender;
-(void)setSender:(id)arg1 ;
@end

