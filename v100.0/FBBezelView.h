/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIActivityIndicatorView, FBKVOController;

@interface FBBezelView : UIView {

	UILabel* _label;
	UIImageView* _checkmark;
	UIActivityIndicatorView* _spinner;
	FBKVOController* _observer;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)stopActivityIndicatorWithCheckmark:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startActivityIndicator;
@end

