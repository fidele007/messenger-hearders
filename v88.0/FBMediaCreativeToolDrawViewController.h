/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeToolDrawViewDelegate.h>
#import <Messenger/FBMediaCreativeToolbarDelegate.h>
#import <Messenger/FBMediaCreativeTool.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol;
@class NSString, FBMediaCreativeToolbar, UIView, FBMediaCreativeToolsModel, FBVideoCreativeToolsPreviewOverlayView, FBPanGestureRecognizer, FBMediaCreativeToolDrawView;

@interface FBMediaCreativeToolDrawViewController : UIViewController <FBMediaCreativeToolDrawViewDelegate, FBMediaCreativeToolbarDelegate, FBMediaCreativeTool> {

	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	FBMediaCreativeToolsModel* _model;
	CGSize _rawVideoSize;
	FBVideoCreativeToolsPreviewOverlayView* _videoOverlayView;
	FBMediaCreativeToolbar* _toolbar;
	UIView* _videoPreviewContentView;
	CGPoint _previousTouchPoint;
	GLKVector4 _color;
	FBPanGestureRecognizer* _panRecognizer;

}

@property (nonatomic,retain) FBMediaCreativeToolDrawView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * creativeToolTitle; 
@property (nonatomic,readonly) unsigned long long glyphName; 
@property (nonatomic,readonly) unsigned long long glyphSize; 
@property (nonatomic,readonly) FBMediaCreativeToolbar * creativeToolbar; 
@property (nonatomic,readonly) UIView * creativeToolTrayView; 
@property (nonatomic,readonly) UIView * videoPreviewContentView; 
@property (assign,nonatomic) BOOL translucent; 
+(id)_logName;
-(UIView *)videoPreviewContentView;
-(id)initWithCreativeToolsApplier:(id)arg1 model:(id)arg2 rawVideoSize:(CGSize)arg3 videoOverlayView:(id)arg4 logger:(id)arg5 ;
-(void)_pannedVideoPreviewOverlayView:(id)arg1 ;
-(void)_refreshToolbarButtonStates;
-(unsigned long long)_drawingFilterIndex;
-(void)mediaCreativeToolDrawView:(id)arg1 selectedColor:(id)arg2 ;
-(void)mediaCreativeToolbar:(id)arg1 selectedButtonAtIndex:(unsigned long long)arg2 ;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)undoLastStep;
-(unsigned long long)glyphName;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
@end
