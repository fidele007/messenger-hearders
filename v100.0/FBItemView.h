/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@class UIImageView, UIView, UIAccessibilityElement, NSString;

@interface FBItemView : UIView <FBUIConfigurable, FBUIThreadSafeSizable> {

	UIImageView* _imageView;
	UIView* _contentView;
	UIView* _auxView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UIAccessibilityElement* _accessibilityElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)defaultFBUIConfig;
+(FBItemViewLayout)_layoutForConfig:(id)arg1 contentView:(id)arg2 contentViewConfig:(id)arg3 auxView:(id)arg4 auxViewConfig:(id)arg5 size:(CGSize)arg6 ;
+(FBItemViewLayout)_layoutForConfig:(id)arg1 contentView:(id)arg2 auxView:(id)arg3 size:(CGSize)arg4 ;
+(CGSize)_sizeThatFits:(id)arg1 layout:(FBItemViewLayout)arg2 size:(CGSize)arg3 ;
+(id)newWithImage:(id)arg1 contentView:(id)arg2 ;
+(id)newWithNetworkImageView:(id)arg1 contentView:(id)arg2 ;
+(id)newWithContentView:(id)arg1 auxView:(id)arg2 ;
+(id)newWithImage:(id)arg1 contentView:(id)arg2 auxView:(id)arg3 ;
+(id)newWithNetworkImageView:(id)arg1 contentView:(id)arg2 auxView:(id)arg3 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)auxView;
-(id)_accessibilityElement;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)contentView;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)accessibilityLabel;
-(id)config;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)applyConfig:(id)arg1 ;
@end

