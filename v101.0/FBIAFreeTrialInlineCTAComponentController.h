/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class FBIAFreeTrialInlineCTAComponent;

@interface FBIAFreeTrialInlineCTAComponentController : CKComponentController {

	BOOL _loggedViewedAction;

}

@property (nonatomic,readonly) FBIAFreeTrialInlineCTAComponent * component; 
@property (assign,nonatomic) BOOL loggedViewedAction;                                    //@synthesize loggedViewedAction=_loggedViewedAction - In the implementation block
-(void)didRemount;
-(void)didTapOnToSLabel:(id)arg1 withCheckingResults:(id)arg2 ;
-(void)didTapCTAButton;
-(BOOL)loggedViewedAction;
-(void)setLoggedViewedAction:(BOOL)arg1 ;
@end
