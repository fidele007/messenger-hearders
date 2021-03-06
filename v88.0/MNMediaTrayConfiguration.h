/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor;

@interface MNMediaTrayConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowActionView;
	BOOL _shouldShowEditButtonForPhoto;
	BOOL _shouldShowEditButtonForVideo;
	BOOL _shouldShowSendButton;
	BOOL _shouldUseHorizontalLineLayout;
	BOOL _shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange;
	BOOL _shouldUseSquareThumbnail;
	BOOL _shouldShowPhotoOnly;
	long long _style;
	long long _selectionAutoScrollType;
	double _leftInset;
	double _rightInset;
	UIColor* _backgroundColor;
	double _cornerRadius;
	double _itemSpacing;

}

@property (nonatomic,readonly) long long style;                                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long selectionAutoScrollType;                                                        //@synthesize selectionAutoScrollType=_selectionAutoScrollType - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowActionView;                                                                //@synthesize shouldShowActionView=_shouldShowActionView - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEditButtonForPhoto;                                                        //@synthesize shouldShowEditButtonForPhoto=_shouldShowEditButtonForPhoto - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEditButtonForVideo;                                                        //@synthesize shouldShowEditButtonForVideo=_shouldShowEditButtonForVideo - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSendButton;                                                                //@synthesize shouldShowSendButton=_shouldShowSendButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseHorizontalLineLayout;                                                       //@synthesize shouldUseHorizontalLineLayout=_shouldUseHorizontalLineLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange;              //@synthesize shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange=_shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseSquareThumbnail;                                                            //@synthesize shouldUseSquareThumbnail=_shouldUseSquareThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhotoOnly;                                                                 //@synthesize shouldShowPhotoOnly=_shouldShowPhotoOnly - In the implementation block
@property (nonatomic,readonly) double leftInset;                                                                         //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,readonly) double rightInset;                                                                        //@synthesize rightInset=_rightInset - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) double itemSpacing;                                                                       //@synthesize itemSpacing=_itemSpacing - In the implementation block
-(id)initWithStyle:(long long)arg1 selectionAutoScrollType:(long long)arg2 shouldShowActionView:(BOOL)arg3 shouldShowEditButtonForPhoto:(BOOL)arg4 shouldShowEditButtonForVideo:(BOOL)arg5 shouldShowSendButton:(BOOL)arg6 shouldUseHorizontalLineLayout:(BOOL)arg7 shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange:(BOOL)arg8 shouldUseSquareThumbnail:(BOOL)arg9 shouldShowPhotoOnly:(BOOL)arg10 leftInset:(double)arg11 rightInset:(double)arg12 backgroundColor:(id)arg13 cornerRadius:(double)arg14 itemSpacing:(double)arg15 ;
-(BOOL)shouldUseSquareThumbnail;
-(BOOL)shouldShowEditButtonForVideo;
-(BOOL)shouldUseHorizontalLineLayout;
-(BOOL)shouldShowActionView;
-(BOOL)shouldShowEditButtonForPhoto;
-(long long)selectionAutoScrollType;
-(BOOL)shouldHorizontalLineLayoutRemoveOutOfBoundsItemsOnAnimatedBoundsChange;
-(BOOL)shouldShowPhotoOnly;
-(UIColor *)backgroundColor;
-(long long)style;
-(double)cornerRadius;
-(double)itemSpacing;
-(BOOL)shouldShowSendButton;
-(double)leftInset;
-(double)rightInset;
@end

