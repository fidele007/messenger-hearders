/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAlertViewProtocol.h>

@class UIAlertController, UIViewController, NSString;

@interface FBAlertViewAlertControllerAdaptor : NSObject <FBAlertViewProtocol> {

	UIAlertController* _alertController;
	UIViewController* _presentingViewController;
	BOOL _visible;
	id _delegate;
	long long _alertViewStyle;
	long long _tag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long tag;                                  //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) long long alertViewStyle;                       //@synthesize alertViewStyle=_alertViewStyle - In the implementation block
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 presentingViewController:(id)arg6 ;
-(long long)_addAlertActionWithTitle:(id)arg1 alertActionStyle:(long long)arg2 ;
-(void)_notifyDelegateOfClickedButtonAtIndex:(long long)arg1 ;
-(void)_notifyDelegateOfWillDismissWithButtonIndex:(long long)arg1 ;
-(void)_notifyDelegateOfDidDismissWithButtonIndex:(long long)arg1 ;
-(void)_handleAlertActionWithButtonIndex:(long long)arg1 ;
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(NSString *)title;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(NSString *)message;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isVisible;
-(long long)firstOtherButtonIndex;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(void)setAlertViewStyle:(long long)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
@end
