/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoTagGuideTagletDelegate;
@class NSMutableArray, FBUserSession, FBPhotoTagGuideTaglet, FBTagContainerView, NSArray;

@interface FBTagAggregator : NSObject {

	double _minimumScale;
	double _maximumScale;
	NSMutableArray* _photoTaglets;
	FBUserSession* _session;
	id<FBPhotoTagGuideTagletDelegate> _delegate;
	double _scale;
	FBPhotoTagGuideTaglet* _tagGuideTaglet;
	FBTagContainerView* _view;
	NSArray* _tagletsCommitted;
	NSArray* _tagletsGenerated;

}

@property (nonatomic,retain) NSArray * tagletsCommitted;                                     //@synthesize tagletsCommitted=_tagletsCommitted - In the implementation block
@property (nonatomic,retain) NSArray * tagletsGenerated;                                     //@synthesize tagletsGenerated=_tagletsGenerated - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoTagGuideTagletDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL dirty; 
@property (nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) double minimumScale;                                          //@synthesize minimumScale=_minimumScale - In the implementation block
@property (nonatomic,readonly) double maximumScale;                                          //@synthesize maximumScale=_maximumScale - In the implementation block
@property (nonatomic,readonly) FBPhotoTagGuideTaglet * tagGuideTaglet;                       //@synthesize tagGuideTaglet=_tagGuideTaglet - In the implementation block
@property (nonatomic,retain) FBTagContainerView * view;                                      //@synthesize view=_view - In the implementation block
-(void)setTagletsGenerated:(NSArray *)arg1 ;
-(void)setTagletsCommitted:(NSArray *)arg1 ;
-(void)_setScaleState;
-(void)addPhotoTaglet:(id)arg1 ;
-(NSArray *)tagletsCommitted;
-(NSArray *)tagletsGenerated;
-(void)removeAllTaglets;
-(void)removeTaggable:(id)arg1 ;
-(void)addTaggableEdge:(id)arg1 ;
-(void)removeAllTaggableEdges;
-(id)findTagletByTaggbleEdge:(id)arg1 ;
-(void)generateAggregatedTagletsWithMinimumScale:(double)arg1 maximumScale:(double)arg2 ;
-(void)commitWithAnimation:(unsigned long long)arg1 ;
-(BOOL)generated;
-(void)adjustScaleWithMultiplier:(double)arg1 ;
-(void)setScale:(double)arg1 animated:(BOOL)arg2 ;
-(void)removeTagGuide;
-(void)addTagGuideForFacebox:(id)arg1 ;
-(FBPhotoTagGuideTaglet *)tagGuideTaglet;
-(void)setDelegate:(id<FBPhotoTagGuideTagletDelegate>)arg1 ;
-(id<FBPhotoTagGuideTagletDelegate>)delegate;
-(FBTagContainerView *)view;
-(void)setScale:(double)arg1 ;
-(void)setView:(FBTagContainerView *)arg1 ;
-(double)scale;
-(double)maximumScale;
-(double)minimumScale;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)refresh;
-(id)initWithSession:(id)arg1 ;
@end

