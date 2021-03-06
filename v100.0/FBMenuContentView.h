/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMenuContentViewDelegate;
@class NSMutableArray, NSArray;

@interface FBMenuContentView : UIView {

	id<FBMenuContentViewDelegate> _delegate;
	NSMutableArray* _buttons;
	NSMutableArray* _separators;

}

@property (assign,nonatomic,__weak) id<FBMenuContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
-(void)displayButtonTitles:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMenuContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMenuContentViewDelegate>)delegate;
-(NSArray *)buttons;
-(void)_buttonPressed:(id)arg1 ;
@end

