/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBKeyboardFocusedViewDisplayer : NSObject {

	double _keyboardOffset;
	double _keyboardHeight;

}
-(id)initWithKeyboardOffset:(double)arg1 ;
-(void)keyboardWillShowWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 scrollView:(id)arg5 ;
-(void)keyboardWillHideWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 scrollView:(id)arg5 ;
-(id)init;
@end

