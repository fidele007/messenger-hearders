/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpPresentationHandler.h>

@class UINavigationController, NSString;

@interface MNUserSetUpNavigationPresentationHandler : NSObject <MNUserSetUpPresentationHandler> {

	UINavigationController* _presentingNavigationController;

}

@property (nonatomic,retain) UINavigationController * presentingNavigationController;              //@synthesize presentingNavigationController=_presentingNavigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_getTrasitionForTransitioningFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionType:(id)arg3 andSubTransitionType:(id)arg4 ;
-(void)transitionFromStepViewController:(id)arg1 toStepViewController:(id)arg2 ;
-(void)setPresentingNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)presentingNavigationController;
-(id)initWithNavigationController:(id)arg1 ;
@end

