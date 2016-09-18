/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>

@protocol UIActionSheetDelegate;
@class FBActionSheetCoordinator, FBDelegateForwarder;

@interface FBActionSheet : UIActionSheet {

	FBActionSheetCoordinator* _coordinator;
	FBDelegateForwarder* _forwarder;
	long long _fbFirstOtherButtonIndex;
	id<UIActionSheetDelegate> _mainDelegate;

}

@property (assign,nonatomic,__weak) id<UIActionSheetDelegate> mainDelegate;              //@synthesize mainDelegate=_mainDelegate - In the implementation block
+(void)initialize;
-(void)_resetForwarder;
-(void)setMainDelegate:(id<UIActionSheetDelegate>)arg1 ;
-(id<UIActionSheetDelegate>)mainDelegate;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 coordinator:(id)arg6 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(long long)firstOtherButtonIndex;
@end
