/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeToolsBaseViewDelegate.h>
#import <Messenger/FBMediaCreativeTool.h>

@protocol FBMediaCreativeToolMaskStrategy, FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol, FBMediaCreativeToolDelegate;
@class FBUserSession, NSArray, FBMediaCreativeToolEffectUsageModel, NSMutableDictionary, NSIndexPath, FBMediaCreativeToolsBaseView, NSString, FBMediaCreativeToolbar, UIView;

@interface FBCreativeToolMaskViewController : UIViewController <FBMediaCreativeToolsBaseViewDelegate, FBMediaCreativeTool> {

	FBUserSession* _session;
	id<FBMediaCreativeToolMaskStrategy> _strategy;
	NSArray* _masks;
	FBMediaCreativeToolEffectUsageModel* _usageModel;
	NSMutableDictionary* _indexPathsToDownloaders;
	id<FBVideoCreativeToolsApplier> _applier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	NSIndexPath* _selectedIndexPath;
	/*^block*/id _extraLoggerBlock;
	BOOL _translucent;
	id<FBMediaCreativeToolDelegate> _creativeToolDelegate;

}

@property (nonatomic,retain) FBMediaCreativeToolsBaseView * view; 
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
@property (assign,nonatomic) BOOL translucent;                                                         //@synthesize translucent=_translucent - In the implementation block
+(id)creativeToolKey;
+(id)_logName;
-(id)_createCollectionViewData;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(UIView *)videoPreviewContentView;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(void)_downloadMask:(BOOL)arg1 intentionally:(BOOL)arg2 apply:(BOOL)arg3 atIndexPath:(id)arg4 ;
-(void)_removeMask;
-(id)_downloaderAtIndexPath:(id)arg1 ;
-(id)_cellModelAtIndexPath:(id)arg1 ;
-(void)_updateCellAtIndexPath:(id)arg1 ;
-(id)_indexPathForMask:(id)arg1 ;
-(id)initWithSession:(id)arg1 strategy:(id)arg2 masks:(id)arg3 selectedIndexPath:(id)arg4 applier:(id)arg5 logger:(id)arg6 extraLoggerBlock:(/*^block*/id)arg7 ;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)translucent;
@end

