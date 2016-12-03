/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, UILabel, UIView, UIButton;

@interface MNMediaPreviewActionSheetContainerView : UIView {

	NSArray* _accessibilityElements;
	UILabel* _titleLabel;
	UIView* _previewView;
	UIButton* _sendButton;
	UIButton* _editButton;
	UIButton* _cancelButton;

}
-(void)_updateAccessibilityElements;
-(id)initWithSendButton:(id)arg1 editButton:(id)arg2 cancelButton:(id)arg3 ;
-(void)setTitleLabel:(id)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setPreviewView:(id)arg1 ;
@end
