/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol RCTRootViewDelegate;
@class RCTBridge, NSString, NSDictionary, RCTRootContentView, UIViewController, UIView;

@interface RCTRootView : UIView {

	RCTBridge* _bridge;
	NSString* _moduleName;
	NSDictionary* _launchOptions;
	RCTRootContentView* _contentView;
	NSDictionary* _appProperties;
	long long _sizeFlexibility;
	id<RCTRootViewDelegate> _delegate;
	UIViewController* _reactViewController;
	UIView* _loadingView;
	double _loadingViewFadeDelay;
	double _loadingViewFadeDuration;
	CGSize _intrinsicSize;

}

@property (assign,nonatomic) CGSize intrinsicSize;                                       //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * moduleName;                               //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,readonly) RCTBridge * bridge;                                       //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,copy) NSDictionary * appProperties;                                 //@synthesize appProperties=_appProperties - In the implementation block
@property (assign,nonatomic) long long sizeFlexibility;                                  //@synthesize sizeFlexibility=_sizeFlexibility - In the implementation block
@property (assign,nonatomic,__weak) id<RCTRootViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * reactViewController;              //@synthesize reactViewController=_reactViewController - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                       //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) BOOL passThroughTouches; 
@property (assign,nonatomic) double loadingViewFadeDelay;                                //@synthesize loadingViewFadeDelay=_loadingViewFadeDelay - In the implementation block
@property (assign,nonatomic) double loadingViewFadeDuration;                             //@synthesize loadingViewFadeDuration=_loadingViewFadeDuration - In the implementation block
-(CGSize)intrinsicSize;
-(NSDictionary *)appProperties;
-(void)hideLoadingView;
-(NSString *)moduleName;
-(UIViewController *)reactViewController;
-(id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 ;
-(void)setAppProperties:(NSDictionary *)arg1 ;
-(id)reactTag;
-(void)bridgeDidReload;
-(void)javaScriptDidLoad:(id)arg1 ;
-(void)bundleFinishedLoading:(id)arg1 ;
-(BOOL)passThroughTouches;
-(void)setPassThroughTouches:(BOOL)arg1 ;
-(void)runApplication:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4 ;
-(void)contentViewInvalidated;
-(void)cancelTouches;
-(void)setReactViewController:(UIViewController *)arg1 ;
-(double)loadingViewFadeDelay;
-(void)setLoadingViewFadeDelay:(double)arg1 ;
-(double)loadingViewFadeDuration;
-(void)setLoadingViewFadeDuration:(double)arg1 ;
-(void)setSizeFlexibility:(long long)arg1 ;
-(long long)sizeFlexibility;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCTRootViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<RCTRootViewDelegate>)delegate;
-(UIView *)contentView;
-(BOOL)canBecomeFirstResponder;
-(UIView *)loadingView;
-(void)showLoadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(RCTBridge *)bridge;
@end

