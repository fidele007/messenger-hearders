/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentHostingViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@protocol FBPaymentsLoadingIndicatorFactory;
@class CKComponentHostingView, UIView, UICollectionView, FBMemScreenAction, FBKeyboardObserver, FBKeyboardTracker, NSString;

@interface FBPageComponentFlowMainView : UIView <CKComponentHostingViewDelegate, FBKeyboardObserverDelegate> {

	CKComponentHostingView* _headerHostingView;
	UIView* _headerSeparatorView;
	UIView* _footerSeparatorView;
	CKComponentHostingView* _actionHostingView;
	CKComponentHostingView* _errorScreenElementHostingView;
	UICollectionView* _collectionView;
	FBMemScreenAction* _screenAction;
	id<FBPaymentsLoadingIndicatorFactory> _loadingIndicatorFactory;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	UIEdgeInsets _contentInsets;
	BOOL _isLoading;
	double _topLayoutGuideLength;

}

@property (assign,nonatomic) BOOL isLoading;                           //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;              //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)_startKeyboardObserving;
-(void)_stopKeyboardObserving;
-(void)updateScreenActionWithStatus:(BOOL)arg1 context:(id)arg2 ;
-(void)removeErrorScreenElement;
-(double)topLayoutGuideLength;
-(void)_updateCollectionViewFrame;
-(void)configureWithScreenData:(id)arg1 context:(id)arg2 ;
-(void)configureWithErrorScreenElement:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
@end

