/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

