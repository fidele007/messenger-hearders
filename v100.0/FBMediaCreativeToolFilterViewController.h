/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeToolFilterViewDelegate.h>
#import <Messenger/FBMediaCreativeTool.h>
#import <Messenger/FBVideoCreativeToolsApplierVideoOutputDelegate.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol, FBMediaCreativeToolDelegate;
@class FBUserSession, NSArray, UIView, UISwipeGestureRecognizer, FBMediaCreativeToolFilterView, NSString, FBMediaCreativeToolbar;

@interface FBMediaCreativeToolFilterViewController : UIViewController <FBMediaCreativeToolFilterViewDelegate, FBMediaCreativeTool, FBVideoCreativeToolsApplierVideoOutputDelegate> {

	FBUserSession* _session;
	NSArray* _filters;
	BOOL _masksEnabled;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	UIView* _videoPreviewContentView;
	unsigned long long _frame;
	unsigned long long _selectedFilterIndex;
	long long _cameraPosition;
	UISwipeGestureRecognizer* _leftSwipeGesture;
	UISwipeGestureRecognizer* _rightSwipeGesture;
	BOOL _enableStaticFilteredImage;
	/*^block*/id _extraLoggerBlock;
	id<FBMediaCreativeToolDelegate> _creativeToolDelegate;

}

@property (nonatomic,retain) FBMediaCreativeToolFilterView * view; 
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
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDelegate> creativeToolDelegate;              //@synthesize creativeToolDelegate=_creativeToolDelegate - In the implementation block
@property (assign,nonatomic) BOOL translucent; 
+(id)creativeToolKey;
+(id)_logName;
-(id)initWithSession:(id)arg1 creativeToolsApplier:(id)arg2 filters:(id)arg3 selectedIndexPath:(id)arg4 cameraPosition:(long long)arg5 enableStaticFilteredImage:(BOOL)arg6 logger:(id)arg7 masksEnabled:(BOOL)arg8 extraLoggerBlock:(/*^block*/id)arg9 ;
-(void)creativeToolsApplier:(id)arg1 didOutputVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 contentTransform:(GLKMatrix4)arg3 ;
-(UIView *)videoPreviewContentView;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(void)_swipedLeftOnCameraPreview:(id)arg1 ;
-(void)_swipedRightOnCameraPreview:(id)arg1 ;
-(void)_applyFilterAtIndex:(unsigned long long)arg1 ;
-(void)mediaCreativeToolFilterView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)glyphName;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

