/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBWebImageViewListener.h>

@class UIActivityIndicatorView, UIColor, NSString;

@interface FBWebImagePlaceholderSpinnerView : UIView <FBWebImageViewListener> {

	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _spinnerType;
	UIColor* _spinnerColor;

}

@property (assign,nonatomic) unsigned long long spinnerType;              //@synthesize spinnerType=_spinnerType - In the implementation block
@property (nonatomic,copy) UIColor * spinnerColor;                        //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpinnerType:(unsigned long long)arg1 ;
-(void)webImageViewDidShowPlaceholder:(id)arg1 ;
-(void)webImageViewDidHidePlaceholder:(id)arg1 ;
-(id)initWithWebImageView:(id)arg1 spinnerType:(unsigned long long)arg2 ;
-(unsigned long long)spinnerType;
-(void)layoutSubviews;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

