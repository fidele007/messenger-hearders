/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class UIColor, UIImage;

@interface _FBCustomActivityIndicatorLayer : CALayer {

	BOOL _hidesWhenStopped;
	BOOL _viewWasHidden;
	UIColor* _tintColor;
	unsigned long long _activityIndicatorViewStyle;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) unsigned long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                                      //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (assign,nonatomic) BOOL viewWasHidden;                                         //@synthesize viewWasHidden=_viewWasHidden - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
+(id)imageForStyle:(unsigned long long)arg1 ;
-(void)setViewWasHidden:(BOOL)arg1 ;
-(void)_updateContentsWithActivityIndicatorStyle:(unsigned long long)arg1 withTintColor:(id)arg2 ;
-(BOOL)viewWasHidden;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(unsigned long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(unsigned long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
@end

