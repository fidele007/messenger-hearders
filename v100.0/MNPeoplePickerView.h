/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNTokenFieldView, UIView;

@interface MNPeoplePickerView : UIView {

	MNTokenFieldView* _tokenField;
	UIView* _suggestionsView;
	UIView* _peopleSearchView;

}

@property (nonatomic,retain) UIView * suggestionsView;                     //@synthesize suggestionsView=_suggestionsView - In the implementation block
@property (nonatomic,retain) UIView * peopleSearchView;                    //@synthesize peopleSearchView=_peopleSearchView - In the implementation block
@property (nonatomic,readonly) MNTokenFieldView * tokenField;              //@synthesize tokenField=_tokenField - In the implementation block
-(void)mn_setBottomContentInset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tokenFieldStyle:(long long)arg2 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(MNTokenFieldView *)tokenField;
-(UIView *)suggestionsView;
-(void)setSuggestionsView:(UIView *)arg1 ;
-(void)setPeopleSearchView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tokenFieldStyle:(long long)arg2 tokenLabelText:(id)arg3 ;
-(UIView *)peopleSearchView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
@end

