/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface FBCommentStreamOverlaySpinnerManager : NSObject {

	UIView* _targetView;
	UIView* _spinnerOverlay;

}

@property (getter=isPresentingSpinner,nonatomic,readonly) BOOL presentingSpinner; 
-(void)presentSpinner;
-(void)dismissSpinner;
-(id)initWithTargetView:(id)arg1 ;
-(BOOL)isPresentingSpinner;
@end

