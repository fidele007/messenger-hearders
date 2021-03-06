/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class UIScrollView, FBKeyboardObserver, MNMAIFeedbackView, NSString;

@interface MNMAISurveyFeedbackViewController : UIViewController <FBKeyboardObserverDelegate> {

	UIScrollView* _scrollView;
	FBKeyboardObserver* _keyboardObserver;
	MNMAIFeedbackView* _feedbackView;

}

@property (nonatomic,readonly) MNMAIFeedbackView * feedbackView;              //@synthesize feedbackView=_feedbackView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)initWithViewModel:(id)arg1 ;
-(MNMAIFeedbackView *)feedbackView;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

