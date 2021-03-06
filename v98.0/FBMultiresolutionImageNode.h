/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASImageNode.h>

@protocol FBMultiresolutionImageNodeDelegate;
@class NSArray, NSMutableArray, FBImageDownloader, ASImageNode, UIImage;

@interface FBMultiresolutionImageNode : ASImageNode {

	BOOL _beganLoadingData;
	BOOL _animationInProgress;
	mutex _propertyLock;
	NSArray* _imageURLs;
	NSMutableArray* _downloadedImages;
	long long _currentlyDisplayedImageIndex;
	long long _previouslyDisplayedImageIndex;
	FBImageDownloader* _imageDownloader;
	ASImageNode* _topImageNode;
	struct {
		unsigned beganLoadingData : 1;
		unsigned finishedLoadingData : 1;
		unsigned didFinishDisplay : 1;
		unsigned willUpdateImageFromImage : 1;
		unsigned didUpdateImageFromImage : 1;
	}  _delegateFlags;
	BOOL _animatesImageTransitions;
	id<FBMultiresolutionImageNodeDelegate> _delegate;
	UIImage* _previewImage;
	double _blurStrength;
	CGSize _mediaSize;

}

@property (assign,nonatomic,__weak) id<FBMultiresolutionImageNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                            //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGSize mediaSize;                                                  //@synthesize mediaSize=_mediaSize - In the implementation block
@property (nonatomic,readonly) double blurStrength;                                               //@synthesize blurStrength=_blurStrength - In the implementation block
@property (assign,nonatomic) BOOL animatesImageTransitions;                                       //@synthesize animatesImageTransitions=_animatesImageTransitions - In the implementation block
-(void)_staticInitialize;
-(id)initWithImageURLs:(id)arg1 previewImage:(id)arg2 mediaSize:(CGSize)arg3 blurStrength:(double)arg4 session:(id)arg5 ;
-(CGSize)mediaSize;
-(void)setAnimatesImageTransitions:(BOOL)arg1 ;
-(void)setCropEnabled:(BOOL)arg1 ;
-(void)setCropEnabled:(BOOL)arg1 recropImmediately:(BOOL)arg2 inBounds:(CGRect)arg3 ;
-(BOOL)animatesImageTransitions;
-(void)displayWillStart;
-(void)_downloadImages;
-(void)_didDownloadImage:(id)arg1 withURL:(id)arg2 imageSource:(unsigned long long)arg3 ;
-(void)_updateDisplayedImageIfNeeded;
-(void)displayDidFinish;
-(double)blurStrength;
-(void)setDelegate:(id<FBMultiresolutionImageNodeDelegate>)arg1 ;
-(id<FBMultiresolutionImageNodeDelegate>)delegate;
-(void)setContentMode:(long long)arg1 ;
-(void)layout;
-(void)fetchData;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
@end

