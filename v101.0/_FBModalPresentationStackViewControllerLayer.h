/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBModalPresentationLayer.h>

@protocol FBModallyPresentableItem, _FBModalPresentationStackViewControllerLayerDelegate;
@class FBTransparentView, UIView, NSString;

@interface _FBModalPresentationStackViewControllerLayer : NSObject <FBModalPresentationLayer> {

	FBTransparentView* _underlayView;
	FBTransparentView* _contentView;
	FBTransparentView* _overlayView;
	unsigned long long _presentationState;
	id<FBModallyPresentableItem> _presentedItem;
	UIView* _containerView;
	id<_FBModalPresentationStackViewControllerLayerDelegate> _delegate;
	CATransform3D _backgroundTransform;

}

@property (nonatomic,readonly) id<FBModallyPresentableItem> presentedItem;                                          //@synthesize presentedItem=_presentedItem - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) id<_FBModalPresentationStackViewControllerLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBTransparentView * overlayView;                                                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) FBTransparentView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) FBTransparentView * underlayView;                                                    //@synthesize underlayView=_underlayView - In the implementation block
@property (assign,nonatomic) CATransform3D backgroundTransform;                                                     //@synthesize backgroundTransform=_backgroundTransform - In the implementation block
@property (assign,nonatomic) unsigned long long presentationState;                                                  //@synthesize presentationState=_presentationState - In the implementation block
-(FBTransparentView *)underlayView;
-(CATransform3D)backgroundTransform;
-(void)setBackgroundTransform:(CATransform3D)arg1 ;
-(id<FBModallyPresentableItem>)presentedItem;
-(id)initWithPresentedItem:(id)arg1 ;
-(void)setDelegate:(id<_FBModalPresentationStackViewControllerLayerDelegate>)arg1 ;
-(id<_FBModalPresentationStackViewControllerLayerDelegate>)delegate;
-(UIView *)containerView;
-(FBTransparentView *)contentView;
-(FBTransparentView *)overlayView;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(unsigned long long)presentationState;
@end

