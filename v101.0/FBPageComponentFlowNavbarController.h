/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageComponentFlowNavbarControllerDelegate;
@class UINavigationItem, FBMemScreenNavbarAction, FBPageComponentFlowEventsHandler;

@interface FBPageComponentFlowNavbarController : NSObject {

	UINavigationItem* _navigationItem;
	FBMemScreenNavbarAction* _navbarAction;
	id<FBPageComponentFlowNavbarControllerDelegate> _delegate;
	FBPageComponentFlowEventsHandler* _eventHandler;

}
-(BOOL)_isValidAction:(id)arg1 ;
-(void)configWithDefaultAction;
-(void)_didTapRightBarButton;
-(id)initWithNavigationItem:(id)arg1 eventHandler:(id)arg2 delegate:(id)arg3 ;
-(void)configWithNavbarAction:(id)arg1 ;
@end
