/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNPollDetailViewTableFooterDelegate;
@class UIImageView, UITextField, NSString;

@interface MNPollDetailViewTableFooter : UITableViewHeaderFooterView <UITextFieldDelegate> {

	UIImageView* _addIconImageView;
	UITextField* _textField;
	id<MNPollDetailViewTableFooterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollDetailViewTableFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MNPollDetailViewTableFooterDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPollDetailViewTableFooterDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
@end
