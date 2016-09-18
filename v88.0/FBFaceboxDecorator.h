/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFaceboxDecoratorDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, FBUserSession, FBMemPhoto, FBTagContainerView;

@interface FBFaceboxDecorator : NSObject {

	NSMutableDictionary* _faceboxViews;
	NSMutableDictionary* _faceboxesEdges;
	NSMutableDictionary* _faceboxTaps;
	BOOL _allowAutoTagging;
	FBUserSession* _session;
	FBMemPhoto* _currentPhotoAsset;
	id _handle;
	BOOL _hidden;
	id<FBFaceboxDecoratorDelegate> _delegate;
	FBTagContainerView* _view;

}

@property (assign,nonatomic,__weak) id<FBFaceboxDecoratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBTagContainerView * view;                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                 //@synthesize hidden=_hidden - In the implementation block
-(void)_clearObservationHandle;
-(void)_photoAssetUpdated:(id)arg1 ;
-(void)_handleFaceboxTap:(id)arg1 ;
-(BOOL)_shouldShimmerFacebox:(id)arg1 ;
-(void)_setAllFaceboxesHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleFaceboxShimmer:(id)arg1 ;
-(void)_setAllFaceboxesHighlighted:(BOOL)arg1 ;
-(id)initWithAutoTagging:(BOOL)arg1 session:(id)arg2 ;
-(void)setPhotoAssetID:(id)arg1 ;
-(id)findFaceboxAtPoint:(CGPoint)arg1 ;
-(void)addFaceboxesEdge:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeFaceboxesEdge:(id)arg1 animated:(BOOL)arg2 shrink:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateFaceboxesEdges:(id)arg1 ;
-(void)setFaceboxesEdge:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)faceBoxEdgeWithFaceBoxID:(id)arg1 ;
-(void)resetFaceBoxViews;
-(void)setDelegate:(id<FBFaceboxDecoratorDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id<FBFaceboxDecoratorDelegate>)delegate;
-(FBTagContainerView *)view;
-(void)setView:(FBTagContainerView *)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)hidden;
-(void)refresh;
@end

