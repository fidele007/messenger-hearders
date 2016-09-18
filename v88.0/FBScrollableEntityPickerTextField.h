/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIScrollView, FBEntityPickerTextField, NSArray;

@interface FBScrollableEntityPickerTextField : UIView {

	UIScrollView* _searchFieldScroller;
	BOOL _forceBlackEntityTokenText;
	FBEntityPickerTextField* _searchField;
	NSArray* _accessibilityElements;

}

@property (nonatomic,copy) NSArray * accessibilityElements;                        //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,readonly) FBEntityPickerTextField * searchField;              //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) BOOL forceBlackEntityTokenText;                       //@synthesize forceBlackEntityTokenText=_forceBlackEntityTokenText - In the implementation block
-(void)setForceBlackEntityTokenText:(BOOL)arg1 ;
-(void)scrollToTheEnd;
-(BOOL)forceBlackEntityTokenText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBEntityPickerTextField *)searchField;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)updateContentSize;
@end

