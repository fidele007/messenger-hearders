/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBComposerAlertPresenter.h>

@protocol FBComposerAlertPresentationListener;
@class FBComposerAlert, UIAlertView, NSString;

@interface FBSystemAlertPresenter : NSObject <UIAlertViewDelegate, FBComposerAlertPresenter> {

	id _currentActionListener;
	FBComposerAlert* _currentlyPresentedAlert;
	UIAlertView* _currentlyPresentedAlertView;
	id<FBComposerAlertPresentationListener> _presentationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlert:(id)arg1 actionListener:(id)arg2 ;
-(id)initWithPresentationListener:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

