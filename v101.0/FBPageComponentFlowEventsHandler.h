/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPageComponentFlowActionHandler;

@interface FBPageComponentFlowEventsHandler : NSObject {

	FBPageComponentFlowActionHandler* _actionHandler;

}
-(void)_handleNewScreenEvent:(id)arg1 eventHandler:(id)arg2 elementId:(id)arg3 ;
-(void)_handleSimpleScreenEvent:(id)arg1 eventHandler:(id)arg2 elementId:(id)arg3 ;
-(void)_handlePartialScreenEvent:(id)arg1 eventHandler:(id)arg2 elementId:(id)arg3 eventData:(id)arg4 ;
-(void)_handleURLNavigationEvent:(id)arg1 eventHandler:(id)arg2 elementId:(id)arg3 ;
-(void)handleEvent:(id)arg1 eventHandler:(id)arg2 elementId:(id)arg3 ;
-(id)initWithActionHandler:(id)arg1 ;
-(void)handleEvent:(id)arg1 eventListeners:(id)arg2 elementId:(id)arg3 ;
@end
